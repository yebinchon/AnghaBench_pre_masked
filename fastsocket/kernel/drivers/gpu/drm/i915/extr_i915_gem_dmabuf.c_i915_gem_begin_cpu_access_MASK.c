
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct drm_device {int struct_mutex; } ;
struct dma_buf {struct drm_i915_gem_object* priv; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_gem_object*,int) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dma_buf *VAR_2, size_t VAR_3, size_t VAR_4, enum dma_data_direction VAR_5)
{
 struct drm_i915_gem_object *VAR_6 = VAR_2->priv;
 struct drm_device *VAR_7 = VAR_6->base.dev;
 int VAR_8;
 bool VAR_9 = (VAR_5 == VAR_0 || VAR_5 == VAR_1);

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_9);
 FUNC_2(&VAR_7->struct_mutex);
 return VAR_8;
}
