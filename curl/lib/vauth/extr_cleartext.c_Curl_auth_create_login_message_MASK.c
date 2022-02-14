
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,char const*,size_t,char**,size_t*) ;
 char* FUNC_1 (char*) ;
 size_t FUNC_2 (char const*) ;

CURLcode FUNC_3(struct Curl_easy *VAR_2,
                                        const char *VAR_3, char **VAR_4,
                                        size_t *VAR_5)
{
  size_t VAR_6 = FUNC_2(VAR_3);

  if(!VAR_6) {

    *VAR_4 = FUNC_1("=");
    if(*VAR_4) {
      *VAR_5 = (size_t) 1;
      return VAR_0;
    }

    *VAR_5 = 0;
    return VAR_1;
  }


  return FUNC_0(VAR_2, VAR_3, VAR_6, VAR_4, VAR_5);
}
