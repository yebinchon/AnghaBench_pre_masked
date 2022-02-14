
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct page {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (struct pci_dev*,struct page*,unsigned long,size_t,int) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,size_t,int) ;

dma_addr_t FUNC_2(struct pci_dev *VAR_0, struct page *VAR_1,
 unsigned long VAR_2, size_t VAR_3, int VAR_4)
{
 dma_addr_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_5 == 0) {
  FUNC_1(VAR_0, VAR_5, VAR_3, VAR_4);
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);




 }

 return VAR_5;
}
