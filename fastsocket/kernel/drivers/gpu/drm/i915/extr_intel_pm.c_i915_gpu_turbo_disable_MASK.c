
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fstart; int max_delay; } ;
struct drm_i915_private {TYPE_1__ ips; int dev; } ;


 struct drm_i915_private* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(void)
{
 struct drm_i915_private *VAR_2;
 bool VAR_3 = 1;

 FUNC_1(&VAR_1);
 if (!VAR_0) {
  VAR_3 = 0;
  goto out_unlock;
 }
 VAR_2 = VAR_0;

 VAR_2->ips.max_delay = VAR_2->ips.fstart;

 if (!FUNC_0(VAR_2->dev, VAR_2->ips.fstart))
  VAR_3 = 0;

out_unlock:
 FUNC_2(&VAR_1);

 return VAR_3;
}
