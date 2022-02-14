
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int* mta_shadow; } ;
struct TYPE_3__ {int mta_in_use; } ;
struct ixgbe_hw {TYPE_2__ mac; TYPE_1__ addr_ctrl; } ;


 int FUNC_0 (struct ixgbe_hw*,char*,int) ;
 int FUNC_1 (struct ixgbe_hw*,int *) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_hw *VAR_0, u8 *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 u32 VAR_4;

 VAR_0->addr_ctrl.mta_in_use++;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, " bit-vector = 0x%03X\n", VAR_2);
 VAR_4 = (VAR_2 >> 5) & 0x7F;
 VAR_3 = VAR_2 & 0x1F;
 VAR_0->mac.mta_shadow[VAR_4] |= (1 << VAR_3);
}
