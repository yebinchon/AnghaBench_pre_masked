
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {int size; int flags; void* virt_base; scalar_t__ device_base; int bitmap; } ;
struct device {struct dma_coherent_mem* dma_mem; } ;
typedef int ssize_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct device *VAR_2, ssize_t VAR_3,
           dma_addr_t *VAR_4, void **VAR_5)
{
 struct dma_coherent_mem *VAR_6;
 int VAR_7 = FUNC_1(VAR_3);
 int VAR_8;

 if (!VAR_2)
  return 0;
 VAR_6 = VAR_2->dma_mem;
 if (!VAR_6)
  return 0;

 *VAR_5 = ((void*)0);

 if (FUNC_3(VAR_3 > (VAR_6->size << VAR_1)))
  goto err;

 VAR_8 = FUNC_0(VAR_6->bitmap, VAR_6->size, VAR_7);
 if (FUNC_3(VAR_8 < 0))
  goto err;




 *VAR_4 = VAR_6->device_base + (VAR_8 << VAR_1);
 *VAR_5 = VAR_6->virt_base + (VAR_8 << VAR_1);
 FUNC_2(*VAR_5, 0, VAR_3);

 return 1;

err:





 return VAR_6->flags & VAR_0;
}
