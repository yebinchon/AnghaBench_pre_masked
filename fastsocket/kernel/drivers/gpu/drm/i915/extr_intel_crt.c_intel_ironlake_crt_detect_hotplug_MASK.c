
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crt {int adpa_reg; scalar_t__ force_hotplug_required; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 struct intel_crt* FUNC_5 (struct drm_connector*) ;
 scalar_t__ FUNC_6 (int,int) ;

__attribute__((used)) static bool FUNC_7(struct drm_connector *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct intel_crt *VAR_5 = FUNC_5(VAR_3);
 struct drm_i915_private *VAR_6 = VAR_4->dev_private;
 u32 VAR_7;
 bool VAR_8;


 if (VAR_5->force_hotplug_required) {
  bool VAR_9 = FUNC_1(VAR_4);
  u32 VAR_10;

  VAR_5->force_hotplug_required = 0;

  VAR_10 = VAR_7 = FUNC_2(VAR_5->adpa_reg);
  FUNC_0("trigger hotplug detect cycle: adpa=0x%x\n", VAR_7);

  VAR_7 |= VAR_0;
  if (VAR_9)
   VAR_7 &= ~VAR_2;

  FUNC_3(VAR_5->adpa_reg, VAR_7);

  if (FUNC_6((FUNC_2(VAR_5->adpa_reg) & VAR_0) == 0,
        1000))
   FUNC_0("timed out waiting for FORCE_TRIGGER");

  if (VAR_9) {
   FUNC_3(VAR_5->adpa_reg, VAR_10);
   FUNC_4(VAR_5->adpa_reg);
  }
 }


 VAR_7 = FUNC_2(VAR_5->adpa_reg);
 if ((VAR_7 & VAR_1) != 0)
  VAR_8 = 1;
 else
  VAR_8 = 0;
 FUNC_0("ironlake hotplug adpa=0x%x, result %d\n", VAR_7, VAR_8);

 return VAR_8;
}
