
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int num_q_vectors; int pdev; scalar_t__ link_duplex; scalar_t__ link_speed; int phy_info_timer; int watchdog_timer; TYPE_1__** q_vector; int flags; int state; struct e1000_hw hw; struct net_device* netdev; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct igb_adapter*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 () ;

void FUNC_17(struct igb_adapter *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->netdev;
 struct e1000_hw *VAR_8 = &VAR_6->hw;
 u32 VAR_9, VAR_10;
 int VAR_11;




 FUNC_14(VAR_5, &VAR_6->state);


 VAR_10 = FUNC_13(VAR_0);
 FUNC_15(VAR_0, VAR_10 & ~VAR_1);


 FUNC_11(VAR_7);


 VAR_9 = FUNC_13(VAR_2);
 VAR_9 &= ~VAR_3;
 FUNC_15(VAR_2, VAR_9);

 FUNC_16();
 FUNC_7(10);

 FUNC_3(VAR_6);

 VAR_6->flags &= ~VAR_4;

 for (VAR_11 = 0; VAR_11 < VAR_6->num_q_vectors; VAR_11++) {
  FUNC_9(&(VAR_6->q_vector[VAR_11]->napi));
  FUNC_8(&(VAR_6->q_vector[VAR_11]->napi));
 }


 FUNC_0(&VAR_6->watchdog_timer);
 FUNC_0(&VAR_6->phy_info_timer);

 FUNC_10(VAR_7);


 FUNC_6(VAR_6);

 VAR_6->link_speed = 0;
 VAR_6->link_duplex = 0;

 if (!FUNC_12(VAR_6->pdev))
  FUNC_4(VAR_6);
 FUNC_2(VAR_6);
 FUNC_1(VAR_6);





}
