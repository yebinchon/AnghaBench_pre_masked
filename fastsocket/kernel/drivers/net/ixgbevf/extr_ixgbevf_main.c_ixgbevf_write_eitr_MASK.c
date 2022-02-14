
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbevf_q_vector {int v_idx; int itr; struct ixgbevf_adapter* adapter; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ixgbevf_q_vector *VAR_2)
{
 struct ixgbevf_adapter *VAR_3 = VAR_2->adapter;
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 int VAR_5 = VAR_2->v_idx;
 u32 VAR_6 = VAR_2->itr & VAR_1;





 VAR_6 |= VAR_0;

 FUNC_1(VAR_4, FUNC_0(VAR_5), VAR_6);
}
