
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int (* disable_tx_laser ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {int type; TYPE_3__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; } ;
struct ixgbe_adapter {int num_rx_queues; int flags2; int num_vfs; int num_tx_queues; int pdev; TYPE_2__** tx_ring; TYPE_1__* vfinfo; struct ixgbe_hw hw; int service_timer; int flags; int * rx_ring; int state; struct net_device* netdev; } ;
struct TYPE_6__ {int reg_idx; } ;
struct TYPE_5__ {int clear_to_send; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*,int ) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct ixgbe_adapter*) ;


 int FUNC_9 (struct ixgbe_adapter*) ;
 int FUNC_10 (struct ixgbe_adapter*) ;
 int FUNC_11 (struct ixgbe_adapter*) ;
 int FUNC_12 (struct ixgbe_adapter*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (struct ixgbe_hw*) ;
 int FUNC_19 (int,int) ;

void FUNC_20(struct ixgbe_adapter *VAR_10)
{
 struct net_device *VAR_11 = VAR_10->netdev;
 struct ixgbe_hw *VAR_12 = &VAR_10->hw;
 u32 VAR_13;
 int VAR_14;


 FUNC_17(VAR_9, &VAR_10->state);


 VAR_13 = FUNC_0(VAR_12, VAR_6);
 FUNC_2(VAR_12, VAR_6, VAR_13 & ~VAR_7);


 for (VAR_14 = 0; VAR_14 < VAR_10->num_rx_queues; VAR_14++)

  FUNC_6(VAR_10, VAR_10->rx_ring[VAR_14]);

 FUNC_19(10000, 20000);

 FUNC_15(VAR_11);


 FUNC_13(VAR_11);
 FUNC_14(VAR_11);

 FUNC_8(VAR_10);

 FUNC_9(VAR_10);

 VAR_10->flags2 &= ~(VAR_3 |
        VAR_4);
 VAR_10->flags &= ~VAR_5;

 FUNC_3(&VAR_10->service_timer);

 if (VAR_10->num_vfs) {

  FUNC_2(&VAR_10->hw, VAR_2, 0);


  for (VAR_14 = 0 ; VAR_14 < VAR_10->num_vfs; VAR_14++)
   VAR_10->vfinfo[VAR_14].clear_to_send = 0;


  FUNC_10(VAR_10);


  FUNC_7(VAR_10);
 }


 for (VAR_14 = 0; VAR_14 < VAR_10->num_tx_queues; VAR_14++) {
  u8 VAR_15 = VAR_10->tx_ring[VAR_14]->reg_idx;
  FUNC_2(VAR_12, FUNC_1(VAR_15), VAR_8);
 }


 switch (VAR_12->mac.type) {
 case 129:
 case 128:
  FUNC_2(VAR_12, VAR_0,
    (FUNC_0(VAR_12, VAR_0) &
     ~VAR_1));
  break;
 default:
  break;
 }

 if (!FUNC_16(VAR_10->pdev))
  FUNC_11(VAR_10);


 if (VAR_12->mac.ops.disable_tx_laser)
  VAR_12->mac.ops.disable_tx_laser(VAR_12);

 FUNC_5(VAR_10);
 FUNC_4(VAR_10);





}
