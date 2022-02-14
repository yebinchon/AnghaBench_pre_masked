
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct pasemi_mac {struct phy_device* phydev; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;


 int VAR_0 ;
 struct pasemi_mac* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,struct ethtool_cmd*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1,
          struct ethtool_cmd *VAR_2)
{
 struct pasemi_mac *VAR_3 = FUNC_0(VAR_1);
 struct phy_device *VAR_4 = VAR_3->phydev;

 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_2);
}
