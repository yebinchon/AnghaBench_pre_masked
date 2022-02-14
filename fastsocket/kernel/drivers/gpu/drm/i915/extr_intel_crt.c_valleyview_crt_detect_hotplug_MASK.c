
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crt {int adpa_reg; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct intel_crt* FUNC_3 (struct drm_connector*) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static bool FUNC_5(struct drm_connector *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct intel_crt *VAR_4 = FUNC_3(VAR_2);
 struct drm_i915_private *VAR_5 = VAR_3->dev_private;
 u32 VAR_6;
 bool VAR_7;
 u32 VAR_8;

 VAR_8 = VAR_6 = FUNC_1(VAR_4->adpa_reg);
 FUNC_0("trigger hotplug detect cycle: adpa=0x%x\n", VAR_6);

 VAR_6 |= VAR_0;

 FUNC_2(VAR_4->adpa_reg, VAR_6);

 if (FUNC_4((FUNC_1(VAR_4->adpa_reg) & VAR_0) == 0,
       1000)) {
  FUNC_0("timed out waiting for FORCE_TRIGGER");
  FUNC_2(VAR_4->adpa_reg, VAR_8);
 }


 VAR_6 = FUNC_1(VAR_4->adpa_reg);
 if ((VAR_6 & VAR_1) != 0)
  VAR_7 = 1;
 else
  VAR_7 = 0;

 FUNC_0("valleyview hotplug adpa=0x%x, result %d\n", VAR_6, VAR_7);


 VAR_7 = 1;

 return VAR_7;
}
