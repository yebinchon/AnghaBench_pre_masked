
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mii_if_info {int (* mdio_read ) (struct net_device*,int ,int ) ;int advertising; int force_media; int full_duplex; int phy_id; int (* mdio_write ) (struct net_device*,int ,int ,int) ;scalar_t__ supports_gmii; struct net_device* dev; } ;
struct ethtool_cmd {scalar_t__ speed; scalar_t__ duplex; scalar_t__ port; scalar_t__ transceiver; scalar_t__ autoneg; int advertising; int phy_address; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int ,int ) ;
 int FUNC_3 (struct net_device*,int ,int ) ;
 int FUNC_4 (struct net_device*,int ,int ,int) ;
 int FUNC_5 (struct net_device*,int ,int ,int) ;
 int FUNC_6 (struct net_device*,int ,int ) ;
 int FUNC_7 (struct net_device*,int ,int ,int) ;
 int FUNC_8 (struct net_device*,int ,int ) ;
 int FUNC_9 (struct net_device*,int ,int ,int) ;

int FUNC_10(struct mii_if_info *VAR_28, struct ethtool_cmd *VAR_29)
{
 struct net_device *VAR_30 = VAR_28->dev;

 if (VAR_29->speed != VAR_24 &&
     VAR_29->speed != VAR_25 &&
     VAR_29->speed != VAR_26)
  return -VAR_19;
 if (VAR_29->duplex != VAR_18 && VAR_29->duplex != VAR_17)
  return -VAR_19;
 if (VAR_29->port != VAR_23)
  return -VAR_19;
 if (VAR_29->transceiver != VAR_27)
  return -VAR_19;
 if (VAR_29->phy_address != VAR_28->phy_id)
  return -VAR_19;
 if (VAR_29->autoneg != VAR_10 && VAR_29->autoneg != VAR_11)
  return -VAR_19;
 if ((VAR_29->speed == VAR_26) && (!VAR_28->supports_gmii))
  return -VAR_19;



 if (VAR_29->autoneg == VAR_11) {
  u32 VAR_31, VAR_32, VAR_33;
  u32 VAR_34 = 0, VAR_35 = 0;

  if ((VAR_29->advertising & (VAR_5 |
       VAR_4 |
       VAR_3 |
       VAR_2 |
       VAR_1 |
       VAR_0)) == 0)
   return -VAR_19;


  VAR_32 = VAR_28->mdio_read(VAR_30, VAR_28->phy_id, VAR_20);
  VAR_33 = VAR_32 & ~(VAR_9 | VAR_8);
  if (VAR_28->supports_gmii) {
   VAR_34 = VAR_28->mdio_read(VAR_30, VAR_28->phy_id, VAR_22);
   VAR_35 = VAR_34 & ~(VAR_7 | VAR_6);
  }
  VAR_33 |= FUNC_0(VAR_29->advertising);

  if (VAR_28->supports_gmii)
   VAR_35 |=
         FUNC_1(VAR_29->advertising);
  if (VAR_32 != VAR_33) {
   VAR_28->mdio_write(VAR_30, VAR_28->phy_id, VAR_20, VAR_33);
   VAR_28->advertising = VAR_33;
  }
  if ((VAR_28->supports_gmii) && (VAR_34 != VAR_35))
   VAR_28->mdio_write(VAR_30, VAR_28->phy_id, VAR_22, VAR_35);


  VAR_31 = VAR_28->mdio_read(VAR_30, VAR_28->phy_id, VAR_21);
  VAR_31 |= (VAR_12 | VAR_13);
  VAR_28->mdio_write(VAR_30, VAR_28->phy_id, VAR_21, VAR_31);

  VAR_28->force_media = 0;
 } else {
  u32 VAR_36, VAR_37;


  VAR_36 = VAR_28->mdio_read(VAR_30, VAR_28->phy_id, VAR_21);
  VAR_37 = VAR_36 & ~(VAR_12 | VAR_15 |
          VAR_16 | VAR_14);
  if (VAR_29->speed == VAR_26)
   VAR_37 |= VAR_16;
  else if (VAR_29->speed == VAR_25)
   VAR_37 |= VAR_15;
  if (VAR_29->duplex == VAR_17) {
   VAR_37 |= VAR_14;
   VAR_28->full_duplex = 1;
  } else
   VAR_28->full_duplex = 0;
  if (VAR_36 != VAR_37)
   VAR_28->mdio_write(VAR_30, VAR_28->phy_id, VAR_21, VAR_37);

  VAR_28->force_media = 1;
 }
 return 0;
}
