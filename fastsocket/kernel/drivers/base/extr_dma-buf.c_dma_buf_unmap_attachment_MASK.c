
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct dma_buf_attachment {TYPE_2__* dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* unmap_dma_buf ) (struct dma_buf_attachment*,struct sg_table*,int) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dma_buf_attachment*,struct sg_table*,int) ;

void FUNC_2(struct dma_buf_attachment *VAR_0,
    struct sg_table *VAR_1,
    enum dma_data_direction VAR_2)
{
 if (FUNC_0(!VAR_0 || !VAR_0->dmabuf || !VAR_1))
  return;

 VAR_0->dmabuf->ops->unmap_dma_buf(VAR_0, VAR_1,
      VAR_2);
}
