
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ if_port; int base_addr; } ;
struct ethtool_cmd {int supported; int advertising; scalar_t__ port; int autoneg; int transceiver; int phy_address; int duplex; int speed; } ;
struct eepro_local {int* word; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct eepro_local* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_22,
     struct ethtool_cmd *VAR_23)
{
 struct eepro_local *VAR_24 = FUNC_1(VAR_22);

 VAR_23->supported = VAR_10 |
    VAR_9 |
    VAR_12;
 VAR_23->advertising = VAR_1 |
    VAR_0 |
    VAR_3;

 if (FUNC_0(VAR_24->word[5], VAR_21)) {
  VAR_23->supported |= VAR_14;
  VAR_23->advertising |= VAR_5;
 }
 if (FUNC_0(VAR_24->word[5], VAR_20)) {
  VAR_23->supported |= VAR_13;
  VAR_23->advertising |= VAR_4;
 }
 if (FUNC_0(VAR_24->word[5], VAR_19)) {
  VAR_23->supported |= VAR_11;
  VAR_23->advertising |= VAR_2;
 }

 VAR_23->speed = VAR_8;

 if (VAR_22->if_port == VAR_15 && VAR_24->word[1] & VAR_18) {
  VAR_23->duplex = VAR_6;
 }
 else {
  VAR_23->duplex = VAR_7;
 }

 VAR_23->port = VAR_22->if_port;
 VAR_23->phy_address = VAR_22->base_addr;
 VAR_23->transceiver = VAR_16;

 if (VAR_24->word[0] & VAR_17) {
  VAR_23->autoneg = 1;
 }

 return 0;
}
