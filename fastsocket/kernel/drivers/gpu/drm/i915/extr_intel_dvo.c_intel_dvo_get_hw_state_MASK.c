
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct TYPE_3__ {int dvo_reg; } ;
struct intel_dvo {TYPE_1__ dev; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct intel_dvo* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_3(struct intel_encoder *VAR_1,
       enum pipe *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->base.dev;
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 struct intel_dvo *VAR_5 = FUNC_2(&VAR_1->base);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5->dev.dvo_reg);

 if (!(VAR_6 & VAR_0))
  return 0;

 *VAR_2 = FUNC_1(VAR_6);

 return 1;
}
