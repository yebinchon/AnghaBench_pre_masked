
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;

void FUNC_3(struct ixgbe_adapter *VAR_0)
{
 struct ixgbe_hw *VAR_1 = &VAR_0->hw;


 FUNC_2(VAR_1, FUNC_1(0), 0);
 FUNC_2(VAR_1, FUNC_1(1), 0);

 FUNC_2(VAR_1, FUNC_0(0), 0);
 FUNC_2(VAR_1, FUNC_0(1), 0);
}
