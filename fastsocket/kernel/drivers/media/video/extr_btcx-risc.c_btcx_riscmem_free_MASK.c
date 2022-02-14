
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct btcx_riscmem {scalar_t__ dma; int * cpu; int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btcx_riscmem*,int ,int) ;
 int FUNC_1 (struct pci_dev*,int ,int *,scalar_t__) ;
 int FUNC_2 (char*,int ,unsigned long) ;

void FUNC_3(struct pci_dev *VAR_2,
         struct btcx_riscmem *VAR_3)
{
 if (((void*)0) == VAR_3->cpu)
  return;
 if (VAR_0) {
  VAR_1--;
  FUNC_2("btcx: riscmem free [%d] dma=%lx\n",
         VAR_1, (unsigned long)VAR_3->dma);
 }
 FUNC_1(VAR_2, VAR_3->size, VAR_3->cpu, VAR_3->dma);
 FUNC_0(VAR_3,0,sizeof(*VAR_3));
}
