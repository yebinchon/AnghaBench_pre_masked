
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, char **VAR_1)
{
  size_t VAR_2 = FUNC_0(VAR_0);
  char *VAR_3 = ((void*)0);

  if(VAR_2 > 4) {

    VAR_2 -= 4;
    for(VAR_3 = VAR_0 + 4; *VAR_3 == ' ' || *VAR_3 == '\t';
        VAR_3++, VAR_2--)
      ;


    for(; VAR_2--;)
      if(VAR_3[VAR_2] != '\r' && VAR_3[VAR_2] != '\n' && VAR_3[VAR_2] != ' ' &&
         VAR_3[VAR_2] != '\t')
        break;


    if(++VAR_2) {
      VAR_3[VAR_2] = '\0';
    }
  }
  else

    VAR_3 = &VAR_0[VAR_2];

  *VAR_1 = VAR_3;
}
