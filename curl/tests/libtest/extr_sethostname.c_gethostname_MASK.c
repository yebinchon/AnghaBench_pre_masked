
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GETHOSTNAME_TYPE_ARG2 ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int ) ;

int FUNC_2(char *VAR_0, GETHOSTNAME_TYPE_ARG2 VAR_1)
{
  const char *VAR_2 = FUNC_0("CURL_GETHOSTNAME");
  if(VAR_2) {
    FUNC_1(VAR_0, VAR_2, VAR_1);
    VAR_0[VAR_1-1] = '\0';
    return 0;
  }


  return -1;
}
