
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct pci_dev *VAR_0, void **VAR_1,
 dma_addr_t *VAR_2, u32 *VAR_3,
 u32 *VAR_4, u32 VAR_5, u32 VAR_6)
{
 caddr_t VAR_7;
 dma_addr_t VAR_8;
 u64 VAR_9;
 u64 VAR_10 = 0;
 if (VAR_6)
  VAR_10 = (dma_addr_t)VAR_6 - 1;
 VAR_7 =
  FUNC_2(VAR_0, VAR_5 + VAR_6, &VAR_8);
 if (!VAR_7) {
  FUNC_3("memory allocation error\n");
  return -1;
 }
 FUNC_1((void *)VAR_7, 0, VAR_5+VAR_6);
 *VAR_2 = VAR_8;
 VAR_9 = (*VAR_2 + VAR_10) & ~VAR_10;
 *VAR_1 = (void *)VAR_7 + VAR_9 - *VAR_2;
 *VAR_3 = FUNC_4(VAR_9);
 *VAR_4 = FUNC_0(VAR_9);
 return 0;
}
