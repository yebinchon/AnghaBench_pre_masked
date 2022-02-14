
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; scalar_t__ speed; int duplex; int autoneg; int transceiver; scalar_t__ phy_address; int port; int advertising; } ;
struct atl2_hw {int autoneg_advertised; } ;
struct atl2_adapter {scalar_t__ link_speed; scalar_t__ link_duplex; struct atl2_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct atl2_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_15,
 struct ethtool_cmd *VAR_16)
{
 struct atl2_adapter *VAR_17 = FUNC_0(VAR_15);
 struct atl2_hw *VAR_18 = &VAR_17->hw;

 VAR_16->supported = (VAR_11 |
  VAR_10 |
  VAR_9 |
  VAR_8 |
  VAR_12 |
  VAR_13);
 VAR_16->advertising = VAR_1;

 VAR_16->advertising |= VAR_0;
 VAR_16->advertising |= VAR_18->autoneg_advertised;

 VAR_16->port = VAR_6;
 VAR_16->phy_address = 0;
 VAR_16->transceiver = VAR_14;

 if (VAR_17->link_speed != VAR_7) {
  VAR_16->speed = VAR_17->link_speed;
  if (VAR_17->link_duplex == VAR_5)
   VAR_16->duplex = VAR_3;
  else
   VAR_16->duplex = VAR_4;
 } else {
  VAR_16->speed = -1;
  VAR_16->duplex = -1;
 }

 VAR_16->autoneg = VAR_2;
 return 0;
}
