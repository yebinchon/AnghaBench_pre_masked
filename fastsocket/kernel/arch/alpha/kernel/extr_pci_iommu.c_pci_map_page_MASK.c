
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dma_mask; } ;
struct page {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,char*,size_t,int) ;

dma_addr_t
FUNC_4(struct pci_dev *VAR_1, struct page *VAR_2, unsigned long VAR_3,
      size_t VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_5 == VAR_0)
  FUNC_0();

 VAR_6 = VAR_1 ? FUNC_2(VAR_1, VAR_1->dma_mask) : 0;
 return FUNC_3(VAR_1, (char *)FUNC_1(VAR_2) + VAR_3,
    VAR_4, VAR_6);
}
