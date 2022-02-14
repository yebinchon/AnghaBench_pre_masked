
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ autoneg; scalar_t__ duplex; } ;
struct atl1c_hw {scalar_t__ autoneg_advertised; } ;
struct atl1c_adapter {int flags; TYPE_1__* pdev; struct atl1c_hw hw; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct atl1c_hw*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct ethtool_cmd*) ;
 int FUNC_4 (int) ;
 struct atl1c_adapter* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct atl1c_adapter*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_12,
         struct ethtool_cmd *VAR_13)
{
 struct atl1c_adapter *VAR_14 = FUNC_5(VAR_12);
 struct atl1c_hw *VAR_15 = &VAR_14->hw;
 u16 VAR_16;

 while (FUNC_7(VAR_11, &VAR_14->flags))
  FUNC_4(1);

 if (VAR_13->autoneg == VAR_6) {
  VAR_16 = VAR_5;
 } else {
  u32 VAR_17 = FUNC_3(VAR_13);
  if (VAR_17 == VAR_10) {
   if (VAR_13->duplex != VAR_7) {
    if (FUNC_6(VAR_14))
     FUNC_2(&VAR_14->pdev->dev,
      "1000M half is invalid\n");
    FUNC_1(VAR_11, &VAR_14->flags);
    return -VAR_8;
   }
   VAR_16 = VAR_0;
  } else if (VAR_17 == VAR_9) {
   if (VAR_13->duplex == VAR_7)
    VAR_16 = VAR_1;
   else
    VAR_16 = VAR_2;
  } else {
   if (VAR_13->duplex == VAR_7)
    VAR_16 = VAR_3;
   else
    VAR_16 = VAR_4;
  }
 }

 if (VAR_15->autoneg_advertised != VAR_16) {
  VAR_15->autoneg_advertised = VAR_16;
  if (FUNC_0(VAR_15) != 0) {
   if (FUNC_6(VAR_14))
    FUNC_2(&VAR_14->pdev->dev,
     "ethtool speed/duplex setting failed\n");
   FUNC_1(VAR_11, &VAR_14->flags);
   return -VAR_8;
  }
 }
 FUNC_1(VAR_11, &VAR_14->flags);
 return 0;
}
