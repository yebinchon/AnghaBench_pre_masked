
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_max_pending; int rx_mini_max_pending; int rx_jumbo_max_pending; int tx_max_pending; int rx_mini_pending; int rx_jumbo_pending; int tx_pending; int rx_pending; } ;
struct cpmac_priv {int ring_size; } ;


 struct cpmac_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, struct ethtool_ringparam* VAR_1)
{
 struct cpmac_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_max_pending = 1024;
 VAR_1->rx_mini_max_pending = 1;
 VAR_1->rx_jumbo_max_pending = 1;
 VAR_1->tx_max_pending = 1;

 VAR_1->rx_pending = VAR_2->ring_size;
 VAR_1->rx_mini_pending = 1;
 VAR_1->rx_jumbo_pending = 1;
 VAR_1->tx_pending = 1;
}
