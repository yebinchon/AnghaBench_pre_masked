
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_tx_ring {int count; } ;
struct pch_gbe_rx_ring {int count; } ;
struct pch_gbe_adapter {struct pch_gbe_rx_ring* rx_ring; struct pch_gbe_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
     struct ethtool_ringparam *VAR_3)
{
 struct pch_gbe_adapter *VAR_4 = FUNC_0(VAR_2);
 struct pch_gbe_tx_ring *VAR_5 = VAR_4->tx_ring;
 struct pch_gbe_rx_ring *VAR_6 = VAR_4->rx_ring;

 VAR_3->rx_max_pending = VAR_0;
 VAR_3->tx_max_pending = VAR_1;
 VAR_3->rx_pending = VAR_6->count;
 VAR_3->tx_pending = VAR_5->count;
}
