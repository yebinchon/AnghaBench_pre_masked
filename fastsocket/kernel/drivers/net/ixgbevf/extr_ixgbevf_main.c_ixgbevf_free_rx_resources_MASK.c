
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ixgbevf_ring {int * desc; int dma; int size; int * rx_buffer_info; } ;
struct ixgbevf_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct ixgbevf_adapter*,struct ixgbevf_ring*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ixgbevf_adapter *VAR_0,
          struct ixgbevf_ring *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;

 FUNC_1(VAR_0, VAR_1);

 FUNC_2(VAR_1->rx_buffer_info);
 VAR_1->rx_buffer_info = ((void*)0);

 FUNC_0(&VAR_2->dev, VAR_1->size, VAR_1->desc,
     VAR_1->dma);

 VAR_1->desc = ((void*)0);
}
