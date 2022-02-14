
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int duplex; int autoneg; int transceiver; scalar_t__ phy_address; int port; int advertising; } ;
struct atl1c_hw {int link_cap_flags; int autoneg_advertised; } ;
struct atl1c_adapter {scalar_t__ link_speed; scalar_t__ link_duplex; struct atl1c_hw hw; } ;


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
 int VAR_15 ;
 int FUNC_0 (struct ethtool_cmd*,int) ;
 struct atl1c_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_16,
         struct ethtool_cmd *VAR_17)
{
 struct atl1c_adapter *VAR_18 = FUNC_1(VAR_16);
 struct atl1c_hw *VAR_19 = &VAR_18->hw;

 VAR_17->supported = (VAR_12 |
      VAR_11 |
      VAR_10 |
      VAR_9 |
      VAR_13 |
      VAR_14);
 if (VAR_19->link_cap_flags & VAR_1)
  VAR_17->supported |= VAR_8;

 VAR_17->advertising = VAR_0;

 VAR_17->advertising |= VAR_19->autoneg_advertised;

 VAR_17->port = VAR_6;
 VAR_17->phy_address = 0;
 VAR_17->transceiver = VAR_15;

 if (VAR_18->link_speed != VAR_7) {
  FUNC_0(VAR_17, VAR_18->link_speed);
  if (VAR_18->link_duplex == VAR_5)
   VAR_17->duplex = VAR_3;
  else
   VAR_17->duplex = VAR_4;
 } else {
  FUNC_0(VAR_17, -1);
  VAR_17->duplex = -1;
 }

 VAR_17->autoneg = VAR_2;
 return 0;
}
