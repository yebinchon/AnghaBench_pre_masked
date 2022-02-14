
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct happy_meal {int happy_lock; int tcvregs; int happy_timer; } ;
struct ethtool_cmd {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct happy_meal*,int ,struct ethtool_cmd*) ;
 struct happy_meal* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7, struct ethtool_cmd *VAR_8)
{
 struct happy_meal *VAR_9 = FUNC_2(VAR_7);


 if (VAR_8->autoneg != VAR_1 &&
     VAR_8->autoneg != VAR_0)
  return -VAR_4;
 if (VAR_8->autoneg == VAR_0 &&
     ((VAR_8->speed != VAR_6 &&
       VAR_8->speed != VAR_5) ||
      (VAR_8->duplex != VAR_3 &&
       VAR_8->duplex != VAR_2)))
  return -VAR_4;


 FUNC_3(&VAR_9->happy_lock);
 FUNC_0(&VAR_9->happy_timer);
 FUNC_1(VAR_9, VAR_9->tcvregs, VAR_8);
 FUNC_4(&VAR_9->happy_lock);

 return 0;
}
