
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,int ) ;

void FUNC_1(char *VAR_1, char *VAR_2) {
  char *VAR_3 = FUNC_0(VAR_1, VAR_0);
  while ((VAR_3 != ((void*)0)) && (*VAR_1 != *VAR_3)) {
    *VAR_2 = *VAR_1;
    VAR_1++;
    VAR_2++;
  }

  *VAR_2 = 0;
}
