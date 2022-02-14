
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netdev_private {int advertising; int phy_addr_external; int autoneg; int duplex; int speed; } ;
struct net_device {int if_port; } ;
struct ethtool_cmd {int port; int supported; int duplex; int speed; int advertising; int autoneg; void* transceiver; int phy_address; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;



 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 int FUNC_0 (struct net_device*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_31, struct ethtool_cmd *VAR_32)
{
 struct netdev_private *VAR_33 = FUNC_2(VAR_31);
 u32 VAR_34;

 VAR_32->port = VAR_31->if_port;
 VAR_32->speed = VAR_33->speed;
 VAR_32->duplex = VAR_33->duplex;
 VAR_32->autoneg = VAR_33->autoneg;
 VAR_32->advertising = 0;
 if (VAR_33->advertising & VAR_11)
  VAR_32->advertising |= VAR_3;
 if (VAR_33->advertising & VAR_10)
  VAR_32->advertising |= VAR_2;
 if (VAR_33->advertising & VAR_9)
  VAR_32->advertising |= VAR_1;
 if (VAR_33->advertising & VAR_8)
  VAR_32->advertising |= VAR_0;
 VAR_32->supported = (VAR_25 |
  VAR_24 | VAR_23 |
  VAR_22 | VAR_21 |
  VAR_28 | VAR_27 | VAR_26);
 VAR_32->phy_address = VAR_33->phy_addr_external;
 switch (VAR_32->port) {
 default:
 case 128:
  VAR_32->advertising |= VAR_7;
  VAR_32->transceiver = VAR_30;
  break;
 case 129:
  VAR_32->advertising |= VAR_6;
  VAR_32->transceiver = VAR_29;
  break;
 case 130:
  VAR_32->advertising |= VAR_5;
  VAR_32->transceiver = VAR_29;
  break;
 }


 if (VAR_32->autoneg == VAR_12) {
  VAR_32->advertising |= VAR_4;
  VAR_34 = FUNC_1(
   VAR_33->advertising & FUNC_0(VAR_31, VAR_18));
  if (VAR_34 == VAR_15 || VAR_34 == VAR_16)
   VAR_32->speed = VAR_20;
  else
   VAR_32->speed = VAR_19;
  if (VAR_34 == VAR_15 || VAR_34 == VAR_17)
   VAR_32->duplex = VAR_13;
  else
   VAR_32->duplex = VAR_14;
 }



 return 0;
}
