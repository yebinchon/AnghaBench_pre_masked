
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;

CURLcode FUNC_2(struct Curl_easy *VAR_2,
                            const char *VAR_3,
                            size_t VAR_4,
                            char **VAR_5)
{
  char *VAR_6;
  (void)VAR_2;

  VAR_6 = FUNC_0(VAR_4);
  if(!VAR_6)
    return VAR_1;

  FUNC_1(VAR_6, VAR_3, VAR_4);
  *VAR_5 = VAR_6;
  return VAR_0;
}
