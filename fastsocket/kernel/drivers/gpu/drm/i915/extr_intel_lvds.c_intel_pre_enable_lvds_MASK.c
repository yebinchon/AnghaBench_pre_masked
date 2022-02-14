
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_lvds_encoder {int pfit_control; int pfit_pgm_ratios; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct intel_lvds_encoder* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->base.dev;
 struct intel_lvds_encoder *VAR_4 = FUNC_3(&VAR_2->base);
 struct drm_i915_private *VAR_5 = VAR_3->dev_private;

 if (FUNC_1(VAR_3) || !VAR_4->pfit_control)
  return;







 FUNC_0("applying panel-fitter: %x, %x\n",
        VAR_4->pfit_control,
        VAR_4->pfit_pgm_ratios);

 FUNC_2(VAR_1, VAR_4->pfit_pgm_ratios);
 FUNC_2(VAR_0, VAR_4->pfit_control);
}
