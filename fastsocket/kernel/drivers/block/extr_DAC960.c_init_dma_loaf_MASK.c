
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct dma_loaf {size_t length; int dma_base; int dma_free; void* cpu_base; void* cpu_free; } ;
typedef int dma_addr_t ;


 int FUNC_0 (void*,int ,size_t) ;
 void* FUNC_1 (struct pci_dev*,size_t,int *) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_0, struct dma_loaf *VAR_1,
         size_t VAR_2)
{
 void *VAR_3;
 dma_addr_t VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_2, &VAR_4);
 if (VAR_3 == ((void*)0))
  return 0;

 VAR_1->cpu_free = VAR_1->cpu_base = VAR_3;
 VAR_1->dma_free =VAR_1->dma_base = VAR_4;
 VAR_1->length = VAR_2;
 FUNC_0(VAR_3, 0, VAR_2);
 return 1;
}
