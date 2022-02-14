
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
struct addrinfo {int ai_flags; int ai_socktype; int ai_family; } ;
typedef int hints ;
typedef int getaddrinfo ;
typedef int freeaddrinfo ;
typedef scalar_t__ curl_socket_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 struct hostent* FUNC_1 (char const*) ;
 char* VAR_8 ;
 int FUNC_2 (struct addrinfo*,int ,int) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_8 () ;

int FUNC_9(int VAR_11, char *VAR_12[])
{
  int VAR_13 = 1;
  const char *VAR_14 = ((void*)0);
  int VAR_15 = 0;

  while(VAR_11>VAR_13) {
    if(!FUNC_7("--version", VAR_12[VAR_13])) {
      FUNC_3("resolve IPv4%s\n",



             ""

             );
      return 0;
    }
    else if(!FUNC_7("--ipv6", VAR_12[VAR_13])) {
      VAR_8 = "IPv6";
      VAR_9 = VAR_7;
      VAR_13++;
    }
    else if(!FUNC_7("--ipv4", VAR_12[VAR_13])) {

      VAR_8 = "IPv4";
      VAR_9 = VAR_2;
      VAR_13++;
    }
    else {
      VAR_14 = VAR_12[VAR_13++];
    }
  }
  if(!VAR_14) {
    FUNC_4("Usage: resolve [option] <host>\n"
         " --version\n"
         " --ipv4"



         );
    return 1;
  }
  if(VAR_9) {
    FUNC_4("IPv6 support has been disabled in this program");
    return 1;
  }
  else {

    struct hostent *VAR_16;

    VAR_16 = FUNC_1(VAR_14);

    VAR_15 = !VAR_16;
  }


  if(VAR_15)
    FUNC_3("Resolving %s '%s' didn't work\n", VAR_8, VAR_14);

  return !!VAR_15;
}
