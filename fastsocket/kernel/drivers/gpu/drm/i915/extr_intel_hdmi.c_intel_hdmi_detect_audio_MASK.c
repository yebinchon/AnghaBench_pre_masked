
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_hdmi {int ddc_bus; } ;
struct edid {int input; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct edid*) ;
 struct edid* FUNC_1 (struct drm_connector*,int ) ;
 struct intel_hdmi* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (struct edid*) ;

__attribute__((used)) static bool
FUNC_5(struct drm_connector *VAR_1)
{
 struct intel_hdmi *VAR_2 = FUNC_2(VAR_1);
 struct drm_i915_private *VAR_3 = VAR_1->dev->dev_private;
 struct edid *VAR_4;
 bool VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_1,
       FUNC_3(VAR_3,
          VAR_2->ddc_bus));
 if (VAR_4) {
  if (VAR_4->input & VAR_0)
   VAR_5 = FUNC_0(VAR_4);
  FUNC_4(VAR_4);
 }

 return VAR_5;
}
