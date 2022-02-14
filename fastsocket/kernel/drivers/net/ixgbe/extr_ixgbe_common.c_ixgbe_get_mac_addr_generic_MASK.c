
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;

s32 FUNC_3(struct ixgbe_hw *VAR_0, u8 *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 u16 VAR_4;

 VAR_2 = FUNC_2(VAR_0, FUNC_0(0));
 VAR_3 = FUNC_2(VAR_0, FUNC_1(0));

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  VAR_1[VAR_4] = (u8)(VAR_3 >> (VAR_4*8));

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
  VAR_1[VAR_4+4] = (u8)(VAR_2 >> (VAR_4*8));

 return 0;
}
