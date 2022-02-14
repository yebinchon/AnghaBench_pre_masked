
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buf {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* kunmap ) (struct dma_buf*,unsigned long,void*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dma_buf*,unsigned long,void*) ;

void FUNC_2(struct dma_buf *VAR_0, unsigned long VAR_1,
      void *VAR_2)
{
 FUNC_0(!VAR_0);

 if (VAR_0->ops->kunmap)
  VAR_0->ops->kunmap(VAR_0, VAR_1, VAR_2);
}
