
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; scalar_t__ speed; int duplex; int autoneg; int transceiver; scalar_t__ phy_address; int port; int advertising; } ;
struct atl1e_hw {scalar_t__ nic_type; int autoneg_advertised; } ;
struct atl1e_adapter {scalar_t__ link_speed; scalar_t__ link_duplex; struct atl1e_hw hw; } ;


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
 scalar_t__ VAR_16 ;
 struct atl1e_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_17,
         struct ethtool_cmd *VAR_18)
{
 struct atl1e_adapter *VAR_19 = FUNC_0(VAR_17);
 struct atl1e_hw *VAR_20 = &VAR_19->hw;

 VAR_18->supported = (VAR_12 |
      VAR_11 |
      VAR_10 |
      VAR_9 |
      VAR_13 |
      VAR_14);
 if (VAR_20->nic_type == VAR_16)
  VAR_18->supported |= VAR_8;

 VAR_18->advertising = VAR_1;

 VAR_18->advertising |= VAR_0;
 VAR_18->advertising |= VAR_20->autoneg_advertised;

 VAR_18->port = VAR_6;
 VAR_18->phy_address = 0;
 VAR_18->transceiver = VAR_15;

 if (VAR_19->link_speed != VAR_7) {
  VAR_18->speed = VAR_19->link_speed;
  if (VAR_19->link_duplex == VAR_5)
   VAR_18->duplex = VAR_3;
  else
   VAR_18->duplex = VAR_4;
 } else {
  VAR_18->speed = -1;
  VAR_18->duplex = -1;
 }

 VAR_18->autoneg = VAR_2;
 return 0;
}
