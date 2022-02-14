
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_tx_ring {void* count; } ;
struct pch_gbe_rx_ring {void* count; } ;
struct pch_gbe_adapter {int netdev; struct pch_gbe_tx_ring* tx_ring; struct pch_gbe_tx_ring* rx_ring; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct pch_gbe_tx_ring*) ;
 struct pch_gbe_tx_ring* FUNC_2 (int,int ) ;
 struct pch_gbe_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct pch_gbe_adapter*) ;
 int FUNC_6 (struct pch_gbe_adapter*,struct pch_gbe_tx_ring*) ;
 int FUNC_7 (struct pch_gbe_adapter*,struct pch_gbe_tx_ring*) ;
 int FUNC_8 (struct pch_gbe_adapter*,struct pch_gbe_tx_ring*) ;
 int FUNC_9 (struct pch_gbe_adapter*,struct pch_gbe_tx_ring*) ;
 int FUNC_10 (struct pch_gbe_adapter*) ;
 void* FUNC_11 (void*,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_7,
     struct ethtool_ringparam *VAR_8)
{
 struct pch_gbe_adapter *VAR_9 = FUNC_3(VAR_7);
 struct pch_gbe_tx_ring *VAR_10, *VAR_11;
 struct pch_gbe_rx_ring *VAR_12, *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16 = 0;

 if ((VAR_8->rx_mini_pending) || (VAR_8->rx_jumbo_pending))
  return -VAR_0;
 VAR_14 = (int)sizeof(struct pch_gbe_tx_ring);
 VAR_15 = (int)sizeof(struct pch_gbe_rx_ring);

 if ((FUNC_4(VAR_9->netdev)))
  FUNC_5(VAR_9);
 VAR_11 = VAR_9->tx_ring;
 VAR_13 = VAR_9->rx_ring;

 VAR_10 = FUNC_2(VAR_14, VAR_2);
 if (!VAR_10) {
  VAR_16 = -VAR_1;
  goto err_alloc_tx;
 }
 VAR_12 = FUNC_2(VAR_15, VAR_2);
 if (!VAR_12) {
  VAR_16 = -VAR_1;
  goto err_alloc_rx;
 }
 VAR_9->tx_ring = VAR_10;
 VAR_9->rx_ring = VAR_12;

 VAR_12->count =
  FUNC_0(VAR_8->rx_pending, VAR_4, VAR_3);
 VAR_12->count = FUNC_11(VAR_12->count, VAR_5);

 VAR_10->count =
  FUNC_0(VAR_8->tx_pending, VAR_4, VAR_3);
 VAR_10->count = FUNC_11(VAR_10->count, VAR_6);

 if ((FUNC_4(VAR_9->netdev))) {

  VAR_16 = FUNC_8(VAR_9, VAR_9->rx_ring);
  if (VAR_16)
   goto err_setup_rx;
  VAR_16 = FUNC_9(VAR_9, VAR_9->tx_ring);
  if (VAR_16)
   goto err_setup_tx;
  FUNC_6(VAR_9, VAR_13);
  FUNC_7(VAR_9, VAR_11);
  FUNC_1(VAR_11);
  FUNC_1(VAR_13);
  VAR_9->rx_ring = VAR_12;
  VAR_9->tx_ring = VAR_10;

  VAR_16 = FUNC_10(VAR_9);
 }
 return VAR_16;

err_setup_tx:
 FUNC_6(VAR_9, VAR_9->rx_ring);
err_setup_rx:
 VAR_9->rx_ring = VAR_13;
 VAR_9->tx_ring = VAR_11;
 FUNC_1(VAR_12);
err_alloc_rx:
 FUNC_1(VAR_10);
err_alloc_tx:
 if (FUNC_4(VAR_9->netdev))
  FUNC_10(VAR_9);
 return VAR_16;
}
