
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int (* check_link ) (struct ixgbe_hw*,int*,int*,int) ;int (* get_link_capabilities ) (struct ixgbe_hw*,int*,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int autoneg_advertised; int type; int sfp_type; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
struct ethtool_cmd {int duplex; void* port; int advertising; int supported; int transceiver; int autoneg; } ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct ethtool_cmd*,int) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_24,
                              struct ethtool_cmd *VAR_25)
{
 struct ixgbe_adapter *VAR_26 = FUNC_1(VAR_24);
 struct ixgbe_hw *VAR_27 = &VAR_26->hw;
 ixgbe_link_speed VAR_28;
 u32 VAR_29 = 0;
 bool VAR_30 = 0;
 bool VAR_31;

 VAR_27->mac.ops.get_link_capabilities(VAR_27, &VAR_28, &VAR_30);


 if (VAR_28 & 159)
  VAR_25->supported |= VAR_17;
 if (VAR_28 & 158)
  VAR_25->supported |= VAR_18;
 if (VAR_28 & 160)
  VAR_25->supported |= VAR_19;


 if (VAR_27->phy.autoneg_advertised) {
  if (VAR_27->phy.autoneg_advertised & 160)
   VAR_25->advertising |= VAR_2;
  if (VAR_27->phy.autoneg_advertised & 159)
   VAR_25->advertising |= VAR_0;
  if (VAR_27->phy.autoneg_advertised & 158)
   VAR_25->advertising |= VAR_1;
 } else {

  if (VAR_28 & 159)
   VAR_25->advertising |= VAR_0;
  if (VAR_28 & 158)
   VAR_25->advertising |= VAR_1;
  if (VAR_28 & 160)
   VAR_25->advertising |= VAR_2;
 }

 if (VAR_30) {
  VAR_25->supported |= VAR_20;
  VAR_25->advertising |= VAR_3;
  VAR_25->autoneg = VAR_7;
 } else
  VAR_25->autoneg = VAR_6;

 VAR_25->transceiver = VAR_23;


 switch (VAR_26->hw.phy.type) {
 case 145:
 case 157:
 case 156:
  VAR_25->supported |= VAR_22;
  VAR_25->advertising |= VAR_5;
  VAR_25->port = VAR_13;
  break;
 case 153:
  VAR_25->supported |= VAR_21;
  VAR_25->advertising |= VAR_4;
  VAR_25->port = VAR_10;
  break;
 case 154:
 case 149:
 case 148:
 case 151:
 case 152:
 case 150:
 case 147:

  switch (VAR_26->hw.phy.sfp_type) {
  case 136:
  case 135:
  case 134:
   VAR_25->supported |= VAR_21;
   VAR_25->advertising |= VAR_4;
   VAR_25->port = VAR_9;
   break;
  case 131:
  case 133:
  case 130:
  case 129:
  case 138:
  case 137:
  case 140:
  case 139:
   VAR_25->supported |= VAR_21;
   VAR_25->advertising |= VAR_4;
   VAR_25->port = VAR_10;
   break;
  case 132:
   VAR_25->supported |= VAR_21;
   VAR_25->advertising |= VAR_4;
   VAR_25->port = VAR_11;
   break;
  case 142:
  case 141:
   VAR_25->supported |= VAR_22;
   VAR_25->advertising |= VAR_5;
   VAR_25->port = VAR_13;
   break;
  case 128:
  default:
   VAR_25->supported |= VAR_21;
   VAR_25->advertising |= VAR_4;
   VAR_25->port = VAR_12;
   break;
  }
  break;
 case 143:
  VAR_25->supported |= VAR_21;
  VAR_25->advertising |= VAR_4;
  VAR_25->port = VAR_11;
  break;
 case 144:
 case 155:
 case 146:
 default:
  VAR_25->supported |= VAR_21;
  VAR_25->advertising |= VAR_4;
  VAR_25->port = VAR_12;
  break;
 }

 VAR_27->mac.ops.check_link(VAR_27, &VAR_29, &VAR_31, 0);
 if (VAR_31) {
  switch (VAR_29) {
  case 159:
   FUNC_0(VAR_25, VAR_16);
   break;
  case 158:
   FUNC_0(VAR_25, VAR_15);
   break;
  case 160:
   FUNC_0(VAR_25, VAR_14);
   break;
  default:
   break;
  }
  VAR_25->duplex = VAR_8;
 } else {
  FUNC_0(VAR_25, -1);
  VAR_25->duplex = -1;
 }

 return 0;
}
