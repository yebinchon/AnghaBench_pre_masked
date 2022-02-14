
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (struct pci_dev*,void*,size_t,int) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,size_t,int) ;

dma_addr_t FUNC_2(struct pci_dev *VAR_0, void *VAR_1, size_t VAR_2,
 int VAR_3)
{
 dma_addr_t VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4 == 0) {
  FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);




 }

 return VAR_4;
}
