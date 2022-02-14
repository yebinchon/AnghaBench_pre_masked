
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intel_hdmi {int sdvox_reg; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 struct drm_device* FUNC_3 (struct intel_hdmi*) ;

__attribute__((used)) static void
FUNC_4(struct intel_hdmi *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_3(VAR_2);
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 uint32_t VAR_5;

 VAR_5 = FUNC_0(VAR_3) ? VAR_0 : VAR_1;

 FUNC_2(FUNC_1(VAR_2->sdvox_reg) & VAR_5,
      "HDMI port enabled, expecting disabled\n");
}
