
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,char*,int ,char**,size_t*) ;
 char* FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

CURLcode FUNC_4(struct Curl_easy *VAR_2,
                                               const char *VAR_3,
                                               const char *VAR_4,
                                               char **VAR_5, size_t *VAR_6)
{
  CURLcode VAR_7 = VAR_0;


  char *VAR_8 = FUNC_1("user=%s\1auth=Bearer %s\1\1", VAR_3, VAR_4);
  if(!VAR_8)
    return VAR_1;


  VAR_7 = FUNC_0(VAR_2, VAR_8, FUNC_3(VAR_8), VAR_5, VAR_6);

  FUNC_2(VAR_8);

  return VAR_7;
}
