
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buf {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* vunmap ) (struct dma_buf*,void*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dma_buf*,void*) ;

void FUNC_2(struct dma_buf *VAR_0, void *VAR_1)
{
 if (FUNC_0(!VAR_0))
  return;

 if (VAR_0->ops->vunmap)
  VAR_0->ops->vunmap(VAR_0, VAR_1);
}
