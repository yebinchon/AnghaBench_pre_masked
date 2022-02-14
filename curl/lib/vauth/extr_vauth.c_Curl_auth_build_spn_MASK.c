
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const*,char const*,...) ;

char *FUNC_1(const char *VAR_0, const char *VAR_1,
                          const char *VAR_2)
{
  char *VAR_3 = ((void*)0);


  if(VAR_1 && VAR_2)
    VAR_3 = FUNC_0("%s/%s@%s", VAR_0, VAR_1, VAR_2);
  else if(VAR_1)
    VAR_3 = FUNC_0("%s/%s", VAR_0, VAR_1);
  else if(VAR_2)
    VAR_3 = FUNC_0("%s@%s", VAR_0, VAR_2);


  return VAR_3;
}
