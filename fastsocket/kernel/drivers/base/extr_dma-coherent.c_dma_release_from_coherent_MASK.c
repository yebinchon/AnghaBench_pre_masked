
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {void* virt_base; int size; int bitmap; } ;
struct device {struct dma_coherent_mem* dma_mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;

int FUNC_1(struct device *VAR_1, int VAR_2, void *VAR_3)
{
 struct dma_coherent_mem *VAR_4 = VAR_1 ? VAR_1->dma_mem : ((void*)0);

 if (VAR_4 && VAR_3 >= VAR_4->virt_base && VAR_3 <
     (VAR_4->virt_base + (VAR_4->size << VAR_0))) {
  int VAR_5 = (VAR_3 - VAR_4->virt_base) >> VAR_0;

  FUNC_0(VAR_4->bitmap, VAR_5, VAR_2);
  return 1;
 }
 return 0;
}
