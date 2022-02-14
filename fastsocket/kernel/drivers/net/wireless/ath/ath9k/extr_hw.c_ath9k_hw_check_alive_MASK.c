
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*) ;

bool FUNC_4(struct ath_hw *VAR_1)
{
 int VAR_2 = 50;
 u32 VAR_3;

 if (FUNC_1(VAR_1))
  return !FUNC_3(VAR_1);

 if (FUNC_0(VAR_1))
  return 1;

 do {
  VAR_3 = FUNC_2(VAR_1, VAR_0);

  if ((VAR_3 & 0x7E7FFFEF) == 0x00702400)
   continue;

  switch (VAR_3 & 0x7E000B00) {
  case 0x1E000000:
  case 0x52000B00:
  case 0x18000B00:
   continue;
  default:
   return 1;
  }
 } while (VAR_2-- > 0);

 return 0;
}
