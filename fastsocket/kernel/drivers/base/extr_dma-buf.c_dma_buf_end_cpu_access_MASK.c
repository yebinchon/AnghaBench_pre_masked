
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buf {TYPE_1__* ops; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int (* end_cpu_access ) (struct dma_buf*,size_t,size_t,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dma_buf*,size_t,size_t,int) ;

void FUNC_2(struct dma_buf *VAR_0, size_t VAR_1, size_t VAR_2,
       enum dma_data_direction VAR_3)
{
 FUNC_0(!VAR_0);

 if (VAR_0->ops->end_cpu_access)
  VAR_0->ops->end_cpu_access(VAR_0, VAR_1, VAR_2, VAR_3);
}
