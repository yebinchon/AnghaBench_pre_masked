
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct intel_encoder *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->base.dev;
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;

 FUNC_1(VAR_0, FUNC_0(VAR_0) | VAR_1);
}
