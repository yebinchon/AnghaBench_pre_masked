
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char,int) ;

void FUNC_2(char **VAR_0, int VAR_1, int VAR_2) {
 int VAR_3, VAR_4;
 char VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_0[VAR_4] = (char*)FUNC_0((size_t)VAR_2 * sizeof(char));
  VAR_5 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 16) {
   FUNC_1(&VAR_0[VAR_4][VAR_3], VAR_5, 16);
   if (VAR_3 < 3400 * (VAR_2 / 4096)) {
    VAR_5++;
   }
  }
 }
}
