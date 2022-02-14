
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;


 int*** VAR_0 ;

__attribute__((used)) static void FUNC_0(void) {
 int32 VAR_1, VAR_2, VAR_3;

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++)
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
   for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
    if (VAR_3 != 0)
     VAR_0[VAR_1][VAR_2][VAR_3] = (VAR_2 << 1) + VAR_1;
    else
     VAR_0[VAR_1][VAR_2][VAR_3] = VAR_2 >> 1;
   }
}
