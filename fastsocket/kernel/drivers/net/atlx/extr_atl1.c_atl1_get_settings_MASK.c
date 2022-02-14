
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int advertising; int speed; int duplex; int autoneg; int transceiver; scalar_t__ phy_address; int port; } ;
struct atl1_hw {scalar_t__ media_type; } ;
struct atl1_adapter {int netdev; struct atl1_hw hw; } ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct atl1_hw*,scalar_t__*,scalar_t__*) ;
 struct atl1_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_23,
 struct ethtool_cmd *VAR_24)
{
 struct atl1_adapter *VAR_25 = FUNC_1(VAR_23);
 struct atl1_hw *VAR_26 = &VAR_25->hw;

 VAR_24->supported = (VAR_19 |
      VAR_18 |
      VAR_17 |
      VAR_16 |
      VAR_15 |
      VAR_20 | VAR_21);
 VAR_24->advertising = VAR_6;
 if (VAR_26->media_type == VAR_13 ||
     VAR_26->media_type == VAR_12) {
  VAR_24->advertising |= VAR_5;
  if (VAR_26->media_type == VAR_13) {
   VAR_24->advertising |= VAR_5;
   VAR_24->advertising |=
       (VAR_4 |
        VAR_3 |
        VAR_2 |
        VAR_1 |
        VAR_0);
  } else
   VAR_24->advertising |= (VAR_0);
 }
 VAR_24->port = VAR_14;
 VAR_24->phy_address = 0;
 VAR_24->transceiver = VAR_22;

 if (FUNC_2(VAR_25->netdev)) {
  u16 VAR_27, VAR_28;
  FUNC_0(VAR_26, &VAR_27, &VAR_28);
  VAR_24->speed = VAR_27;
  if (VAR_28 == VAR_11)
   VAR_24->duplex = VAR_9;
  else
   VAR_24->duplex = VAR_10;
 } else {
  VAR_24->speed = -1;
  VAR_24->duplex = -1;
 }
 if (VAR_26->media_type == VAR_13 ||
     VAR_26->media_type == VAR_12)
  VAR_24->autoneg = VAR_8;
 else
  VAR_24->autoneg = VAR_7;

 return 0;
}
