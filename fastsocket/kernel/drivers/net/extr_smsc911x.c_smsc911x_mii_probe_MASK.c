
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int phy_interface; } ;
struct smsc911x_data {int last_duplex; int last_carrier; struct phy_device* phy_dev; TYPE_2__ config; TYPE_1__* mii_bus; } ;
struct phy_device {int supported; int advertising; int irq; int dev; TYPE_3__* drv; int phy_id; int addr; } ;
struct net_device {int name; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {struct phy_device** phy_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 struct smsc911x_data* FUNC_5 (struct net_device*) ;
 struct phy_device* FUNC_6 (struct net_device*,int ,int *,int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ,int ,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8)
{
 struct smsc911x_data *VAR_9 = FUNC_5(VAR_8);
 struct phy_device *VAR_10 = ((void*)0);
 int VAR_11;


 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (VAR_9->mii_bus->phy_map[VAR_11]) {
   VAR_10 = VAR_9->mii_bus->phy_map[VAR_11];
   FUNC_2(VAR_4, "PHY %d: addr %d, phy_id 0x%08X",
    VAR_11, VAR_10->addr, VAR_10->phy_id);
   break;
  }
 }

 if (!VAR_10) {
  FUNC_7("%s: no PHY found\n", VAR_8->name);
  return -VAR_0;
 }

 VAR_10 = FUNC_6(VAR_8, FUNC_4(&VAR_10->dev),
  &VAR_7, 0, VAR_9->config.phy_interface);

 if (FUNC_0(VAR_10)) {
  FUNC_7("%s: Could not attach to PHY\n", VAR_8->name);
  return FUNC_1(VAR_10);
 }

 FUNC_8("%s: attached PHY driver [%s] (mii_bus:phy_addr=%s, irq=%d)\n",
  VAR_8->name, VAR_10->drv->name,
  FUNC_4(&VAR_10->dev), VAR_10->irq);


 VAR_10->supported &= (VAR_2 | VAR_6 |
         VAR_5);
 VAR_10->advertising = VAR_10->supported;

 VAR_9->phy_dev = VAR_10;
 VAR_9->last_duplex = -1;
 VAR_9->last_carrier = -1;
 FUNC_2(VAR_1, "phy initialised succesfully");
 return 0;
}
