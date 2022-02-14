
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int flags; int num_tx_queues; int pdev; TYPE_1__* tx_ring; int watchdog_timer; int state; struct ixgbe_hw hw; struct net_device* netdev; } ;
struct TYPE_2__ {int reg_idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (struct ixgbevf_adapter*) ;
 int FUNC_6 (struct ixgbevf_adapter*) ;
 int FUNC_7 (struct ixgbevf_adapter*) ;
 int FUNC_8 (struct ixgbevf_adapter*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;

void FUNC_15(struct ixgbevf_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 struct ixgbe_hw *VAR_5 = &VAR_3->hw;
 u32 VAR_6;
 int VAR_7, VAR_8;


 FUNC_14(VAR_2, &VAR_3->state);


 FUNC_11(VAR_4);

 FUNC_9(10);

 FUNC_12(VAR_4);

 FUNC_6(VAR_3);

 FUNC_7(VAR_3);

 FUNC_3(&VAR_3->watchdog_timer);



 while (VAR_3->flags & VAR_0)
  FUNC_9(1);


 for (VAR_7 = 0; VAR_7 < VAR_3->num_tx_queues; VAR_7++) {
  VAR_8 = VAR_3->tx_ring[VAR_7].reg_idx;
  VAR_6 = FUNC_0(VAR_5, FUNC_1(VAR_8));
  FUNC_2(VAR_5, FUNC_1(VAR_8),
    (VAR_6 & ~VAR_1));
 }

 FUNC_10(VAR_4);

 if (!FUNC_13(VAR_3->pdev))
  FUNC_8(VAR_3);

 FUNC_5(VAR_3);
 FUNC_4(VAR_3);
}
