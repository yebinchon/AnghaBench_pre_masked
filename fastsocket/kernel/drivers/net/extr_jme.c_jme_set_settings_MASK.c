
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ speed; scalar_t__ autoneg; scalar_t__ duplex; } ;
struct TYPE_2__ {scalar_t__ full_duplex; scalar_t__ force_media; } ;
struct jme_adapter {struct ethtool_cmd old_ecmd; int flags; int phy_lock; TYPE_1__ mii_if; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (TYPE_1__*,struct ethtool_cmd*) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_4,
       struct ethtool_cmd *VAR_5)
{
 struct jme_adapter *VAR_6 = FUNC_2(VAR_4);
 int VAR_7, VAR_8 = 0;

 if (VAR_5->speed == VAR_3 && VAR_5->autoneg != VAR_0)
  return -VAR_1;

 if (VAR_6->mii_if.force_media &&
 VAR_5->autoneg != VAR_0 &&
 (VAR_6->mii_if.full_duplex != VAR_5->duplex))
  VAR_8 = 1;

 FUNC_4(&VAR_6->phy_lock);
 VAR_7 = FUNC_1(&(VAR_6->mii_if), VAR_5);
 FUNC_5(&VAR_6->phy_lock);

 if (!VAR_7 && VAR_8)
  FUNC_0(VAR_6);

 if (!VAR_7) {
  FUNC_3(VAR_2, &VAR_6->flags);
  VAR_6->old_ecmd = *VAR_5;
 }

 return VAR_7;
}
