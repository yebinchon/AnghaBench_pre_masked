
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_link_config {int active_duplex; int active_speed; int active_autoneg; int active_advertising; int supported; } ;
struct niu {int flags; int phy_addr; struct niu_link_config link_config; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int transceiver; int port; int duplex; int speed; int autoneg; int advertising; int supported; int phy_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ethtool_cmd*,int ,int) ;
 struct niu* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6, struct ethtool_cmd *VAR_7)
{
 struct niu *VAR_8 = FUNC_1(VAR_6);
 struct niu_link_config *VAR_9;

 VAR_9 = &VAR_8->link_config;

 FUNC_0(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->phy_address = VAR_8->phy_addr;
 VAR_7->supported = VAR_9->supported;
 VAR_7->advertising = VAR_9->active_advertising;
 VAR_7->autoneg = VAR_9->active_autoneg;
 VAR_7->speed = VAR_9->active_speed;
 VAR_7->duplex = VAR_9->active_duplex;
 VAR_7->port = (VAR_8->flags & VAR_0) ? VAR_2 : VAR_3;
 VAR_7->transceiver = (VAR_8->flags & VAR_1) ?
  VAR_4 : VAR_5;

 return 0;
}
