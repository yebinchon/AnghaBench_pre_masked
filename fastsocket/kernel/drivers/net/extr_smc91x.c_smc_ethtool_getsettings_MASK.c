
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_local {scalar_t__ phy_type; int ctl_rspeed; int tcr_cur_mode; int lock; int mii; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int maxtxpkt; int maxrxpkt; int supported; int duplex; scalar_t__ port; int transceiver; int autoneg; int speed; } ;


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
 int FUNC_0 (int *,struct ethtool_cmd*) ;
 struct smc_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_11, struct ethtool_cmd *VAR_12)
{
 struct smc_local *VAR_13 = FUNC_1(VAR_11);
 int VAR_14;

 VAR_12->maxtxpkt = 1;
 VAR_12->maxrxpkt = 1;

 if (VAR_13->phy_type != 0) {
  FUNC_2(&VAR_13->lock);
  VAR_14 = FUNC_0(&VAR_13->mii, VAR_12);
  FUNC_3(&VAR_13->lock);
 } else {
  VAR_12->supported = VAR_6 |
     VAR_5 |
     VAR_8 | VAR_7;

  if (VAR_13->ctl_rspeed == 10)
   VAR_12->speed = VAR_3;
  else if (VAR_13->ctl_rspeed == 100)
   VAR_12->speed = VAR_4;

  VAR_12->autoneg = VAR_0;
  VAR_12->transceiver = VAR_10;
  VAR_12->port = 0;
  VAR_12->duplex = VAR_13->tcr_cur_mode & VAR_9 ? VAR_1 : VAR_2;

  VAR_14 = 0;
 }

 return VAR_14;
}
