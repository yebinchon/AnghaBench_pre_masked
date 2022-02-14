
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct flexcop_pci {TYPE_1__* pdev; int io_mem; int init_state; int irq_lock; } ;
struct TYPE_10__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,struct flexcop_pci*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,int ,int ,int ,struct flexcop_pci*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct flexcop_pci *VAR_6)
{
 int VAR_7;
 u8 VAR_8;

 FUNC_6(VAR_6->pdev, VAR_4, &VAR_8);
 FUNC_1("card revision %x", VAR_8);

 if ((VAR_7 = FUNC_3(VAR_6->pdev)) != 0)
  return VAR_7;
 FUNC_10(VAR_6->pdev);

 if ((VAR_7 = FUNC_8(VAR_6->pdev, VAR_0)) != 0)
  goto err_pci_disable_device;

 VAR_6->io_mem = FUNC_4(VAR_6->pdev, 0, 0x800);

 if (!VAR_6->io_mem) {
  FUNC_0("cannot map io memory\n");
  VAR_7 = -VAR_1;
  goto err_pci_release_regions;
 }

 FUNC_9(VAR_6->pdev, VAR_6);
 FUNC_12(&VAR_6->irq_lock);
 if ((VAR_7 = FUNC_11(VAR_6->pdev->irq, VAR_5,
     VAR_3, VAR_0, VAR_6)) != 0)
  goto err_pci_iounmap;

 VAR_6->init_state |= VAR_2;
 return VAR_7;

err_pci_iounmap:
 FUNC_5(VAR_6->pdev, VAR_6->io_mem);
 FUNC_9(VAR_6->pdev, ((void*)0));
err_pci_release_regions:
 FUNC_7(VAR_6->pdev);
err_pci_disable_device:
 FUNC_2(VAR_6->pdev);
 return VAR_7;
}
