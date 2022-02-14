
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crt {int force_hotplug_required; int adpa_reg; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 struct intel_crt* FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_6(struct drm_connector *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 struct intel_crt *VAR_5 = FUNC_5(VAR_2);

 if (FUNC_1(VAR_3)) {
  u32 VAR_6;

  VAR_6 = FUNC_2(VAR_5->adpa_reg);
  VAR_6 &= ~VAR_0;
  VAR_6 |= VAR_1;
  FUNC_3(VAR_5->adpa_reg, VAR_6);
  FUNC_4(VAR_5->adpa_reg);

  FUNC_0("pch crt adpa set to 0x%x\n", VAR_6);
  VAR_5->force_hotplug_required = 1;
 }

}
