
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dma_mask; } ;
typedef int dma_addr_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,void*,size_t,int) ;

dma_addr_t
FUNC_3(struct pci_dev *VAR_1, void *VAR_2, size_t VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4 == VAR_0)
  FUNC_0();

 VAR_5 = VAR_1 ? FUNC_1(VAR_1, VAR_1->dma_mask) : 0;
 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5);
}
