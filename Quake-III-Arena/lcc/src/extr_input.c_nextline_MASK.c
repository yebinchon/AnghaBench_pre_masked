
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 () ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;

void FUNC_2(void) {
 do {
  if (VAR_0 >= VAR_1) {
   FUNC_0();
   if (VAR_0 >= VAR_1)
    VAR_0 = VAR_1;
   if (VAR_0 == VAR_1)
    return;
  } else {
   VAR_3++;
   for (VAR_2 = (char *)VAR_0; *VAR_0==' ' || *VAR_0=='\t'; VAR_0++)
    ;
   if (*VAR_0 == '#') {
    FUNC_1();
    FUNC_2();
   }
  }
 } while (*VAR_0 == '\n' && VAR_0 == VAR_1);
}
