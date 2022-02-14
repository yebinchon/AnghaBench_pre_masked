
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int* VAR_2 ;

__attribute__((used)) static void FUNC_1(u32 *VAR_3, unsigned VAR_4,
     int VAR_5, int VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_4 >= VAR_2[VAR_7] &&
      VAR_4 < VAR_2[VAR_7] + VAR_0) {
   u32 VAR_8 = (VAR_7 * VAR_0 + VAR_4 -
       VAR_2[VAR_7]) * 2;

   u32 *VAR_9 = VAR_3 + (VAR_8 / 32);
   u32 VAR_10 = VAR_8 % 32;
   u32 VAR_11 = ((VAR_6) ? 0 : 2) | ((VAR_5) ? 0 : 1);
   *VAR_9 = (*VAR_9 & ~(0x3 << VAR_10)) |
    (VAR_11 << VAR_10);
   return;
  }
 }
 FUNC_0();
}
