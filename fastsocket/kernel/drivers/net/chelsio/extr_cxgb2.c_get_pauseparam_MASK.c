
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int requested_fc; int fc; } ;
struct port_info {TYPE_1__ link_config; } ;
struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;
struct adapter {struct port_info* port; } ;


 int PAUSE_AUTONEG ;
 int PAUSE_RX ;
 int PAUSE_TX ;

__attribute__((used)) static void get_pauseparam(struct net_device *dev,
      struct ethtool_pauseparam *epause)
{
 struct adapter *adapter = dev->ml_priv;
 struct port_info *p = &adapter->port[dev->if_port];

 epause->autoneg = (p->link_config.requested_fc & PAUSE_AUTONEG) != 0;
 epause->rx_pause = (p->link_config.fc & PAUSE_RX) != 0;
 epause->tx_pause = (p->link_config.fc & PAUSE_TX) != 0;
}
