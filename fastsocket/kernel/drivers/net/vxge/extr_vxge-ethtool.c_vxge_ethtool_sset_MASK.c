
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_4, struct ethtool_cmd *VAR_5)
{

 if ((VAR_5->autoneg == VAR_0) ||
     (VAR_5->speed != VAR_3) || (VAR_5->duplex != VAR_1))
  return -VAR_2;

 return 0;
}
