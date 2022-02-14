
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int interruptible; } ;
struct TYPE_3__ {int do_idle_maps; } ;
struct drm_i915_private {int dev; TYPE_2__ mm; TYPE_1__ gtt; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct drm_i915_private *VAR_0)
{
 bool VAR_1 = VAR_0->mm.interruptible;

 if (FUNC_3(VAR_0->gtt.do_idle_maps)) {
  VAR_0->mm.interruptible = 0;
  if (FUNC_1(VAR_0->dev)) {
   FUNC_0("Couldn't idle GPU\n");

   FUNC_2(10);
  }
 }

 return VAR_1;
}
