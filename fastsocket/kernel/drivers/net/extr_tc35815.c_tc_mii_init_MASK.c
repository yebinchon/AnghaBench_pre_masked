
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tc35815_local {TYPE_3__* mii_bus; TYPE_2__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {char* name; int * irq; int * parent; struct net_device* priv; int id; int write; int read; } ;
struct TYPE_8__ {int devfn; int dev; TYPE_1__* bus; } ;
struct TYPE_7__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 struct tc35815_local* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7)
{
 struct tc35815_local *VAR_8 = FUNC_6(VAR_7);
 int VAR_9;
 int VAR_10;

 VAR_8->mii_bus = FUNC_2();
 if (VAR_8->mii_bus == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto err_out;
 }

 VAR_8->mii_bus->name = "tc35815_mii_bus";
 VAR_8->mii_bus->read = VAR_5;
 VAR_8->mii_bus->write = VAR_6;
 FUNC_7(VAR_8->mii_bus->id, VAR_2, "%x",
   (VAR_8->pci_dev->bus->number << 8) | VAR_8->pci_dev->devfn);
 VAR_8->mii_bus->priv = VAR_7;
 VAR_8->mii_bus->parent = &VAR_8->pci_dev->dev;
 VAR_8->mii_bus->irq = FUNC_1(sizeof(int) * VAR_3, VAR_1);
 if (!VAR_8->mii_bus->irq) {
  VAR_9 = -VAR_0;
  goto err_out_free_mii_bus;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  VAR_8->mii_bus->irq[VAR_10] = VAR_4;

 VAR_9 = FUNC_4(VAR_8->mii_bus);
 if (VAR_9)
  goto err_out_free_mdio_irq;
 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9)
  goto err_out_unregister_bus;
 return 0;

err_out_unregister_bus:
 FUNC_5(VAR_8->mii_bus);
err_out_free_mdio_irq:
 FUNC_0(VAR_8->mii_bus->irq);
err_out_free_mii_bus:
 FUNC_3(VAR_8->mii_bus);
err_out:
 return VAR_9;
}
