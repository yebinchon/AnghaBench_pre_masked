
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ring_buffer {struct i915_hw_context* default_context; TYPE_1__* dev; } ;
struct i915_hw_context {int dummy; } ;
struct drm_i915_private {struct intel_ring_buffer* ring; scalar_t__ hw_contexts_disabled; } ;
struct drm_file {int driver_priv; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct i915_hw_context*) ;
 struct i915_hw_context* FUNC_1 (int ,int) ;

int FUNC_2(struct intel_ring_buffer *VAR_4,
   struct drm_file *VAR_5,
   int VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_4->dev->dev_private;
 struct i915_hw_context *VAR_8;

 if (VAR_7->hw_contexts_disabled)
  return 0;

 if (VAR_4 != &VAR_7->ring[VAR_3])
  return 0;

 if (VAR_6 == VAR_0) {
  VAR_8 = VAR_4->default_context;
 } else {
  if (VAR_5 == ((void*)0))
   return -VAR_1;

  VAR_8 = FUNC_1(VAR_5->driver_priv, VAR_6);
  if (VAR_8 == ((void*)0))
   return -VAR_2;
 }

 return FUNC_0(VAR_8);
}
