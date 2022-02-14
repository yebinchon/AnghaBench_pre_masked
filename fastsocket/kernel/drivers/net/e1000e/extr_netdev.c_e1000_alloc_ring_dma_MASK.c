
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct e1000_ring {int desc; int dma; int size; } ;
struct e1000_adapter {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct e1000_adapter *VAR_2,
    struct e1000_ring *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->pdev;

 VAR_3->desc = FUNC_0(&VAR_4->dev, VAR_3->size, &VAR_3->dma,
     VAR_1);
 if (!VAR_3->desc)
  return -VAR_0;

 return 0;
}
