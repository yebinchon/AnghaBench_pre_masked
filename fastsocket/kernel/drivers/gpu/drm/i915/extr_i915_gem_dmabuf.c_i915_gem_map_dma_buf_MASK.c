
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sg_table {int nents; struct scatterlist* sgl; } ;
struct scatterlist {int dummy; } ;
struct TYPE_7__ {TYPE_4__* dev; } ;
struct drm_i915_gem_object {TYPE_3__ base; TYPE_2__* pages; } ;
struct dma_buf_attachment {int dev; TYPE_1__* dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_8__ {int struct_mutex; } ;
struct TYPE_6__ {int nents; struct scatterlist* sgl; } ;
struct TYPE_5__ {struct drm_i915_gem_object* priv; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct scatterlist*,int ,int) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct sg_table*) ;
 struct sg_table* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sg_table*,int,int ) ;
 int FUNC_9 (struct sg_table*) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;
 int FUNC_11 (struct scatterlist*) ;
 int FUNC_12 (struct scatterlist*,int ,int ,int ) ;

__attribute__((used)) static struct sg_table *FUNC_13(struct dma_buf_attachment *VAR_3,
          enum dma_data_direction VAR_4)
{
 struct drm_i915_gem_object *VAR_5 = VAR_3->dmabuf->priv;
 struct sg_table *VAR_6;
 struct scatterlist *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_4(VAR_5->base.dev);
 if (VAR_9)
  return FUNC_0(VAR_9);

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9) {
  VAR_6 = FUNC_0(VAR_9);
  goto out;
 }


 VAR_6 = FUNC_6(sizeof(struct sg_table), VAR_1);
 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_9 = FUNC_8(VAR_6, VAR_5->pages->nents, VAR_1);
 if (VAR_9) {
  FUNC_5(VAR_6);
  VAR_6 = FUNC_0(VAR_9);
  goto out;
 }

 VAR_7 = VAR_5->pages->sgl;
 VAR_8 = VAR_6->sgl;
 for (VAR_10 = 0; VAR_10 < VAR_5->pages->nents; VAR_10++) {
  FUNC_12(VAR_8, FUNC_11(VAR_7), VAR_2, 0);
  VAR_8 = FUNC_10(VAR_8);
  VAR_7 = FUNC_10(VAR_7);
 }

 if (!FUNC_1(VAR_3->dev, VAR_6->sgl, VAR_6->nents, VAR_4)) {
  FUNC_9(VAR_6);
  FUNC_5(VAR_6);
  VAR_6 = FUNC_0(-VAR_0);
  goto out;
 }

 FUNC_3(VAR_5);

out:
 FUNC_7(&VAR_5->base.dev->struct_mutex);
 return VAR_6;
}
