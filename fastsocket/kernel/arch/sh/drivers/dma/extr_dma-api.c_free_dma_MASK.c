
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_info {TYPE_1__* ops; } ;
struct dma_channel {int busy; } ;
struct TYPE_2__ {int (* free ) (struct dma_channel*) ;} ;


 int FUNC_0 (int *,int ) ;
 struct dma_channel* FUNC_1 (unsigned int) ;
 struct dma_info* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct dma_channel*) ;

void FUNC_4(unsigned int VAR_0)
{
 struct dma_info *VAR_1 = FUNC_2(VAR_0);
 struct dma_channel *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1->ops->free)
  VAR_1->ops->free(VAR_2);

 FUNC_0(&VAR_2->busy, 0);
}
