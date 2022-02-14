
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {int num_pch_pll; TYPE_1__* pch_plls; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_3__ {int fp1_reg; int fp0_reg; int pll_reg; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_0)
{
 drm_i915_private_t *VAR_1 = VAR_0->dev_private;
 int VAR_2;

 if (VAR_1->num_pch_pll == 0) {
  FUNC_0("No PCH PLLs on this hardware, skipping initialisation\n");
  return;
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pch_pll; VAR_2++) {
  VAR_1->pch_plls[VAR_2].pll_reg = FUNC_1(VAR_2);
  VAR_1->pch_plls[VAR_2].fp0_reg = FUNC_2(VAR_2);
  VAR_1->pch_plls[VAR_2].fp1_reg = FUNC_3(VAR_2);
 }
}
