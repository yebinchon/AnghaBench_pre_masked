
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smsc9420_pdata {int last_duplex; int last_carrier; struct phy_device* phy_dev; TYPE_1__* mii_bus; } ;
struct phy_device {int supported; int advertising; int irq; int dev; TYPE_2__* drv; int phy_id; int addr; } ;
struct net_device {int name; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct phy_device** phy_map; } ;


 int FUNC_0 (struct phy_device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct phy_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct phy_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 struct smsc9420_pdata* FUNC_4 (struct net_device*) ;
 struct phy_device* FUNC_5 (struct net_device*,int ,int *,int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7)
{
 struct smsc9420_pdata *VAR_8 = FUNC_4(VAR_7);
 struct phy_device *VAR_9 = ((void*)0);

 FUNC_0(VAR_8->phy_dev);


 if (!VAR_8->mii_bus->phy_map[1]) {
  FUNC_6("%s: no PHY found at address 1\n", VAR_7->name);
  return -VAR_0;
 }

 VAR_9 = VAR_8->mii_bus->phy_map[1];
 FUNC_8(VAR_3, "PHY addr %d, phy_id 0x%08X", VAR_9->addr,
  VAR_9->phy_id);

 VAR_9 = FUNC_5(VAR_7, FUNC_3(&VAR_9->dev),
  &VAR_6, 0, VAR_2);

 if (FUNC_1(VAR_9)) {
  FUNC_6("%s: Could not attach to PHY\n", VAR_7->name);
  return FUNC_2(VAR_9);
 }

 FUNC_7("%s: attached PHY driver [%s] (mii_bus:phy_addr=%s, irq=%d)\n",
  VAR_7->name, VAR_9->drv->name, FUNC_3(&VAR_9->dev), VAR_9->irq);


 VAR_9->supported &= (VAR_1 | VAR_5 |
         VAR_4);
 VAR_9->advertising = VAR_9->supported;

 VAR_8->phy_dev = VAR_9;
 VAR_8->last_duplex = -1;
 VAR_8->last_carrier = -1;

 return 0;
}
