
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ dma_mask; } ;
struct device {scalar_t__* dma_mask; int * bus; } ;


 int FUNC_0 (int) ;
 struct pci_dev* VAR_0 ;
 int VAR_1 ;
 struct pci_dev* FUNC_1 (struct device*) ;

struct pci_dev *
FUNC_2(struct device *VAR_2)
{
 if (VAR_2 && VAR_2->bus == &VAR_1)
  return FUNC_1(VAR_2);



 FUNC_0(!VAR_0);



 if (!VAR_2 || !VAR_2->dma_mask || !*VAR_2->dma_mask)
  return VAR_0;



 if (*VAR_2->dma_mask >= VAR_0->dma_mask)
  return VAR_0;


 return ((void*)0);
}
