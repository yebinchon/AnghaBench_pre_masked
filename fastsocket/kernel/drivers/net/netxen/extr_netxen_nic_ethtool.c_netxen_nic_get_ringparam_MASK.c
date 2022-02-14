
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port_type; } ;
struct netxen_adapter {TYPE_1__ ahw; int num_txd; scalar_t__ num_lro_rxd; int num_jumbo_rxd; int num_rxd; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_max_pending; int rx_jumbo_max_pending; int rx_max_pending; int tx_pending; int rx_jumbo_pending; int rx_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct netxen_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_6,
  struct ethtool_ringparam *VAR_7)
{
 struct netxen_adapter *VAR_8 = FUNC_0(VAR_6);

 VAR_7->rx_pending = VAR_8->num_rxd;
 VAR_7->rx_jumbo_pending = VAR_8->num_jumbo_rxd;
 VAR_7->rx_jumbo_pending += VAR_8->num_lro_rxd;
 VAR_7->tx_pending = VAR_8->num_txd;

 if (VAR_8->ahw.port_type == VAR_5) {
  VAR_7->rx_max_pending = VAR_4;
  VAR_7->rx_jumbo_max_pending = VAR_2;
 } else {
  VAR_7->rx_max_pending = VAR_3;
  VAR_7->rx_jumbo_max_pending = VAR_1;
 }

 VAR_7->tx_max_pending = VAR_0;
}
