
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igbvf_adapter {struct e1000_hw hw; } ;
struct ethtool_cmd {int port; int duplex; int autoneg; int transceiver; int advertising; int supported; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ethtool_cmd*,int) ;
 struct igbvf_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_14,
                              struct ethtool_cmd *VAR_15)
{
 struct igbvf_adapter *VAR_16 = FUNC_2(VAR_14);
 struct e1000_hw *VAR_17 = &VAR_16->hw;
 u32 VAR_18;

 VAR_15->supported = VAR_12;

 VAR_15->advertising = VAR_0;

 VAR_15->port = -1;
 VAR_15->transceiver = VAR_13;

 VAR_18 = FUNC_0(VAR_11);
 if (VAR_18 & VAR_5) {
  if (VAR_18 & VAR_7)
   FUNC_1(VAR_15, VAR_10);
  else if (VAR_18 & VAR_6)
   FUNC_1(VAR_15, VAR_9);
  else
   FUNC_1(VAR_15, VAR_8);

  if (VAR_18 & VAR_4)
   VAR_15->duplex = VAR_2;
  else
   VAR_15->duplex = VAR_3;
 } else {
  FUNC_1(VAR_15, -1);
  VAR_15->duplex = -1;
 }

 VAR_15->autoneg = VAR_1;

 return 0;
}
