
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_connector*,struct i2c_adapter*) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*) ;

struct edid *FUNC_2(struct drm_connector *VAR_0,
     struct i2c_adapter *VAR_1)
{
 struct edid *VAR_2 = ((void*)0);

 if (FUNC_1(VAR_1))
  VAR_2 = (struct edid *)FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}
