
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {TYPE_1__* info; } ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_i915_private *VAR_1)
{
 if (VAR_1->info->gen != 5)
  return;

 FUNC_1(&VAR_0);

 FUNC_0(VAR_1);

 FUNC_2(&VAR_0);
}
