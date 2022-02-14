
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct intel_crt* FUNC_2 (struct intel_encoder*) ;

__attribute__((used)) static void FUNC_3(struct intel_encoder *VAR_3, int VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->base.dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 struct intel_crt *VAR_7 = FUNC_2(VAR_3);
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7->adpa_reg);
 VAR_8 &= ~(VAR_1 | VAR_2);
 VAR_8 &= ~VAR_0;

 switch (VAR_4) {
 case 130:
  VAR_8 |= VAR_0;
  break;
 case 129:
  VAR_8 |= VAR_0 | VAR_1;
  break;
 case 128:
  VAR_8 |= VAR_0 | VAR_2;
  break;
 case 131:
  VAR_8 |= VAR_1 | VAR_2;
  break;
 }

 FUNC_1(VAR_7->adpa_reg, VAR_8);
}
