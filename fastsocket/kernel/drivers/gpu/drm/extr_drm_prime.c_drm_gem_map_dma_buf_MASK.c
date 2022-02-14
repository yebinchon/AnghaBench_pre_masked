
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct drm_gem_object {TYPE_3__* dev; } ;
struct dma_buf_attachment {int dev; TYPE_1__* dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {int struct_mutex; TYPE_2__* driver; } ;
struct TYPE_5__ {struct sg_table* (* gem_prime_get_sg_table ) (struct drm_gem_object*) ;} ;
struct TYPE_4__ {struct drm_gem_object* priv; } ;


 int FUNC_0 (struct sg_table*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sg_table* FUNC_4 (struct drm_gem_object*) ;

__attribute__((used)) static struct sg_table *FUNC_5(struct dma_buf_attachment *VAR_0,
  enum dma_data_direction VAR_1)
{
 struct drm_gem_object *VAR_2 = VAR_0->dmabuf->priv;
 struct sg_table *VAR_3;

 FUNC_2(&VAR_2->dev->struct_mutex);

 VAR_3 = VAR_2->dev->driver->gem_prime_get_sg_table(VAR_2);

 if (!FUNC_0(VAR_3))
  FUNC_1(VAR_0->dev, VAR_3->sgl, VAR_3->nents, VAR_1);

 FUNC_3(&VAR_2->dev->struct_mutex);
 return VAR_3;
}
