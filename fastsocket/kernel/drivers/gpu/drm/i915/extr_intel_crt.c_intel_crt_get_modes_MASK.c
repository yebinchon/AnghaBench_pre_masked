
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct drm_i915_private {int crt_ddc_pin; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_connector*,struct i2c_adapter*) ;
 struct i2c_adapter* FUNC_2 (struct drm_i915_private*,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 int VAR_4;
 struct i2c_adapter *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_3->crt_ddc_pin);
 VAR_4 = FUNC_1(VAR_1, VAR_5);
 if (VAR_4 || !FUNC_0(VAR_2))
  return VAR_4;


 VAR_5 = FUNC_2(VAR_3, VAR_0);
 return FUNC_1(VAR_1, VAR_5);
}
