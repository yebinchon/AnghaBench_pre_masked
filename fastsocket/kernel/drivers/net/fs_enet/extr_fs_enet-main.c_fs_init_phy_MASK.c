
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {int dev; } ;
struct fs_enet_private {int oldduplex; struct phy_device* phydev; TYPE_1__* fpi; scalar_t__ oldspeed; scalar_t__ oldlink; } ;
struct TYPE_2__ {int phy_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int VAR_2 ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;
 struct phy_device* FUNC_2 (struct net_device*,int ,int *,int ,int ) ;
 struct phy_device* FUNC_3 (struct net_device*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct fs_enet_private *VAR_4 = FUNC_1(VAR_3);
 struct phy_device *VAR_5;

 VAR_4->oldlink = 0;
 VAR_4->oldspeed = 0;
 VAR_4->oldduplex = -1;

 VAR_5 = FUNC_2(VAR_3, VAR_4->fpi->phy_node, &VAR_2, 0,
    VAR_1);
 if (!VAR_5) {
  VAR_5 = FUNC_3(VAR_3, &VAR_2,
         VAR_1);
 }
 if (!VAR_5) {
  FUNC_0(&VAR_3->dev, "Could not attach to PHY\n");
  return -VAR_0;
 }

 VAR_4->phydev = VAR_5;

 return 0;
}
