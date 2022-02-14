
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;
struct e1000_tx_ring {void* count; } ;
struct e1000_rx_ring {void* count; } ;
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {int num_tx_queues; int num_rx_queues; int flags; struct e1000_tx_ring* tx_ring; struct e1000_tx_ring* rx_ring; int netdev; struct e1000_hw hw; } ;
typedef scalar_t__ e1000_mac_type ;


 void* FUNC_0 (void*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (struct e1000_adapter*) ;
 int FUNC_7 (struct e1000_adapter*) ;
 struct e1000_tx_ring* FUNC_8 (int,int,int ) ;
 int FUNC_9 (struct e1000_tx_ring*) ;
 void* FUNC_10 (int ,int ) ;
 void* FUNC_11 (void*,int ) ;
 int FUNC_12 (int) ;
 struct e1000_adapter* FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_13,
          struct ethtool_ringparam *VAR_14)
{
 struct e1000_adapter *VAR_15 = FUNC_13(VAR_13);
 struct e1000_hw *VAR_16 = &VAR_15->hw;
 e1000_mac_type VAR_17 = VAR_16->mac_type;
 struct e1000_tx_ring *VAR_18, *VAR_19;
 struct e1000_rx_ring *VAR_20, *VAR_21;
 int VAR_22, VAR_23;

 if ((VAR_14->rx_mini_pending) || (VAR_14->rx_jumbo_pending))
  return -VAR_6;

 while (FUNC_15(VAR_11, &VAR_15->flags))
  FUNC_12(1);

 if (FUNC_14(VAR_15->netdev))
  FUNC_2(VAR_15);

 VAR_19 = VAR_15->tx_ring;
 VAR_21 = VAR_15->rx_ring;

 VAR_23 = -VAR_7;
 VAR_18 = FUNC_8(VAR_15->num_tx_queues, sizeof(struct e1000_tx_ring), VAR_8);
 if (!VAR_18)
  goto err_alloc_tx;

 VAR_20 = FUNC_8(VAR_15->num_rx_queues, sizeof(struct e1000_rx_ring), VAR_8);
 if (!VAR_20)
  goto err_alloc_rx;

 VAR_15->tx_ring = VAR_18;
 VAR_15->rx_ring = VAR_20;

 VAR_20->count = FUNC_10(VAR_14->rx_pending,(u32)VAR_4);
 VAR_20->count = FUNC_11(VAR_20->count,(u32)(VAR_17 < VAR_12 ?
  VAR_2 : VAR_0));
 VAR_20->count = FUNC_0(VAR_20->count, VAR_9);

 VAR_18->count = FUNC_10(VAR_14->tx_pending,(u32)VAR_5);
 VAR_18->count = FUNC_11(VAR_18->count,(u32)(VAR_17 < VAR_12 ?
  VAR_3 : VAR_1));
 VAR_18->count = FUNC_0(VAR_18->count, VAR_10);

 for (VAR_22 = 0; VAR_22 < VAR_15->num_tx_queues; VAR_22++)
  VAR_18[VAR_22].count = VAR_18->count;
 for (VAR_22 = 0; VAR_22 < VAR_15->num_rx_queues; VAR_22++)
  VAR_20[VAR_22].count = VAR_20->count;

 if (FUNC_14(VAR_15->netdev)) {

  VAR_23 = FUNC_5(VAR_15);
  if (VAR_23)
   goto err_setup_rx;
  VAR_23 = FUNC_6(VAR_15);
  if (VAR_23)
   goto err_setup_tx;




  VAR_15->rx_ring = VAR_21;
  VAR_15->tx_ring = VAR_19;
  FUNC_3(VAR_15);
  FUNC_4(VAR_15);
  FUNC_9(VAR_19);
  FUNC_9(VAR_21);
  VAR_15->rx_ring = VAR_20;
  VAR_15->tx_ring = VAR_18;
  VAR_23 = FUNC_7(VAR_15);
  if (VAR_23)
   goto err_setup;
 }

 FUNC_1(VAR_11, &VAR_15->flags);
 return 0;
err_setup_tx:
 FUNC_3(VAR_15);
err_setup_rx:
 VAR_15->rx_ring = VAR_21;
 VAR_15->tx_ring = VAR_19;
 FUNC_9(VAR_20);
err_alloc_rx:
 FUNC_9(VAR_18);
err_alloc_tx:
 FUNC_7(VAR_15);
err_setup:
 FUNC_1(VAR_11, &VAR_15->flags);
 return VAR_23;
}
