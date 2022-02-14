
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
typedef scalar_t__ s8 ;


 size_t FUNC_0 (size_t) ;

void FUNC_1(u32 *VAR_0, s8 *VAR_1, u8 VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5;
 u32 VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = 0;
  VAR_6 = VAR_0[VAR_5];
  VAR_3 = FUNC_0(VAR_6);
  if (VAR_3)
   VAR_4 = (u8) ((VAR_6 >> (--VAR_3 - 1)) & 1);
  VAR_1[VAR_5] = (s8) (3 * VAR_3 + 2 * VAR_4);
 }
}
