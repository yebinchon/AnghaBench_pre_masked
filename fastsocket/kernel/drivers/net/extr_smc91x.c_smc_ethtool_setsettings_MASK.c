
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_local {scalar_t__ phy_type; int ctl_rfduplx; int lock; int mii; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,struct ethtool_cmd*) ;
 struct smc_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_7, struct ethtool_cmd *VAR_8)
{
 struct smc_local *VAR_9 = FUNC_1(VAR_7);
 int VAR_10;

 if (VAR_9->phy_type != 0) {
  FUNC_2(&VAR_9->lock);
  VAR_10 = FUNC_0(&VAR_9->mii, VAR_8);
  FUNC_3(&VAR_9->lock);
 } else {
  if (VAR_8->autoneg != VAR_0 ||
      VAR_8->speed != VAR_6 ||
      (VAR_8->duplex != VAR_2 && VAR_8->duplex != VAR_1) ||
      (VAR_8->port != VAR_5 && VAR_8->port != VAR_4))
   return -VAR_3;


  VAR_9->ctl_rfduplx = VAR_8->duplex == VAR_1;




  VAR_10 = 0;
 }

 return VAR_10;
}
