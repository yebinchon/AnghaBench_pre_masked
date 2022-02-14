
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_info {TYPE_1__* ops; } ;
struct dma_channel {int dummy; } ;
struct TYPE_2__ {int (* extend ) (struct dma_channel*,unsigned long,void*) ;} ;


 int VAR_0 ;
 struct dma_channel* FUNC_0 (unsigned int) ;
 struct dma_info* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct dma_channel*,unsigned long,void*) ;

int FUNC_3(unsigned int VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct dma_info *VAR_4 = FUNC_1(VAR_1);
 struct dma_channel *VAR_5 = FUNC_0(VAR_1);

 if (VAR_4->ops->extend)
  return VAR_4->ops->extend(VAR_5, VAR_2, VAR_3);

 return -VAR_0;
}
