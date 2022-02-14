
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct btcx_riscmem {unsigned int size; int * cpu; scalar_t__ dma; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,struct btcx_riscmem*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int * FUNC_2 (struct pci_dev*,unsigned int,scalar_t__*) ;
 int FUNC_3 (char*,int ,unsigned long,int *,unsigned int) ;

int FUNC_4(struct pci_dev *VAR_3,
         struct btcx_riscmem *VAR_4,
         unsigned int VAR_5)
{
 __le32 *VAR_6;
 dma_addr_t VAR_7 = 0;

 if (((void*)0) != VAR_4->cpu && VAR_4->size < VAR_5)
  FUNC_0(VAR_3,VAR_4);
 if (((void*)0) == VAR_4->cpu) {
  VAR_6 = FUNC_2(VAR_3, VAR_5, &VAR_7);
  if (((void*)0) == VAR_6)
   return -VAR_0;
  VAR_4->cpu = VAR_6;
  VAR_4->dma = VAR_7;
  VAR_4->size = VAR_5;
  if (VAR_1) {
   VAR_2++;
   FUNC_3("btcx: riscmem alloc [%d] dma=%lx cpu=%p size=%d\n",
          VAR_2, (unsigned long)VAR_7, VAR_6, VAR_5);
  }
 }
 FUNC_1(VAR_4->cpu,0,VAR_4->size);
 return 0;
}
