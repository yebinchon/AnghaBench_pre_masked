
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ phy_address; int duplex; int speed; int autoneg; int advertising; int transceiver; int port; int supported; } ;
struct TYPE_2__ {scalar_t__ address; int duplex; int speed; int autoneg; int advertising; int features; } ;
struct emac_instance {int link_lock; TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct emac_instance* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
         struct ethtool_cmd *VAR_4)
{
 struct emac_instance *VAR_5 = FUNC_2(VAR_3);

 VAR_4->supported = VAR_5->phy.features;
 VAR_4->port = VAR_0;
 VAR_4->phy_address = VAR_5->phy.address;
 VAR_4->transceiver =
     VAR_5->phy.address >= 0 ? VAR_1 : VAR_2;

 FUNC_0(&VAR_5->link_lock);
 VAR_4->advertising = VAR_5->phy.advertising;
 VAR_4->autoneg = VAR_5->phy.autoneg;
 VAR_4->speed = VAR_5->phy.speed;
 VAR_4->duplex = VAR_5->phy.duplex;
 FUNC_1(&VAR_5->link_lock);

 return 0;
}
