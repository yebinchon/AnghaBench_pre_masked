
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {TYPE_1__* info; } ;
typedef enum plane { ____Placeholder_plane } plane ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct drm_i915_private *VAR_0,
          enum plane VAR_1)
{
 if (VAR_0->info->gen >= 4)
  FUNC_3(FUNC_1(VAR_1), FUNC_2(FUNC_1(VAR_1)));
 else
  FUNC_3(FUNC_0(VAR_1), FUNC_2(FUNC_0(VAR_1)));
}
