
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_eth_private {int duplex; struct phy_device* phydev; scalar_t__ speed; int link; int phy_id; TYPE_1__* mii_bus; } ;
struct phy_device {TYPE_2__* drv; int addr; } ;
struct net_device {int dev; } ;
typedef int phy_id ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int id; } ;


 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 struct sh_eth_private* FUNC_4 (struct net_device*) ;
 struct phy_device* FUNC_5 (struct net_device*,char*,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (char*,int,char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5)
{
 struct sh_eth_private *VAR_6 = FUNC_4(VAR_5);
 char VAR_7[VAR_0 + 3];
 struct phy_device *VAR_8 = ((void*)0);

 FUNC_6(VAR_7, sizeof(VAR_7), VAR_2,
  VAR_6->mii_bus->id , VAR_6->phy_id);

 VAR_6->link = VAR_1;
 VAR_6->speed = 0;
 VAR_6->duplex = -1;


 VAR_8 = FUNC_5(VAR_5, VAR_7, &VAR_4,
    0, VAR_3);
 if (FUNC_0(VAR_8)) {
  FUNC_2(&VAR_5->dev, "phy_connect failed\n");
  return FUNC_1(VAR_8);
 }

 FUNC_3(&VAR_5->dev, "attached phy %i to driver %s\n",
  VAR_8->addr, VAR_8->drv->name);

 VAR_6->phydev = VAR_8;

 return 0;
}
