
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int max_jumbo_rxd; int max_rxd; int num_txd; int num_jumbo_rxd; int num_rxd; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_max_pending; int rx_jumbo_max_pending; int rx_max_pending; int tx_pending; int rx_jumbo_pending; int rx_pending; } ;


 int VAR_0 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_1,
  struct ethtool_ringparam *VAR_2)
{
 struct qlcnic_adapter *VAR_3 = FUNC_0(VAR_1);

 VAR_2->rx_pending = VAR_3->num_rxd;
 VAR_2->rx_jumbo_pending = VAR_3->num_jumbo_rxd;
 VAR_2->tx_pending = VAR_3->num_txd;

 VAR_2->rx_max_pending = VAR_3->max_rxd;
 VAR_2->rx_jumbo_max_pending = VAR_3->max_jumbo_rxd;
 VAR_2->tx_max_pending = VAR_0;
}
