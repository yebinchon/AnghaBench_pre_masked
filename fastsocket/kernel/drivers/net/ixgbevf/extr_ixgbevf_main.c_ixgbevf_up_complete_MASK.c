
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int mtu; } ;
struct TYPE_7__ {int (* set_rar ) (struct ixgbe_hw*,int ,int ,int ) ;} ;
struct TYPE_8__ {scalar_t__ type; int get_link_status; int perm_addr; TYPE_3__ ops; int addr; } ;
struct ixgbe_hw {TYPE_4__ mac; } ;
struct ixgbevf_adapter {int num_rx_queues; int num_tx_queues; int watchdog_timer; int state; int mbx_lock; TYPE_2__* rx_ring; TYPE_1__* tx_ring; struct ixgbe_hw hw; struct net_device* netdev; } ;
struct TYPE_6__ {int reg_idx; } ;
struct TYPE_5__ {int reg_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int VAR_6 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct ixgbevf_adapter*) ;
 int FUNC_7 (struct ixgbevf_adapter*) ;
 int FUNC_8 (struct ixgbevf_adapter*) ;
 int FUNC_9 (struct ixgbevf_adapter*,int) ;
 int FUNC_10 (struct ixgbevf_adapter*) ;
 int VAR_8 ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ixgbe_hw*,int ,int ,int ) ;
 int FUNC_16 (struct ixgbe_hw*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_17(struct ixgbevf_adapter *VAR_9)
{
 struct net_device *VAR_10 = VAR_9->netdev;
 struct ixgbe_hw *VAR_11 = &VAR_9->hw;
 int VAR_12, VAR_13 = 0;
 int VAR_14 = VAR_9->num_rx_queues;
 u32 VAR_15, VAR_16;

 for (VAR_12 = 0; VAR_12 < VAR_9->num_tx_queues; VAR_12++) {
  VAR_13 = VAR_9->tx_ring[VAR_12].reg_idx;
  VAR_15 = FUNC_0(VAR_11, FUNC_2(VAR_13));

  VAR_15 |= (8 << 16);
  FUNC_3(VAR_11, FUNC_2(VAR_13), VAR_15);
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->num_tx_queues; VAR_12++) {
  VAR_13 = VAR_9->tx_ring[VAR_12].reg_idx;
  VAR_15 = FUNC_0(VAR_11, FUNC_2(VAR_13));
  VAR_15 |= VAR_5;
  FUNC_3(VAR_11, FUNC_2(VAR_13), VAR_15);
 }

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  VAR_13 = VAR_9->rx_ring[VAR_12].reg_idx;
  VAR_16 = FUNC_0(VAR_11, FUNC_1(VAR_13));
  VAR_16 |= VAR_2;
  if (VAR_11->mac.type == VAR_7) {
   VAR_16 &= ~VAR_3;
   VAR_16 |= ((VAR_10->mtu + VAR_1 + VAR_0) |
       VAR_4);
  }
  FUNC_3(VAR_11, FUNC_1(VAR_13), VAR_16);
  FUNC_9(VAR_9, VAR_12);
 }

 FUNC_6(VAR_9);

 FUNC_13(&VAR_9->mbx_lock);

 if (FUNC_5(VAR_11->mac.addr))
  VAR_11->mac.ops.set_rar(VAR_11, 0, VAR_11->mac.addr, 0);
 else
  VAR_11->mac.ops.set_rar(VAR_11, 0, VAR_11->mac.perm_addr, 0);

 FUNC_14(&VAR_9->mbx_lock);

 FUNC_4(VAR_6, &VAR_9->state);
 FUNC_8(VAR_9);


 FUNC_12(VAR_10);

 FUNC_10(VAR_9);
 FUNC_7(VAR_9);

 VAR_11->mac.get_link_status = 1;
 FUNC_11(&VAR_9->watchdog_timer, VAR_8);
}
