
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,int,int *) ;
 char* FUNC_2 (char*,size_t) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static char *FUNC_7(FILE *VAR_0)
{
  char VAR_1[4096];
  char *VAR_2 = ((void*)0);
  char *VAR_3 = ((void*)0);

  do {
    if(((void*)0) == FUNC_1(VAR_1, sizeof(VAR_1), VAR_0))
      break;
    if(!VAR_3) {
      VAR_3 = FUNC_5(VAR_1);
      if(!VAR_3)
        return ((void*)0);
    }
    else {
      char *VAR_4;
      size_t VAR_5 = FUNC_6(VAR_3);
      VAR_4 = FUNC_2(VAR_3, VAR_5 + FUNC_6(VAR_1) + 1);
      if(!VAR_4) {
        FUNC_0(VAR_3);
        return ((void*)0);
      }
      VAR_3 = VAR_4;
      FUNC_4(&VAR_3[VAR_5], VAR_1);
    }
    VAR_2 = FUNC_3(VAR_3, '\n');
  } while(!VAR_2);

  if(VAR_2)
    *VAR_2 = '\0';

  return VAR_3;
}
