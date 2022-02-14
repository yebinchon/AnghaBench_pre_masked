
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int hw_contexts_disabled; int hw_context_size; TYPE_1__* ring; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {scalar_t__ default_context; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;

 if (!FUNC_1(VAR_1)) {
  VAR_2->hw_contexts_disabled = 1;
  return;
 }


 if (VAR_2->hw_contexts_disabled ||
     VAR_2->ring[VAR_0].default_context)
  return;

 VAR_2->hw_context_size = FUNC_4(FUNC_3(VAR_1), 4096);

 if (VAR_2->hw_context_size > (1<<20)) {
  VAR_2->hw_contexts_disabled = 1;
  return;
 }

 if (FUNC_2(VAR_2)) {
  VAR_2->hw_contexts_disabled = 1;
  return;
 }

 FUNC_0("HW context support initialized\n");
}
