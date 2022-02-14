
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {scalar_t__ autoneg; int phy_addr_external; int advertising; scalar_t__ speed; scalar_t__ duplex; scalar_t__ full_duplex; scalar_t__ ignore_phy; } ;
struct net_device {scalar_t__ if_port; } ;
struct ethtool_cmd {scalar_t__ port; scalar_t__ transceiver; scalar_t__ autoneg; int advertising; scalar_t__ speed; scalar_t__ duplex; int phy_address; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_23, struct ethtool_cmd *VAR_24)
{
 struct netdev_private *VAR_25 = FUNC_2(VAR_23);

 if (VAR_24->port != VAR_17 && VAR_24->port != VAR_16 && VAR_24->port != VAR_15)
  return -VAR_14;
 if (VAR_24->transceiver != VAR_22 && VAR_24->transceiver != VAR_21)
  return -VAR_14;
 if (VAR_24->autoneg == VAR_11) {
  if ((VAR_24->advertising & (VAR_3 |
       VAR_2 |
       VAR_1 |
       VAR_0)) == 0) {
   return -VAR_14;
  }
 } else if (VAR_24->autoneg == VAR_10) {
  if (VAR_24->speed != VAR_19 && VAR_24->speed != VAR_20)
   return -VAR_14;
  if (VAR_24->duplex != VAR_13 && VAR_24->duplex != VAR_12)
   return -VAR_14;
 } else {
  return -VAR_14;
 }






 if (VAR_25->ignore_phy && (VAR_24->autoneg == VAR_11 ||
          VAR_24->port == VAR_17))
  return -VAR_14;
 VAR_23->if_port = VAR_24->port;
 VAR_25->autoneg = VAR_24->autoneg;
 VAR_25->phy_addr_external = VAR_24->phy_address & VAR_18;
 if (VAR_25->autoneg == VAR_11) {

  VAR_25->advertising &= ~(VAR_9 | VAR_4);
  if (VAR_24->advertising & VAR_3)
   VAR_25->advertising |= VAR_8;
  if (VAR_24->advertising & VAR_2)
   VAR_25->advertising |= VAR_7;
  if (VAR_24->advertising & VAR_1)
   VAR_25->advertising |= VAR_6;
  if (VAR_24->advertising & VAR_0)
   VAR_25->advertising |= VAR_5;
 } else {
  VAR_25->speed = VAR_24->speed;
  VAR_25->duplex = VAR_24->duplex;

  if (VAR_25->duplex == VAR_13)
   VAR_25->full_duplex = 0;
 }


 if (VAR_24->port == VAR_17)
  FUNC_4(VAR_23);
 else
  FUNC_3(VAR_23);


 FUNC_1(VAR_23);
 FUNC_0(VAR_23);
 return 0;
}
