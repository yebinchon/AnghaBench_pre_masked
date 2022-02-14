
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gtt_mtrr; } ;
struct drm_i915_private {TYPE_1__ mm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long,unsigned long,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct drm_i915_private *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4)
{
 VAR_2->mm.gtt_mtrr = -1;
 VAR_2->mm.gtt_mtrr = FUNC_1(VAR_3, VAR_4, VAR_0, 1);
 if (VAR_2->mm.gtt_mtrr < 0) {
  FUNC_0("MTRR allocation failed.  Graphics "
    "performance may suffer.\n");
 }
}
