
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char* VAR_0,size_t VAR_1,size_t VAR_2,size_t VAR_3) {
  char* VAR_4=VAR_0+VAR_2*VAR_1;
  char* VAR_5=VAR_0+VAR_3*VAR_1;
  while (VAR_1) {
    char VAR_6=*VAR_4;
    *VAR_4=*VAR_5;
    *VAR_5=VAR_6;
    --VAR_1; ++VAR_4; ++VAR_5;
  }
}
