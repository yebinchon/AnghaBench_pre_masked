
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct intel_sdvo {int sdvo_reg; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (struct intel_sdvo*,scalar_t__*) ;
 struct intel_sdvo* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_6(struct intel_encoder *VAR_1,
        enum pipe *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->base.dev;
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 struct intel_sdvo *VAR_5 = FUNC_5(&VAR_1->base);
 u16 VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_5->sdvo_reg);
 FUNC_4(VAR_5, &VAR_6);

 if (!(VAR_7 & VAR_0) && (VAR_6 == 0))
  return 0;

 if (FUNC_0(VAR_3))
  *VAR_2 = FUNC_3(VAR_7);
 else
  *VAR_2 = FUNC_2(VAR_7);

 return 1;
}
