
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_hw_context {int dummy; } ;
struct drm_i915_gem_context_destroy {int ctx_id; } ;
struct drm_i915_file_private {int dummy; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct drm_device {int struct_mutex; TYPE_1__* driver; } ;
struct TYPE_2__ {int driver_features; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i915_hw_context*) ;
 struct i915_hw_context* FUNC_2 (struct drm_i915_file_private*,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_3, void *VAR_4,
       struct drm_file *VAR_5)
{
 struct drm_i915_gem_context_destroy *VAR_6 = VAR_4;
 struct drm_i915_file_private *VAR_7 = VAR_5->driver_priv;
 struct i915_hw_context *VAR_8;
 int VAR_9;

 if (!(VAR_3->driver->driver_features & VAR_0))
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_2(VAR_7, VAR_6->ctx_id);
 if (!VAR_8) {
  FUNC_4(&VAR_3->struct_mutex);
  return -VAR_2;
 }

 FUNC_1(VAR_8);

 FUNC_4(&VAR_3->struct_mutex);

 FUNC_0("HW context %d destroyed\n", VAR_6->ctx_id);
 return 0;
}
