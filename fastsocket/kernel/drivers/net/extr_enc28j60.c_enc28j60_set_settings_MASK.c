
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int duplex; int speed; int autoneg; } ;


 int FUNC_0 (struct net_device*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->autoneg, VAR_1->speed, VAR_1->duplex);
}
