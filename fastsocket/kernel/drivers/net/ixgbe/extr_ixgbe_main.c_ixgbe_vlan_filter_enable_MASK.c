
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 VAR_5 |= VAR_2;
 VAR_5 &= ~VAR_1;
 FUNC_1(VAR_4, VAR_0, VAR_5);
}
