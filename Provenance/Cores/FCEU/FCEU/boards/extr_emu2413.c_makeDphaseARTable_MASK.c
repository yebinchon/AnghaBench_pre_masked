
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;


 int ** VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void) {
 int32 VAR_1, VAR_2, VAR_3, VAR_4;
 for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
   VAR_3 = VAR_1 + (VAR_2 >> 2);
   VAR_4 = VAR_2 & 3;
   if (VAR_3 > 15)
    VAR_3 = 15;
   switch (VAR_1) {
   case 0:
    VAR_0[VAR_1][VAR_2] = 0;
    break;
   case 15:
    VAR_0[VAR_1][VAR_2] = 0;
    break;
   default:
    VAR_0[VAR_1][VAR_2] = FUNC_0(3 * (VAR_4 + 4) << (VAR_3 + 1));
    break;
   }
  }
}
