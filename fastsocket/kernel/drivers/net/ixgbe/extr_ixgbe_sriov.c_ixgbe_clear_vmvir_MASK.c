
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_0, u32 VAR_1)
{
 struct ixgbe_hw *VAR_2 = &VAR_0->hw;

 FUNC_1(VAR_2, FUNC_0(VAR_1), 0);
}
