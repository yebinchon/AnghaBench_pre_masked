
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fe_priv {int linkspeed; scalar_t__ gigabit; int lock; int phyaddr; scalar_t__ autoneg; scalar_t__ duplex; } ;
struct ethtool_cmd {int speed; int duplex; int supported; int transceiver; int phy_address; int advertising; scalar_t__ autoneg; int port; } ;


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
 int VAR_15 ;
 int VAR_16 ;



 int VAR_17 ;
 scalar_t__ VAR_18 ;
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
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct net_device*,int ,int ,int ) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_31, struct ethtool_cmd *VAR_32)
{
 struct fe_priv *VAR_33 = FUNC_1(VAR_31);
 int VAR_34;

 FUNC_7(&VAR_33->lock);
 VAR_32->port = VAR_19;
 if (!FUNC_5(VAR_31)) {


  if (FUNC_6(VAR_31)) {
   if (!FUNC_3(VAR_31))
    FUNC_4(VAR_31);
  } else {
   if (FUNC_3(VAR_31))
    FUNC_2(VAR_31);
  }
 }

 if (FUNC_3(VAR_31)) {
  switch(VAR_33->linkspeed & (VAR_17)) {
  case 130:
   VAR_32->speed = VAR_20;
   break;
  case 129:
   VAR_32->speed = VAR_21;
   break;
  case 128:
   VAR_32->speed = VAR_22;
   break;
  }
  VAR_32->duplex = VAR_13;
  if (VAR_33->duplex)
   VAR_32->duplex = VAR_12;
 } else {
  VAR_32->speed = -1;
  VAR_32->duplex = -1;
 }

 VAR_32->autoneg = VAR_33->autoneg;

 VAR_32->advertising = VAR_6;
 if (VAR_33->autoneg) {
  VAR_32->advertising |= VAR_5;
  VAR_34 = FUNC_0(VAR_31, VAR_33->phyaddr, VAR_14, VAR_16);
  if (VAR_34 & VAR_11)
   VAR_32->advertising |= VAR_4;
  if (VAR_34 & VAR_10)
   VAR_32->advertising |= VAR_3;
  if (VAR_34 & VAR_9)
   VAR_32->advertising |= VAR_2;
  if (VAR_34 & VAR_8)
   VAR_32->advertising |= VAR_1;
  if (VAR_33->gigabit == VAR_18) {
   VAR_34 = FUNC_0(VAR_31, VAR_33->phyaddr, VAR_15, VAR_16);
   if (VAR_34 & VAR_7)
    VAR_32->advertising |= VAR_0;
  }
 }
 VAR_32->supported = (VAR_28 |
  VAR_27 | VAR_26 |
  VAR_25 | VAR_24 |
  VAR_29);
 if (VAR_33->gigabit == VAR_18)
  VAR_32->supported |= VAR_23;

 VAR_32->phy_address = VAR_33->phyaddr;
 VAR_32->transceiver = VAR_30;


 FUNC_8(&VAR_33->lock);
 return 0;
}
