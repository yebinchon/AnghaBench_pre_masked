
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int gpu_error; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->gpu_error);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(&VAR_0->struct_mutex);
 if (VAR_2)
  return VAR_2;

 FUNC_0(FUNC_2(VAR_0));
 return 0;
}
