
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char) ;

char *
FUNC_1(char *VAR_0, const char *VAR_1, char **VAR_2)
{
  if(!VAR_0)

    VAR_0 = *VAR_2;


  while(*VAR_0 && FUNC_0(VAR_1, *VAR_0))
    ++VAR_0;

  if(*VAR_0) {

    char *VAR_3 = VAR_0;


    *VAR_2 = VAR_3 + 1;



    while(**VAR_2 && !FUNC_0(VAR_1, **VAR_2))
      ++*VAR_2;

    if(**VAR_2) {

      **VAR_2 = '\0';
      ++*VAR_2;
    }

    return VAR_3;
  }


  return ((void*)0);
}
