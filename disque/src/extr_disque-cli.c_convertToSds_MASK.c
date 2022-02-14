
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char** FUNC_1 (int) ;

__attribute__((used)) static char **FUNC_2(int VAR_0, char** VAR_1) {
  int VAR_2;
  char **VAR_3 = FUNC_1(sizeof(char*)*VAR_0);

  for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    VAR_3[VAR_2] = FUNC_0(VAR_1[VAR_2]);

  return VAR_3;
}
