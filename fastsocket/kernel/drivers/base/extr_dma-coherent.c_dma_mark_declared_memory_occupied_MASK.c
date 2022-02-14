
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {size_t device_base; void* virt_base; int bitmap; } ;
struct device {struct dma_coherent_mem* dma_mem; } ;
typedef size_t dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (size_t) ;

void *FUNC_3(struct device *VAR_3,
     dma_addr_t VAR_4, size_t VAR_5)
{
 struct dma_coherent_mem *VAR_6 = VAR_3->dma_mem;
 int VAR_7, VAR_8;

 VAR_5 += VAR_4 & ~VAR_1;

 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = (VAR_4 - VAR_6->device_base) >> VAR_2;
 VAR_8 = FUNC_1(VAR_6->bitmap, VAR_7, FUNC_2(VAR_5));
 if (VAR_8 != 0)
  return FUNC_0(VAR_8);
 return VAR_6->virt_base + (VAR_7 << VAR_2);
}
