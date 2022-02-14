
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct igbvf_ring {scalar_t__ count; } ;
struct igbvf_adapter {int state; struct igbvf_ring* rx_ring; struct igbvf_ring* tx_ring; int netdev; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct igbvf_adapter*) ;
 int FUNC_3 (struct igbvf_ring*) ;
 int FUNC_4 (struct igbvf_ring*) ;
 int FUNC_5 (struct igbvf_adapter*,struct igbvf_ring*) ;
 int FUNC_6 (struct igbvf_adapter*,struct igbvf_ring*) ;
 int FUNC_7 (struct igbvf_adapter*) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (struct igbvf_ring*,struct igbvf_ring*,int) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int) ;
 struct igbvf_adapter* FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (struct igbvf_ring*) ;
 struct igbvf_ring* FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_9,
                               struct ethtool_ringparam *VAR_10)
{
 struct igbvf_adapter *VAR_11 = FUNC_12(VAR_9);
 struct igbvf_ring *VAR_12;
 int VAR_13 = 0;
 u32 VAR_14, VAR_15;

 if ((VAR_10->rx_mini_pending) || (VAR_10->rx_jumbo_pending))
  return -VAR_0;

 VAR_14 = FUNC_8(VAR_10->rx_pending, (u32)VAR_4);
 VAR_14 = FUNC_10(VAR_14, (u32)VAR_2);
 VAR_14 = FUNC_0(VAR_14, VAR_6);

 VAR_15 = FUNC_8(VAR_10->tx_pending, (u32)VAR_5);
 VAR_15 = FUNC_10(VAR_15, (u32)VAR_3);
 VAR_15 = FUNC_0(VAR_15, VAR_7);

 if ((VAR_15 == VAR_11->tx_ring->count) &&
     (VAR_14 == VAR_11->rx_ring->count)) {

  return 0;
 }

 while (FUNC_14(VAR_8, &VAR_11->state))
  FUNC_11(1);

 if (!FUNC_13(VAR_11->netdev)) {
  VAR_11->tx_ring->count = VAR_15;
  VAR_11->rx_ring->count = VAR_14;
  goto clear_reset;
 }

 VAR_12 = FUNC_16(sizeof(struct igbvf_ring));
 if (!VAR_12) {
  VAR_13 = -VAR_1;
  goto clear_reset;
 }

 FUNC_2(VAR_11);






 if (VAR_15 != VAR_11->tx_ring->count) {
  FUNC_9(VAR_12, VAR_11->tx_ring, sizeof(struct igbvf_ring));

  VAR_12->count = VAR_15;
  VAR_13 = FUNC_6(VAR_11, VAR_12);
  if (VAR_13)
   goto err_setup;

  FUNC_4(VAR_11->tx_ring);

  FUNC_9(VAR_11->tx_ring, VAR_12, sizeof(struct igbvf_ring));
 }

 if (VAR_14 != VAR_11->rx_ring->count) {
  FUNC_9(VAR_12, VAR_11->rx_ring, sizeof(struct igbvf_ring));

  VAR_12->count = VAR_14;
  VAR_13 = FUNC_5(VAR_11, VAR_12);
  if (VAR_13)
   goto err_setup;

  FUNC_3(VAR_11->rx_ring);

  FUNC_9(VAR_11->rx_ring, VAR_12,sizeof(struct igbvf_ring));
 }
err_setup:
 FUNC_7(VAR_11);
 FUNC_15(VAR_12);
clear_reset:
 FUNC_1(VAR_8, &VAR_11->state);
 return VAR_13;
}
