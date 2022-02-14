
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int tmreg_lock; int cc; int tc; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int *,int ) ;

void FUNC_9(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;
 unsigned long VAR_4;


 FUNC_1(VAR_3, VAR_1, 0x00000000);
 FUNC_1(VAR_3, VAR_0, 0x00000000);
 FUNC_0(VAR_3);

 FUNC_3(VAR_2);

 FUNC_6(&VAR_2->tmreg_lock, VAR_4);


 FUNC_8(&VAR_2->tc, &VAR_2->cc,
    FUNC_5(FUNC_4()));

 FUNC_7(&VAR_2->tmreg_lock, VAR_4);





 FUNC_2(VAR_2);
}
