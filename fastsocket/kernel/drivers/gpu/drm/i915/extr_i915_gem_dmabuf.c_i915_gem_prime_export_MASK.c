
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {int dummy; } ;
struct dma_buf {int dummy; } ;


 struct dma_buf* FUNC_0 (struct drm_i915_gem_object*,int *,int ,int) ;
 int VAR_0 ;
 struct drm_i915_gem_object* FUNC_1 (struct drm_gem_object*) ;

struct dma_buf *FUNC_2(struct drm_device *VAR_1,
          struct drm_gem_object *VAR_2, int VAR_3)
{
 struct drm_i915_gem_object *VAR_4 = FUNC_1(VAR_2);

 return FUNC_0(VAR_4, &VAR_0, VAR_4->base.size, VAR_3);
}
