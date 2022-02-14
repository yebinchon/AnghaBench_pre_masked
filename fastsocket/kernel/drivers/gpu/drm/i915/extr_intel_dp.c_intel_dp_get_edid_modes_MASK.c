
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_connector {scalar_t__ edid; } ;
struct i2c_adapter {int dummy; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_connector*,scalar_t__) ;
 int FUNC_2 (struct drm_connector*,struct i2c_adapter*) ;
 struct intel_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_4(struct drm_connector *VAR_0, struct i2c_adapter *VAR_1)
{
 struct intel_connector *VAR_2 = FUNC_3(VAR_0);


 if (VAR_2->edid) {

  if (FUNC_0(VAR_2->edid))
   return 0;

  return FUNC_1(VAR_0,
          VAR_2->edid);
 }

 return FUNC_2(VAR_0, VAR_1);
}
