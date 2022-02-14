
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_hdmi {int ddc_bus; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 struct intel_hdmi* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,int ) ;
 int FUNC_2 (struct drm_i915_private*,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_0)
{
 struct intel_hdmi *VAR_1 = FUNC_0(VAR_0);
 struct drm_i915_private *VAR_2 = VAR_0->dev->dev_private;





 return FUNC_1(VAR_0,
       FUNC_2(VAR_2,
          VAR_1->ddc_bus));
}
