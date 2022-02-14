
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int lock; struct phy_device* phydev; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;


 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,struct ethtool_cmd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 struct stmmac_priv *VAR_2 = FUNC_0(VAR_0);
 struct phy_device *VAR_3 = VAR_2->phydev;
 int VAR_4;

 FUNC_2(&VAR_2->lock);
 VAR_4 = FUNC_1(VAR_3, VAR_1);
 FUNC_3(&VAR_2->lock);

 return VAR_4;
}
