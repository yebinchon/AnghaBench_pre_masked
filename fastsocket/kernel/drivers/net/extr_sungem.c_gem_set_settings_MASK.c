
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gem {int lock; } ;
struct ethtool_cmd {scalar_t__ autoneg; scalar_t__ advertising; scalar_t__ speed; scalar_t__ duplex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct gem*,struct ethtool_cmd*) ;
 int FUNC_1 (struct gem*) ;
 int FUNC_2 (struct gem*) ;
 struct gem* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_8, struct ethtool_cmd *VAR_9)
{
 struct gem *VAR_10 = FUNC_3(VAR_8);


 if (VAR_9->autoneg != VAR_1 &&
     VAR_9->autoneg != VAR_0)
  return -VAR_4;

 if (VAR_9->autoneg == VAR_1 &&
     VAR_9->advertising == 0)
  return -VAR_4;

 if (VAR_9->autoneg == VAR_0 &&
     ((VAR_9->speed != VAR_7 &&
       VAR_9->speed != VAR_6 &&
       VAR_9->speed != VAR_5) ||
      (VAR_9->duplex != VAR_3 &&
       VAR_9->duplex != VAR_2)))
  return -VAR_4;


 FUNC_4(&VAR_10->lock);
 FUNC_1(VAR_10);
 FUNC_0(VAR_10, VAR_9);
 FUNC_2(VAR_10);
 FUNC_5(&VAR_10->lock);

 return 0;
}
