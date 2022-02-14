
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {struct dma_buf_attachment* import_attach; struct drm_device* dev; } ;
struct drm_i915_gem_object {struct drm_gem_object base; } ;
struct drm_device {int dev; } ;
struct dma_buf_attachment {int dummy; } ;
struct dma_buf {int size; struct drm_i915_gem_object* priv; int * ops; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct dma_buf_attachment*) ;
 struct drm_gem_object* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dma_buf_attachment*) ;
 struct dma_buf_attachment* FUNC_3 (struct dma_buf*,int ) ;
 int FUNC_4 (struct dma_buf*,struct dma_buf_attachment*) ;
 int FUNC_5 (struct dma_buf*) ;
 int FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (struct drm_device*,struct drm_gem_object*,int ) ;
 int FUNC_8 (struct dma_buf*) ;
 int VAR_1 ;
 struct drm_i915_gem_object* FUNC_9 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_10 (struct drm_i915_gem_object*) ;
 int FUNC_11 (struct drm_i915_gem_object*,int *) ;

struct drm_gem_object *FUNC_12(struct drm_device *VAR_3,
          struct dma_buf *VAR_4)
{
 struct dma_buf_attachment *VAR_5;
 struct drm_i915_gem_object *VAR_6;
 int VAR_7;


 if (VAR_4->ops == &VAR_1) {
  VAR_6 = VAR_4->priv;

  if (VAR_6->base.dev == VAR_3) {




   FUNC_6(&VAR_6->base);
   return &VAR_6->base;
  }
 }


 VAR_5 = FUNC_3(VAR_4, VAR_3->dev);
 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 FUNC_8(VAR_4);

 VAR_6 = FUNC_9(VAR_3);
 if (VAR_6 == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto fail_detach;
 }

 VAR_7 = FUNC_7(VAR_3, &VAR_6->base, VAR_4->size);
 if (VAR_7) {
  FUNC_10(VAR_6);
  goto fail_detach;
 }

 FUNC_11(VAR_6, &VAR_2);
 VAR_6->base.import_attach = VAR_5;

 return &VAR_6->base;

fail_detach:
 FUNC_4(VAR_4, VAR_5);
 FUNC_5(VAR_4);

 return FUNC_1(VAR_7);
}
