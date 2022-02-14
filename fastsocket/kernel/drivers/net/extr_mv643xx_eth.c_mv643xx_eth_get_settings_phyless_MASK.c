
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv643xx_eth_private {int dummy; } ;
struct ethtool_cmd {int speed; int maxtxpkt; int maxrxpkt; int autoneg; int transceiver; scalar_t__ phy_address; int port; int duplex; int advertising; int supported; } ;


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
 int FUNC_0 (struct mv643xx_eth_private*,int ) ;

__attribute__((used)) static int
FUNC_1(struct mv643xx_eth_private *VAR_13,
     struct ethtool_cmd *VAR_14)
{
 u32 VAR_15;

 VAR_15 = FUNC_0(VAR_13, VAR_7);

 VAR_14->supported = VAR_11;
 VAR_14->advertising = VAR_0;
 switch (VAR_15 & VAR_6) {
 case 130:
  VAR_14->speed = VAR_8;
  break;
 case 129:
  VAR_14->speed = VAR_9;
  break;
 case 128:
  VAR_14->speed = VAR_10;
  break;
 default:
  VAR_14->speed = -1;
  break;
 }
 VAR_14->duplex = (VAR_15 & VAR_4) ? VAR_2 : VAR_3;
 VAR_14->port = VAR_5;
 VAR_14->phy_address = 0;
 VAR_14->transceiver = VAR_12;
 VAR_14->autoneg = VAR_1;
 VAR_14->maxtxpkt = 1;
 VAR_14->maxrxpkt = 1;

 return 0;
}
