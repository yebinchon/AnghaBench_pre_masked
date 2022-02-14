
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int supported; int speed; int duplex; int autoneg; int advertising; } ;
struct TYPE_4__ {int prtad; } ;
struct TYPE_5__ {TYPE_1__ mdio; } ;
struct port_info {TYPE_3__ link_config; TYPE_2__ phy; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int duplex; scalar_t__ maxrxpkt; scalar_t__ maxtxpkt; int autoneg; int transceiver; int phy_address; int port; int advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ethtool_cmd*,int) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, struct ethtool_cmd *VAR_5)
{
 struct port_info *VAR_6 = FUNC_1(VAR_4);

 VAR_5->supported = VAR_6->link_config.supported;
 VAR_5->advertising = VAR_6->link_config.advertising;

 if (FUNC_2(VAR_4)) {
  FUNC_0(VAR_5, VAR_6->link_config.speed);
  VAR_5->duplex = VAR_6->link_config.duplex;
 } else {
  FUNC_0(VAR_5, -1);
  VAR_5->duplex = -1;
 }

 VAR_5->port = (VAR_5->supported & VAR_2) ? VAR_1 : VAR_0;
 VAR_5->phy_address = VAR_6->phy.mdio.prtad;
 VAR_5->transceiver = VAR_3;
 VAR_5->autoneg = VAR_6->link_config.autoneg;
 VAR_5->maxtxpkt = 0;
 VAR_5->maxrxpkt = 0;
 return 0;
}
