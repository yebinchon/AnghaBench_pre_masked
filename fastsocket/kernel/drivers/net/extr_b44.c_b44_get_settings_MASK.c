
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int advertising; int duplex; scalar_t__ autoneg; scalar_t__ maxrxpkt; scalar_t__ maxtxpkt; scalar_t__ speed; int transceiver; int phy_address; scalar_t__ port; } ;
struct b44 {int flags; int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 struct b44* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_29, struct ethtool_cmd *VAR_30)
{
 struct b44 *VAR_31 = FUNC_0(VAR_29);

 VAR_30->supported = (VAR_25);
 VAR_30->supported |= (VAR_22 |
     VAR_21 |
     VAR_24 |
     VAR_23 |
     VAR_26);

 VAR_30->advertising = 0;
 if (VAR_31->flags & VAR_13)
  VAR_30->advertising |= VAR_3;
 if (VAR_31->flags & VAR_12)
  VAR_30->advertising |= VAR_2;
 if (VAR_31->flags & VAR_11)
  VAR_30->advertising |= VAR_1;
 if (VAR_31->flags & VAR_10)
  VAR_30->advertising |= VAR_0;
 VAR_30->advertising |= VAR_6 | VAR_4;
 VAR_30->speed = (VAR_31->flags & VAR_9) ?
  VAR_20 : VAR_19;
 VAR_30->duplex = (VAR_31->flags & VAR_15) ?
  VAR_17 : VAR_18;
 VAR_30->port = 0;
 VAR_30->phy_address = VAR_31->phy_addr;
 VAR_30->transceiver = (VAR_31->flags & VAR_16) ?
  VAR_28 : VAR_27;
 VAR_30->autoneg = (VAR_31->flags & VAR_14) ?
  VAR_7 : VAR_8;
 if (VAR_30->autoneg == VAR_8)
  VAR_30->advertising |= VAR_5;
 if (!FUNC_1(VAR_29)){
  VAR_30->speed = 0;
  VAR_30->duplex = 0xff;
 }
 VAR_30->maxtxpkt = 0;
 VAR_30->maxrxpkt = 0;
 return 0;
}
