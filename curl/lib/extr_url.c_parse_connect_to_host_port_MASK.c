
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct Curl_easy*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct Curl_easy*,char*,...) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 long FUNC_8 (char*,char**,int) ;

__attribute__((used)) static CURLcode FUNC_9(struct Curl_easy *VAR_3,
                                           const char *VAR_4,
                                           char **VAR_5,
                                           int *VAR_6)
{
  char *VAR_7;
  char *VAR_8;
  char *VAR_9;
  char *VAR_10;
  int VAR_11 = -1;





  *VAR_5 = ((void*)0);
  *VAR_6 = -1;

  if(!VAR_4 || !*VAR_4)
    return VAR_1;

  VAR_7 = FUNC_6(VAR_4);
  if(!VAR_7)
    return VAR_2;

  VAR_8 = VAR_7;


  VAR_10 = VAR_8;


  if(*VAR_8 == '[') {
    FUNC_2(VAR_3, "Use of IPv6 in *_CONNECT_TO without IPv6 support built-in!");
    FUNC_3(VAR_7);
    return VAR_0;

  }


  VAR_9 = FUNC_5(VAR_10, ':');
  if(VAR_9) {
    char *VAR_12 = ((void*)0);
    *VAR_9 = '\0';
    VAR_9++;
    if(*VAR_9) {
      long VAR_13 = FUNC_8(VAR_9, &VAR_12, 10);
      if((VAR_12 && *VAR_12) || (VAR_13 < 0) || (VAR_13 > 65535)) {
        FUNC_4(VAR_3, "No valid port number in connect to host string (%s)\n",
              VAR_9);
        VAR_8 = ((void*)0);
        VAR_11 = -1;
      }
      else
        VAR_11 = (int)VAR_13;
    }
  }


  if(VAR_8) {
    *VAR_5 = FUNC_6(VAR_8);
    if(!*VAR_5) {
      FUNC_3(VAR_7);
      return VAR_2;
    }
  }

  *VAR_6 = VAR_11;

  FUNC_3(VAR_7);
  return VAR_1;
}
