#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(int argc, char ** argv)
{
   string buffer;
	int s = 512;

//if argc == 1 then there is no option (i.e. -d) 
//if there is an option that doesn't correlate then it will ignore 
    while(feof(stdin) != 1 ){
      getline(cin, buffer);
	if(strcmp (argv[1], "-d") == 0 )
	{
		if(buffer.find("directories") != string::npos){
			cout << buffer << endl; 
		}
	}
	else if(strcmp (argv[1], "-f") == 0 )
	{
		if(buffer.find("files") != string::npos){
			cout << buffer << endl; 
		}
	}
	if(strcmp (argv[1], "-b") == 0 )
	{
		if(buffer.find("bytes") != string::npos){
			cout << buffer << endl; 
		}
	}
      //cout << "Got " << buffer << endl;
    }
    return 0;
}
