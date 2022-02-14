
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int autoneg; int link_duplex; scalar_t__ link_speed; } ;
struct TYPE_3__ {int autoneg_advertised; } ;
struct pch_gbe_hw {TYPE_2__ mac; TYPE_1__ phy; } ;
struct pch_gbe_adapter {int netdev; int mii; struct pch_gbe_hw hw; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int autoneg; int advertising; int duplex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct ethtool_cmd*) ;
 int FUNC_1 (int *,struct ethtool_cmd*) ;
 struct pch_gbe_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct pch_gbe_adapter*) ;
 int FUNC_5 (struct pch_gbe_hw*) ;
 int FUNC_6 (struct pch_gbe_hw*,int ,int ) ;
 int FUNC_7 (struct pch_gbe_adapter*) ;
 int FUNC_8 (struct pch_gbe_adapter*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5,
     struct ethtool_cmd *VAR_6)
{
 struct pch_gbe_adapter *VAR_7 = FUNC_2(VAR_5);
 struct pch_gbe_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9 = FUNC_0(VAR_6);
 int VAR_10;

 FUNC_6(VAR_8, VAR_2, VAR_0);



 if (VAR_9 == VAR_4) {
  VAR_9 = VAR_3;
  VAR_6->duplex = VAR_1;
 }
 VAR_10 = FUNC_1(&VAR_7->mii, VAR_6);
 if (VAR_10) {
  FUNC_9("Error: mii_ethtool_sset\n");
  return VAR_10;
 }
 VAR_8->mac.link_speed = VAR_9;
 VAR_8->mac.link_duplex = VAR_6->duplex;
 VAR_8->phy.autoneg_advertised = VAR_6->advertising;
 VAR_8->mac.autoneg = VAR_6->autoneg;
 FUNC_5(VAR_8);


 if (FUNC_3(VAR_7->netdev)) {
  FUNC_4(VAR_7);
  VAR_10 = FUNC_8(VAR_7);
 } else {
  FUNC_7(VAR_7);
 }
 return VAR_10;
}
