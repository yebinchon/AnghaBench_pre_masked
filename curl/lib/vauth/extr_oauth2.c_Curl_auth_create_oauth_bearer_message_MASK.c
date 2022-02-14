
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,char*,int ,char**,size_t*) ;
 char* FUNC_1 (char*,char const*,char const*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

CURLcode FUNC_4(struct Curl_easy *VAR_2,
                                               const char *VAR_3,
                                               const char *VAR_4,
                                               const long VAR_5,
                                               const char *VAR_6,
                                               char **VAR_7, size_t *VAR_8)
{
  CURLcode VAR_9 = VAR_0;
  char *VAR_10 = ((void*)0);


  if(VAR_5 == 0 || VAR_5 == 80)
    VAR_10 = FUNC_1("n,a=%s,\1host=%s\1auth=Bearer %s\1\1", VAR_3, VAR_4,
                    VAR_6);
  else
    VAR_10 = FUNC_1("n,a=%s,\1host=%s\1port=%ld\1auth=Bearer %s\1\1", VAR_3,
                    VAR_4, VAR_5, VAR_6);
  if(!VAR_10)
    return VAR_1;


  VAR_9 = FUNC_0(VAR_2, VAR_10, FUNC_3(VAR_10), VAR_7, VAR_8);

  FUNC_2(VAR_10);

  return VAR_9;
}
