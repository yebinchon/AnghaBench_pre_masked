
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_delay; scalar_t__ fmax; } ;
struct drm_i915_private {TYPE_1__ ips; } ;


 struct drm_i915_private* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(void)
{
 struct drm_i915_private *VAR_2;
 bool VAR_3 = 1;

 FUNC_0(&VAR_1);
 if (!VAR_0) {
  VAR_3 = 0;
  goto out_unlock;
 }
 VAR_2 = VAR_0;

 if (VAR_2->ips.max_delay > VAR_2->ips.fmax)
  VAR_2->ips.max_delay--;

out_unlock:
 FUNC_1(&VAR_1);

 return VAR_3;
}
