
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_link_config {int autoneg; int duplex; int speed; int advertising; } ;
struct niu {struct niu_link_config link_config; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int autoneg; int duplex; int speed; int advertising; } ;


 struct niu* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct niu*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 struct niu *VAR_2 = FUNC_0(VAR_0);
 struct niu_link_config *VAR_3 = &VAR_2->link_config;

 VAR_3->advertising = VAR_1->advertising;
 VAR_3->speed = VAR_1->speed;
 VAR_3->duplex = VAR_1->duplex;
 VAR_3->autoneg = VAR_1->autoneg;
 return FUNC_1(VAR_2);
}
