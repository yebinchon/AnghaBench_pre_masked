
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int autoneg; int speed; int advertising; int supported; } ;
struct port_info {scalar_t__ port_type; scalar_t__ mod_type; scalar_t__ mdio_addr; TYPE_1__ link_cfg; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ phy_address; scalar_t__ maxrxpkt; scalar_t__ maxtxpkt; int autoneg; int duplex; void* advertising; void* supported; scalar_t__ mdio_support; int transceiver; void* port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ethtool_cmd*,int ) ;
 void* FUNC_1 (scalar_t__,int ) ;
 struct port_info* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_17, struct ethtool_cmd *VAR_18)
{
 const struct port_info *VAR_19 = FUNC_2(VAR_17);

 if (VAR_19->port_type == VAR_3 ||
     VAR_19->port_type == VAR_5 ||
     VAR_19->port_type == VAR_4)
  VAR_18->port = VAR_14;
 else if (VAR_19->port_type == VAR_7 ||
   VAR_19->port_type == VAR_6)
  VAR_18->port = VAR_12;
 else if (VAR_19->port_type == VAR_8) {
  if (VAR_19->mod_type == VAR_2 ||
      VAR_19->mod_type == VAR_1)
   VAR_18->port = VAR_11;
  else
   VAR_18->port = VAR_12;
 } else
  VAR_18->port = VAR_13;

 if (VAR_19->mdio_addr >= 0) {
  VAR_18->phy_address = VAR_19->mdio_addr;
  VAR_18->transceiver = VAR_15;
  VAR_18->mdio_support = VAR_19->port_type == VAR_3 ?
   VAR_9 : VAR_10;
 } else {
  VAR_18->phy_address = 0;
  VAR_18->transceiver = VAR_16;
  VAR_18->mdio_support = 0;
 }

 VAR_18->supported = FUNC_1(VAR_19->port_type, VAR_19->link_cfg.supported);
 VAR_18->advertising = FUNC_1(VAR_19->port_type,
         VAR_19->link_cfg.advertising);
 FUNC_0(VAR_18,
         FUNC_3(VAR_17) ? VAR_19->link_cfg.speed : 0);
 VAR_18->duplex = VAR_0;
 VAR_18->autoneg = VAR_19->link_cfg.autoneg;
 VAR_18->maxtxpkt = 0;
 VAR_18->maxrxpkt = 0;
 return 0;
}
