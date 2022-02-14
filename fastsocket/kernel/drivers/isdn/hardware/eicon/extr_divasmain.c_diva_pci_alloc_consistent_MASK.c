
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct pci_dev*,size_t,int *) ;

__attribute__((used)) static void *FUNC_1(struct pci_dev *VAR_0,
           size_t VAR_1,
           dma_addr_t * VAR_2,
           void **VAR_3)
{
 void *VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);

 *VAR_3 = VAR_4;

 return (VAR_4);
}
