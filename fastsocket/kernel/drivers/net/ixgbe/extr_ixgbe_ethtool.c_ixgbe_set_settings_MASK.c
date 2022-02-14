
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int (* setup_link ) (struct ixgbe_hw*,scalar_t__,int) ;} ;
struct TYPE_6__ {int autotry_restart; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ media_type; scalar_t__ autoneg_advertised; scalar_t__ multispeed_fiber; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
struct ethtool_cmd {scalar_t__ autoneg; int advertising; int supported; scalar_t__ duplex; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct ethtool_cmd*) ;
 scalar_t__ VAR_11 ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 int VAR_12 ;
 int FUNC_3 (struct ixgbe_hw*,scalar_t__,int) ;
 int FUNC_4 (struct ixgbe_hw*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_13,
                              struct ethtool_cmd *VAR_14)
{
 struct ixgbe_adapter *VAR_15 = FUNC_2(VAR_13);
 struct ixgbe_hw *VAR_16 = &VAR_15->hw;
 u32 VAR_17, VAR_18;
 s32 VAR_19 = 0;

 if ((VAR_16->phy.media_type == VAR_11) ||
     (VAR_16->phy.multispeed_fiber)) {




  if (VAR_14->autoneg == VAR_3)
   return -VAR_6;

  if (VAR_14->advertising & ~VAR_14->supported)
   return -VAR_6;

  VAR_18 = VAR_16->phy.autoneg_advertised;
  VAR_17 = 0;
  if (VAR_14->advertising & VAR_0)
   VAR_17 |= VAR_8;

  if (VAR_14->advertising & VAR_1)
   VAR_17 |= VAR_9;

  if (VAR_14->advertising & VAR_2)
   VAR_17 |= VAR_7;

  if (VAR_18 == VAR_17)
   return VAR_19;

  VAR_16->mac.autotry_restart = 1;
  VAR_19 = VAR_16->mac.ops.setup_link(VAR_16, VAR_17, 1);
  if (VAR_19) {
   FUNC_0(VAR_12, "setup link failed with code %d\n", VAR_19);
   VAR_16->mac.ops.setup_link(VAR_16, VAR_18, 1);
  }
 } else {

  u32 VAR_20 = FUNC_1(VAR_14);
  if ((VAR_14->autoneg == VAR_4) ||
      (VAR_14->advertising != VAR_0) ||
      (VAR_20 + VAR_14->duplex != VAR_10 + VAR_5))
   return -VAR_6;
 }

 return VAR_19;
}
