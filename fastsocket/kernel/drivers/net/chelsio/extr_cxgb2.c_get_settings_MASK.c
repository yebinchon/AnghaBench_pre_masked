
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int supported; int speed; int duplex; int autoneg; int advertising; } ;
struct port_info {TYPE_3__ link_config; TYPE_2__* phy; } ;
struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct ethtool_cmd {int supported; int speed; int duplex; scalar_t__ maxrxpkt; scalar_t__ maxtxpkt; int autoneg; int transceiver; int phy_address; int port; int advertising; } ;
struct adapter {struct port_info* port; } ;
struct TYPE_4__ {int prtad; } ;
struct TYPE_5__ {TYPE_1__ mdio; } ;


 int PORT_FIBRE ;
 int PORT_TP ;
 int SUPPORTED_TP ;
 int XCVR_EXTERNAL ;
 scalar_t__ netif_carrier_ok (struct net_device*) ;

__attribute__((used)) static int get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
{
 struct adapter *adapter = dev->ml_priv;
 struct port_info *p = &adapter->port[dev->if_port];

 cmd->supported = p->link_config.supported;
 cmd->advertising = p->link_config.advertising;

 if (netif_carrier_ok(dev)) {
  cmd->speed = p->link_config.speed;
  cmd->duplex = p->link_config.duplex;
 } else {
  cmd->speed = -1;
  cmd->duplex = -1;
 }

 cmd->port = (cmd->supported & SUPPORTED_TP) ? PORT_TP : PORT_FIBRE;
 cmd->phy_address = p->phy->mdio.prtad;
 cmd->transceiver = XCVR_EXTERNAL;
 cmd->autoneg = p->link_config.autoneg;
 cmd->maxtxpkt = 0;
 cmd->maxrxpkt = 0;
 return 0;
}
