
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;
struct e1000_ring {scalar_t__ count; } ;
struct e1000_adapter {scalar_t__ tx_ring_count; scalar_t__ rx_ring_count; int state; struct e1000_ring* rx_ring; struct e1000_ring* tx_ring; int netdev; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_ring*) ;
 int FUNC_5 (struct e1000_ring*) ;
 int FUNC_6 (struct e1000_ring*) ;
 int FUNC_7 (struct e1000_ring*) ;
 int FUNC_8 (struct e1000_adapter*) ;
 int FUNC_9 (struct e1000_ring*,struct e1000_ring*,int) ;
 struct e1000_adapter* FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int VAR_9 ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (struct e1000_ring*) ;
 struct e1000_ring* FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_10,
          struct ethtool_ringparam *VAR_11)
{
 struct e1000_adapter *VAR_12 = FUNC_10(VAR_10);
 struct e1000_ring *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 int VAR_15 = 0, VAR_16 = sizeof(struct e1000_ring);
 bool VAR_17 = 0, VAR_18 = 0;
 u16 VAR_19, VAR_20;

 if ((VAR_11->rx_mini_pending) || (VAR_11->rx_jumbo_pending))
  return -VAR_4;

 VAR_19 = FUNC_1(VAR_9, VAR_11->rx_pending, VAR_2,
          VAR_0);
 VAR_19 = FUNC_0(VAR_19, VAR_6);

 VAR_20 = FUNC_1(VAR_9, VAR_11->tx_pending, VAR_3,
          VAR_1);
 VAR_20 = FUNC_0(VAR_20, VAR_7);

 if ((VAR_20 == VAR_12->tx_ring_count) &&
     (VAR_19 == VAR_12->rx_ring_count))

  return 0;

 while (FUNC_12(VAR_8, &VAR_12->state))
  FUNC_13(1000, 2000);

 if (!FUNC_11(VAR_12->netdev)) {

  VAR_12->tx_ring->count = VAR_20;
  VAR_12->rx_ring->count = VAR_19;
  VAR_12->tx_ring_count = VAR_20;
  VAR_12->rx_ring_count = VAR_19;
  goto clear_reset;
 }

 VAR_17 = (VAR_20 != VAR_12->tx_ring_count);
 VAR_18 = (VAR_19 != VAR_12->rx_ring_count);


 if (VAR_17) {
  VAR_13 = FUNC_15(VAR_16);
  if (!VAR_13) {
   VAR_15 = -VAR_5;
   goto free_temp;
  }
 }
 if (VAR_18) {
  VAR_14 = FUNC_15(VAR_16);
  if (!VAR_14) {
   VAR_15 = -VAR_5;
   goto free_temp;
  }
 }

 FUNC_3(VAR_12);





 if (VAR_17) {
  FUNC_9(VAR_13, VAR_12->tx_ring, VAR_16);
  VAR_13->count = VAR_20;
  VAR_15 = FUNC_7(VAR_13);
  if (VAR_15)
   goto err_setup;
 }
 if (VAR_18) {
  FUNC_9(VAR_14, VAR_12->rx_ring, VAR_16);
  VAR_14->count = VAR_19;
  VAR_15 = FUNC_6(VAR_14);
  if (VAR_15)
   goto err_setup_rx;
 }


 if (VAR_17) {
  FUNC_5(VAR_12->tx_ring);
  FUNC_9(VAR_12->tx_ring, VAR_13, VAR_16);
  VAR_12->tx_ring_count = VAR_20;
 }
 if (VAR_18) {
  FUNC_4(VAR_12->rx_ring);
  FUNC_9(VAR_12->rx_ring, VAR_14, VAR_16);
  VAR_12->rx_ring_count = VAR_19;
 }

err_setup_rx:
 if (VAR_15 && VAR_17)
  FUNC_5(VAR_13);
err_setup:
 FUNC_8(VAR_12);
free_temp:
 FUNC_14(VAR_13);
 FUNC_14(VAR_14);
clear_reset:
 FUNC_2(VAR_8, &VAR_12->state);
 return VAR_15;
}
