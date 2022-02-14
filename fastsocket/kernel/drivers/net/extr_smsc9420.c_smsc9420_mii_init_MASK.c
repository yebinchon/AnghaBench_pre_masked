
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smsc9420_pdata {TYPE_3__* mii_bus; int * phy_irq; TYPE_2__* pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int phy_mask; int * irq; int write; int read; struct smsc9420_pdata* priv; int id; int name; } ;
struct TYPE_8__ {int devfn; TYPE_1__* bus; } ;
struct TYPE_7__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct smsc9420_pdata* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_9)
{
 struct smsc9420_pdata *VAR_10 = FUNC_4(VAR_9);
 int VAR_11 = -VAR_2, VAR_12;

 VAR_10->mii_bus = FUNC_0();
 if (!VAR_10->mii_bus) {
  VAR_11 = -VAR_1;
  goto err_out_1;
 }
 VAR_10->mii_bus->name = VAR_0;
 FUNC_7(VAR_10->mii_bus->id, VAR_3, "%x",
  (VAR_10->pdev->bus->number << 8) | VAR_10->pdev->devfn);
 VAR_10->mii_bus->priv = VAR_10;
 VAR_10->mii_bus->read = VAR_7;
 VAR_10->mii_bus->write = VAR_8;
 VAR_10->mii_bus->irq = VAR_10->phy_irq;
 for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12)
  VAR_10->mii_bus->irq[VAR_12] = VAR_5;


 VAR_10->mii_bus->phy_mask = ~(1 << 1);

 if (FUNC_2(VAR_10->mii_bus)) {
  FUNC_6(VAR_6, "Error registering mii bus");
  goto err_out_free_bus_2;
 }

 if (FUNC_5(VAR_9) < 0) {
  FUNC_6(VAR_6, "Error probing mii bus");
  goto err_out_unregister_bus_3;
 }

 return 0;

err_out_unregister_bus_3:
 FUNC_3(VAR_10->mii_bus);
err_out_free_bus_2:
 FUNC_1(VAR_10->mii_bus);
err_out_1:
 return VAR_11;
}
