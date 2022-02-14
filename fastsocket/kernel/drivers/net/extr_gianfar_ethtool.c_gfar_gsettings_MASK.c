
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct gfar_private {int rxic; int txic; struct phy_device* phydev; } ;
struct ethtool_cmd {void* maxrxpkt; void* maxtxpkt; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct gfar_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ethtool_cmd *VAR_2)
{
 struct gfar_private *VAR_3 = FUNC_1(VAR_1);
 struct phy_device *VAR_4 = VAR_3->phydev;

 if (((void*)0) == VAR_4)
  return -VAR_0;

 VAR_2->maxtxpkt = FUNC_0(VAR_3->txic);
 VAR_2->maxrxpkt = FUNC_0(VAR_3->rxic);

 return FUNC_2(VAR_4, VAR_2);
}
