
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crt {int adpa_reg; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct intel_crt* FUNC_4 (struct intel_encoder*) ;

__attribute__((used)) static bool FUNC_5(struct intel_encoder *VAR_1,
       enum pipe *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->base.dev;
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 struct intel_crt *VAR_5 = FUNC_4(VAR_1);
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->adpa_reg);

 if (!(VAR_6 & VAR_0))
  return 0;

 if (FUNC_0(VAR_3))
  *VAR_2 = FUNC_3(VAR_6);
 else
  *VAR_2 = FUNC_2(VAR_6);

 return 1;
}
