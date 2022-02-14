
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ base; } ;
struct intel_crt {TYPE_3__ base; } ;
struct i2c_adapter {int dummy; } ;
struct edid {int input; } ;
struct drm_i915_private {int crt_ddc_pin; } ;
struct drm_connector {int dummy; } ;
struct TYPE_4__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct intel_crt* FUNC_2 (struct drm_connector*) ;
 struct edid* FUNC_3 (struct drm_connector*,struct i2c_adapter*) ;
 struct i2c_adapter* FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct edid*) ;

__attribute__((used)) static bool FUNC_6(struct drm_connector *VAR_2)
{
 struct intel_crt *VAR_3 = FUNC_2(VAR_2);
 struct drm_i915_private *VAR_4 = VAR_3->base.base.dev->dev_private;
 struct edid *VAR_5;
 struct i2c_adapter *VAR_6;

 FUNC_0(VAR_3->base.type != VAR_1);

 VAR_6 = FUNC_4(VAR_4, VAR_4->crt_ddc_pin);
 VAR_5 = FUNC_3(VAR_2, VAR_6);

 if (VAR_5) {
  bool VAR_7 = VAR_5->input & VAR_0;






  if (!VAR_7) {
   FUNC_1("CRT detected via DDC:0x50 [EDID]\n");
   return 1;
  }

  FUNC_1("CRT not detected via DDC:0x50 [EDID reports a digital panel]\n");
 } else {
  FUNC_1("CRT not detected via DDC:0x50 [no valid EDID found]\n");
 }

 FUNC_5(VAR_5);

 return 0;
}
