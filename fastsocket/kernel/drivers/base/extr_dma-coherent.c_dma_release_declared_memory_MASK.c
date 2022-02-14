
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {struct dma_coherent_mem* bitmap; int virt_base; } ;
struct device {struct dma_coherent_mem* dma_mem; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dma_coherent_mem*) ;

void FUNC_2(struct device *VAR_0)
{
 struct dma_coherent_mem *VAR_1 = VAR_0->dma_mem;

 if (!VAR_1)
  return;
 VAR_0->dma_mem = ((void*)0);
 FUNC_0(VAR_1->virt_base);
 FUNC_1(VAR_1->bitmap);
 FUNC_1(VAR_1);
}
