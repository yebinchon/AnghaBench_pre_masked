
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coherent_dma_mask; int * dma_parms; int * dma_mask; int release; } ;
struct pci_dev {int state_saved; int bus_list; TYPE_1__ dev; int dma_parms; int dma_mask; } ;
struct pci_bus {int devices; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,struct pci_dev*) ;
 int VAR_1 ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int VAR_2 ;
 int FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct pci_dev *VAR_3, struct pci_bus *VAR_4)
{
 FUNC_0(&VAR_3->dev);
 VAR_3->dev.release = VAR_2;
 FUNC_3(VAR_3);

 VAR_3->dev.dma_mask = &VAR_3->dma_mask;
 VAR_3->dev.dma_parms = &VAR_3->dma_parms;
 VAR_3->dev.coherent_dma_mask = 0xffffffffull;

 FUNC_7(VAR_3, 65536);
 FUNC_8(VAR_3, 0xffffffff);


 FUNC_4(VAR_1, VAR_3);


 FUNC_6(VAR_3);


 VAR_3->state_saved = 0;


 FUNC_5(VAR_3);





 FUNC_1(&VAR_0);
 FUNC_2(&VAR_3->bus_list, &VAR_4->devices);
 FUNC_9(&VAR_0);
}
