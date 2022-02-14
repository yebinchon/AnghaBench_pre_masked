
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct dma_loaf {int dma_base; int * cpu_base; int length; } ;


 int FUNC_0 (struct pci_dev*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0, struct dma_loaf *VAR_1)
{
 if (VAR_1->cpu_base != ((void*)0))
  FUNC_0(VAR_0, VAR_1->length,
   VAR_1->cpu_base, VAR_1->dma_base);
}
