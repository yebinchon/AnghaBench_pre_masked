
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_0)
{
 u32 VAR_1 = 0;
 u8 VAR_2 = 0;







 for (VAR_2 = 0; VAR_2 < 32; VAR_2++) {
  VAR_1 = 0x01010101 * (VAR_2 / 4);
  FUNC_2(VAR_0, FUNC_0(VAR_2), VAR_1);
 }
 for (VAR_2 = 0; VAR_2 < 32; VAR_2++) {
  if (VAR_2 < 8)
   VAR_1 = 0x00000000;
  else if (VAR_2 < 16)
   VAR_1 = 0x01010101;
  else if (VAR_2 < 20)
   VAR_1 = 0x02020202;
  else if (VAR_2 < 24)
   VAR_1 = 0x03030303;
  else if (VAR_2 < 26)
   VAR_1 = 0x04040404;
  else if (VAR_2 < 28)
   VAR_1 = 0x05050505;
  else if (VAR_2 < 30)
   VAR_1 = 0x06060606;
  else
   VAR_1 = 0x07070707;
  FUNC_2(VAR_0, FUNC_1(VAR_2), VAR_1);
 }

 return 0;
}
