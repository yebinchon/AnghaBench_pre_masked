
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 size_t FUNC_3 (char*) ;

CURLcode FUNC_4(char **VAR_4, const char *VAR_5)
{



  FUNC_0(*VAR_4);

  if(VAR_5) {
    char *VAR_6 = FUNC_2(VAR_5);

    if(VAR_6) {
      size_t VAR_7 = FUNC_3(VAR_6);
      if(VAR_7 > VAR_3) {
        FUNC_1(VAR_6);
        return VAR_0;
      }
    }
    if(!VAR_6)
      return VAR_2;

    *VAR_4 = VAR_6;
  }

  return VAR_1;
}
