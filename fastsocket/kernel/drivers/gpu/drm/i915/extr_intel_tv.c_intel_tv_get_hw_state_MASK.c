
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_2(struct intel_encoder *VAR_2, enum pipe *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 u32 VAR_6 = FUNC_0(VAR_0);

 if (!(VAR_6 & VAR_1))
  return 0;

 *VAR_3 = FUNC_1(VAR_6);

 return 1;
}
