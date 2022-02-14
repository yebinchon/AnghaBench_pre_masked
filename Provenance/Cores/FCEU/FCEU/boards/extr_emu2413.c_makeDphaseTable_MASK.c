
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int VAR_0 ;
 int *** VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void) {
 uint32 VAR_2, VAR_3, VAR_4;
 uint32 VAR_5[16] =
 { 1, 1 * 2, 2 * 2, 3 * 2, 4 * 2, 5 * 2, 6 * 2, 7 * 2, 8 * 2, 9 * 2, 10 * 2, 10 * 2, 12 * 2, 12 * 2, 15 * 2, 15 * 2 };

 for (VAR_2 = 0; VAR_2 < 512; VAR_2++)
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
   for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
    VAR_1[VAR_2][VAR_3][VAR_4] = FUNC_0(((VAR_2 * VAR_5[VAR_4]) << VAR_3) >> (20 - VAR_0));
}
