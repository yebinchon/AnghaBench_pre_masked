
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char **VAR_0, char **VAR_1, char VAR_2)
{
  char *VAR_3 = *VAR_0;

  char *VAR_4 = VAR_3;
  char *VAR_5;
  char *VAR_6 = ((void*)0);

  if(*VAR_3 == '"') {
    ++VAR_3;
    while(*VAR_3) {
      if(*VAR_3 == '\\') {
        if(VAR_3[1] == '\\' || VAR_3[1] == '"') {

          if(!VAR_6)
            VAR_6 = VAR_3;

          VAR_3 += 2;
          continue;
        }
      }
      if(*VAR_3 == '"') {
        *VAR_1 = VAR_3;
        if(VAR_6) {

          VAR_3 = VAR_5 = VAR_6;
          do {
            if(*VAR_3 == '\\' && (VAR_3[1] == '\\' || VAR_3[1] == '"'))
              ++VAR_3;
            *VAR_5++ = *VAR_3++;
          }
          while(VAR_3 < *VAR_1);
          *VAR_1 = VAR_5;
        }
        while(*VAR_3 && *VAR_3 != ';' && *VAR_3 != VAR_2)
          ++VAR_3;
        *VAR_0 = VAR_3;
        return VAR_4 + 1;
      }
      ++VAR_3;
    }

    VAR_3 = VAR_4;
  }

  while(*VAR_3 && *VAR_3 != ';' && *VAR_3 != VAR_2)
    ++VAR_3;
  *VAR_0 = *VAR_1 = VAR_3;
  return VAR_4;
}
