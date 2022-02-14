
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mv643xx_eth_private {int tx_ring_size; int rx_ring_size; } ;
struct ethtool_ringparam {int rx_max_pending; int tx_max_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; int tx_pending; int rx_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; } ;


 struct mv643xx_eth_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0, struct ethtool_ringparam *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_max_pending = 4096;
 VAR_1->tx_max_pending = 4096;
 VAR_1->rx_mini_max_pending = 0;
 VAR_1->rx_jumbo_max_pending = 0;

 VAR_1->rx_pending = VAR_2->rx_ring_size;
 VAR_1->tx_pending = VAR_2->tx_ring_size;
 VAR_1->rx_mini_pending = 0;
 VAR_1->rx_jumbo_pending = 0;
}
