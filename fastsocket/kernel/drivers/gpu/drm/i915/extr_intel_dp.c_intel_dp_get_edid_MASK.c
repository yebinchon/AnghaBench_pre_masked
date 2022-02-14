
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct intel_connector {TYPE_1__* edid; } ;
struct i2c_adapter {int dummy; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_3__ {int extensions; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct edid* FUNC_1 (struct drm_connector*,struct i2c_adapter*) ;
 struct edid* FUNC_2 (int,int ) ;
 int FUNC_3 (struct edid*,TYPE_1__*,int) ;
 struct intel_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static struct edid *
FUNC_5(struct drm_connector *VAR_2, struct i2c_adapter *VAR_3)
{
 struct intel_connector *VAR_4 = FUNC_4(VAR_2);


 if (VAR_4->edid) {
  struct edid *VAR_5;
  int VAR_6;


  if (FUNC_0(VAR_4->edid))
   return ((void*)0);

  VAR_6 = (VAR_4->edid->extensions + 1) * VAR_0;
  VAR_5 = FUNC_2(VAR_6, VAR_1);
  if (!VAR_5)
   return ((void*)0);

  FUNC_3(VAR_5, VAR_4->edid, VAR_6);
  return VAR_5;
 }

 return FUNC_1(VAR_2, VAR_3);
}
