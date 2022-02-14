
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {void* tx_pending; void* rx_pending; void* tx_max_pending; void* rx_max_pending; } ;
struct bdx_priv {int rxf_size; int txd_size; } ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 struct bdx_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0, struct ethtool_ringparam *VAR_1)
{
 struct bdx_priv *VAR_2 = FUNC_2(VAR_0);


 VAR_1->rx_max_pending = FUNC_0(3);
 VAR_1->tx_max_pending = FUNC_1(3);
 VAR_1->rx_pending = FUNC_0(VAR_2->rxf_size);
 VAR_1->tx_pending = FUNC_1(VAR_2->txd_size);
}
