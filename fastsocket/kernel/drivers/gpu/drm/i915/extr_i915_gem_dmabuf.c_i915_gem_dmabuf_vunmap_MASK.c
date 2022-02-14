
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct drm_i915_gem_object {scalar_t__ vmapping_count; int * dma_buf_vmapping; TYPE_1__ base; } ;
struct drm_device {int struct_mutex; } ;
struct dma_buf {struct drm_i915_gem_object* priv; } ;


 int FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dma_buf *VAR_0, void *VAR_1)
{
 struct drm_i915_gem_object *VAR_2 = VAR_0->priv;
 struct drm_device *VAR_3 = VAR_2->base.dev;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return;

 if (--VAR_2->vmapping_count == 0) {
  FUNC_3(VAR_2->dma_buf_vmapping);
  VAR_2->dma_buf_vmapping = ((void*)0);

  FUNC_0(VAR_2);
 }
 FUNC_2(&VAR_3->struct_mutex);
}
