
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int transceiver; int port; scalar_t__ advertising; int duplex; int speed; scalar_t__ autoneg; scalar_t__ maxtxpkt; scalar_t__ maxrxpkt; } ;
struct bcm_enet_priv {scalar_t__ force_duplex_full; scalar_t__ force_speed_100; int phydev; scalar_t__ has_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct bcm_enet_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_11,
     struct ethtool_cmd *VAR_12)
{
 struct bcm_enet_priv *VAR_13;

 VAR_13 = FUNC_0(VAR_11);

 VAR_12->maxrxpkt = 0;
 VAR_12->maxtxpkt = 0;

 if (VAR_13->has_phy) {
  if (!VAR_13->phydev)
   return -VAR_6;
  return FUNC_1(VAR_13->phydev, VAR_12);
 } else {
  VAR_12->autoneg = 0;
  VAR_12->speed = (VAR_13->force_speed_100) ? VAR_9 : VAR_8;
  VAR_12->duplex = (VAR_13->force_duplex_full) ?
   VAR_4 : VAR_5;
  VAR_12->supported = VAR_3 |
   VAR_2 |
   VAR_1 |
   VAR_0;
  VAR_12->advertising = 0;
  VAR_12->port = VAR_7;
  VAR_12->transceiver = VAR_10;
 }
 return 0;
}
