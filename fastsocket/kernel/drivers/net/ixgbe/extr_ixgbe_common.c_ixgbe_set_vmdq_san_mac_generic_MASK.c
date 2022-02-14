
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int san_mac_rar_index; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

s32 FUNC_3(struct ixgbe_hw *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->mac.san_mac_rar_index;

 if (VAR_1 < 32) {
  FUNC_2(VAR_0, FUNC_1(VAR_2), 1 << VAR_1);
  FUNC_2(VAR_0, FUNC_0(VAR_2), 0);
 } else {
  FUNC_2(VAR_0, FUNC_1(VAR_2), 0);
  FUNC_2(VAR_0, FUNC_0(VAR_2), 1 << (VAR_1 - 32));
 }

 return 0;
}
