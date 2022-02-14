
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
struct TYPE_3__ {struct sg_table* (* map_dma_buf ) (struct dma_buf_attachment*,int) ;} ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 struct sg_table* FUNC_3 (struct dma_buf_attachment*,int) ;

struct sg_table *FUNC_4(struct dma_buf_attachment *VAR_1,
     enum dma_data_direction VAR_2)
{
 struct sg_table *VAR_3 = FUNC_0(-VAR_0);

 FUNC_2();

 if (FUNC_1(!VAR_1 || !VAR_1->dmabuf))
  return FUNC_0(-VAR_0);

 VAR_3 = VAR_1->dmabuf->ops->map_dma_buf(VAR_1, VAR_2);

 return VAR_3;
}
