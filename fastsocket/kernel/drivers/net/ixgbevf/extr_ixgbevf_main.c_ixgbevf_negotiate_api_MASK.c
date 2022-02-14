
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int mbx_lock; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ixgbevf_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 int VAR_5[] = { VAR_1,
        VAR_0,
        VAR_2 };
 int VAR_6 = 0, VAR_7 = 0;

 FUNC_1(&VAR_3->mbx_lock);

 while (VAR_5[VAR_7] != VAR_2) {
  VAR_6 = FUNC_0(VAR_4, VAR_5[VAR_7]);
  if (!VAR_6)
   break;
  VAR_7++;
 }

 FUNC_2(&VAR_3->mbx_lock);
}
