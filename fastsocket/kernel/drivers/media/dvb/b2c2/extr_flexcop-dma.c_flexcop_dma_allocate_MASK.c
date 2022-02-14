
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct flexcop_dma {int size; void* dma_addr1; int * cpu_addr1; void* dma_addr0; int * cpu_addr0; struct pci_dev* pdev; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (struct pci_dev*,int,void**) ;

int FUNC_2(struct pci_dev *VAR_2,
  struct flexcop_dma *VAR_3, u32 VAR_4)
{
 u8 *VAR_5;
 dma_addr_t VAR_6 = 0;

 if (VAR_4 % 2) {
  FUNC_0("dma buffersize has to be even.");
  return -VAR_0;
 }

 if ((VAR_5 = FUNC_1(VAR_2, VAR_4, &VAR_6)) != ((void*)0)) {
  VAR_3->pdev = VAR_2;
  VAR_3->cpu_addr0 = VAR_5;
  VAR_3->dma_addr0 = VAR_6;
  VAR_3->cpu_addr1 = VAR_5 + VAR_4/2;
  VAR_3->dma_addr1 = VAR_6 + VAR_4/2;
  VAR_3->size = VAR_4/2;
  return 0;
 }
 return -VAR_1;
}
