
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_hw_context {int id; } ;
struct drm_i915_private {scalar_t__ hw_contexts_disabled; } ;
struct drm_i915_gem_context_create {int ctx_id; } ;
struct drm_i915_file_private {int dummy; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct drm_device {int struct_mutex; TYPE_1__* driver; struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int driver_features; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct i915_hw_context*) ;
 int FUNC_2 (struct i915_hw_context*) ;
 struct i915_hw_context* FUNC_3 (struct drm_device*,struct drm_i915_file_private*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_device *VAR_2, void *VAR_3,
      struct drm_file *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_2->dev_private;
 struct drm_i915_gem_context_create *VAR_6 = VAR_3;
 struct drm_i915_file_private *VAR_7 = VAR_4->driver_priv;
 struct i915_hw_context *VAR_8;
 int VAR_9;

 if (!(VAR_2->driver->driver_features & VAR_0))
  return -VAR_1;

 if (VAR_5->hw_contexts_disabled)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_2);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_3(VAR_2, VAR_7);
 FUNC_5(&VAR_2->struct_mutex);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_6->ctx_id = VAR_8->id;
 FUNC_0("HW context %d created\n", VAR_6->ctx_id);

 return 0;
}
