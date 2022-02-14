
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_ring {int reg_idx; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;

void FUNC_3(struct ixgbe_adapter *VAR_1,
                        struct ixgbe_ring *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_1->hw;
 u32 VAR_4;
 u8 VAR_5 = VAR_2->reg_idx;

 VAR_4 = FUNC_0(VAR_3, FUNC_1(VAR_5));
 VAR_4 &= ~VAR_0;
 FUNC_2(VAR_3, FUNC_1(VAR_5), VAR_4);
}
