
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dma_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ) ;

int
FUNC_1(struct pci_dev *VAR_1, u64 VAR_2)
{
 if (!FUNC_0(VAR_1, VAR_2))
  return -VAR_0;

 VAR_1->dma_mask = VAR_2;

 return 0;
}
