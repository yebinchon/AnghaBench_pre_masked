
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 unsigned long FUNC_0 (struct drm_i915_private*) ;
 unsigned long FUNC_1 (struct drm_i915_private*) ;
 struct drm_i915_private* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

unsigned long FUNC_4(void)
{
 struct drm_i915_private *VAR_2;
 unsigned long VAR_3, VAR_4, VAR_5 = 0;

 FUNC_2(&VAR_1);
 if (!VAR_0)
  goto out_unlock;
 VAR_2 = VAR_0;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1(VAR_2);

 VAR_5 = VAR_3 + VAR_4;

out_unlock:
 FUNC_3(&VAR_1);

 return VAR_5;
}
