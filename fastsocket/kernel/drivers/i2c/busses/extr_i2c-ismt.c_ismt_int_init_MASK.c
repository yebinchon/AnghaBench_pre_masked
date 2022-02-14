
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ismt_priv {int using_msi; TYPE_1__* pci_dev; } ;
struct TYPE_3__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ,int ,char*,struct ismt_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct ismt_priv *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_4(VAR_4->pci_dev);
 if (VAR_5) {
  FUNC_1(&VAR_4->pci_dev->dev,
    "Unable to use MSI interrupts, falling back to legacy\n");
  goto intx;
 }

 VAR_5 = FUNC_2(&VAR_4->pci_dev->dev,
          VAR_4->pci_dev->irq,
          VAR_3,
          0,
          "ismt-msi",
          VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_4->pci_dev);
  goto intx;
 }

 VAR_4->using_msi = 1;
 goto done;


intx:
 VAR_5 = FUNC_2(&VAR_4->pci_dev->dev,
          VAR_4->pci_dev->irq,
          VAR_2,
          VAR_1,
          "ismt-intx",
          VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_4->pci_dev->dev, "no usable interrupts\n");
  return -VAR_0;
 }

 VAR_4->using_msi = 0;

done:
 return 0;
}
