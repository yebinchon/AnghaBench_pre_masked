
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;

void FUNC_0(struct ath_hw *VAR_1, u32 VAR_2,
       u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5, VAR_6;

 for (VAR_5 = 31; VAR_5 > 0; VAR_5--)
  if ((VAR_2 >> VAR_5) & 0x1)
   break;

 VAR_5 = 14 - (VAR_5 - VAR_0);

 VAR_6 = VAR_2 + (1 << (VAR_0 - VAR_5 - 1));

 *VAR_3 = VAR_6 >> (VAR_0 - VAR_5);
 *VAR_4 = VAR_5 - 16;
}
