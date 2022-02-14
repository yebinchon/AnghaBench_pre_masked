
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ addr; scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; int advertising; int supported; } ;
struct ethtool_cmd {scalar_t__ phy_address; scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; int advertising; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct phy_device*) ;

int FUNC_1(struct phy_device *VAR_9, struct ethtool_cmd *VAR_10)
{
 if (VAR_10->phy_address != VAR_9->addr)
  return -VAR_5;



 VAR_10->advertising &= VAR_9->supported;


 if (VAR_10->autoneg != VAR_2 && VAR_10->autoneg != VAR_1)
  return -VAR_5;

 if (VAR_10->autoneg == VAR_2 && VAR_10->advertising == 0)
  return -VAR_5;

 if (VAR_10->autoneg == VAR_1
   && ((VAR_10->speed != VAR_8
     && VAR_10->speed != VAR_7
     && VAR_10->speed != VAR_6)
    || (VAR_10->duplex != VAR_4
     && VAR_10->duplex != VAR_3)))
  return -VAR_5;

 VAR_9->autoneg = VAR_10->autoneg;

 VAR_9->speed = VAR_10->speed;

 VAR_9->advertising = VAR_10->advertising;

 if (VAR_2 == VAR_10->autoneg)
  VAR_9->advertising |= VAR_0;
 else
  VAR_9->advertising &= ~VAR_0;

 VAR_9->duplex = VAR_10->duplex;


 FUNC_0(VAR_9);

 return 0;
}
