
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int * VAR_0 ;
 char* FUNC_0 (char*,int ) ;

int FUNC_1(char *VAR_1, int VAR_2, char *VAR_3, int VAR_4) {
  char *VAR_5 = VAR_1;
  char *VAR_6 = VAR_3;
  while (VAR_2 > 0) {
    if (*VAR_5 == '\0') break;
    VAR_6 = FUNC_0(VAR_6, VAR_0[((uint8_t)(*VAR_5))]);
    VAR_5++;
    VAR_2--;
  }
  *VAR_6 = '\0';
  return 0;
}
