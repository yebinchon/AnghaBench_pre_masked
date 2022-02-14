
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buf {TYPE_1__* ops; } ;
struct TYPE_2__ {void* (* vmap ) (struct dma_buf*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (struct dma_buf*) ;

void *FUNC_2(struct dma_buf *VAR_0)
{
 if (FUNC_0(!VAR_0))
  return ((void*)0);

 if (VAR_0->ops->vmap)
  return VAR_0->ops->vmap(VAR_0);
 return ((void*)0);
}
