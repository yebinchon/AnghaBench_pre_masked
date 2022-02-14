
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* force_wake_put ) (struct drm_i915_private*) ;} ;
struct drm_i915_private {scalar_t__ forcewake_count; int gt_lock; TYPE_1__ gt; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct drm_i915_private*) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->gt_lock, VAR_1);
 if (--VAR_0->forcewake_count == 0)
  VAR_0->gt.force_wake_put(VAR_0);
 FUNC_1(&VAR_0->gt_lock, VAR_1);
}
