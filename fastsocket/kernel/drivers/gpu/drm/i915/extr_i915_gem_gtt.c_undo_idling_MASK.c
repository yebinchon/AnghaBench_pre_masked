
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int interruptible; } ;
struct TYPE_3__ {int do_idle_maps; } ;
struct drm_i915_private {TYPE_2__ mm; TYPE_1__ gtt; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_0, bool VAR_1)
{
 if (FUNC_0(VAR_0->gtt.do_idle_maps))
  VAR_0->mm.interruptible = VAR_1;
}
