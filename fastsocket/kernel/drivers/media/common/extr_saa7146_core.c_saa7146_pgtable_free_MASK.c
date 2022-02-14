
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_pgtable {int * cpu; int dma; int size; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int ,int *,int ) ;

void FUNC_1(struct pci_dev *VAR_0, struct saa7146_pgtable *VAR_1)
{
 if (((void*)0) == VAR_1->cpu)
  return;
 FUNC_0(VAR_0, VAR_1->size, VAR_1->cpu, VAR_1->dma);
 VAR_1->cpu = ((void*)0);
}
