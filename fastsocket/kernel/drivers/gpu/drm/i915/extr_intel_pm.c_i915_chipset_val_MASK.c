
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {TYPE_1__* info; } ;
struct TYPE_2__ {int gen; } ;


 unsigned long FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

unsigned long FUNC_3(struct drm_i915_private *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->info->gen != 5)
  return 0;

 FUNC_1(&VAR_0);

 VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_0);

 return VAR_2;
}
