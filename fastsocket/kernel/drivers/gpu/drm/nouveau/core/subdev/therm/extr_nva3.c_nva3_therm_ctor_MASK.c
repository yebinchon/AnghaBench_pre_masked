
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int fan_sense; int temp_get; int pwm_clock; int pwm_set; int pwm_get; int pwm_ctrl; } ;
struct TYPE_4__ {int program_alarms; } ;
struct TYPE_5__ {TYPE_3__ base; TYPE_1__ sensor; } ;
struct nva3_therm_priv {TYPE_2__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nva3_therm_priv**) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nouveau_object* FUNC_2 (struct nva3_therm_priv*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_7,
  struct nouveau_object *VAR_8,
  struct nouveau_oclass *VAR_9, void *VAR_10, u32 VAR_11,
  struct nouveau_object **VAR_12)
{
 struct nva3_therm_priv *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_0(VAR_7, VAR_8, VAR_9, &VAR_13);
 *VAR_12 = FUNC_2(VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_13->base.base.pwm_ctrl = VAR_2;
 VAR_13->base.base.pwm_get = VAR_3;
 VAR_13->base.base.pwm_set = VAR_4;
 VAR_13->base.base.pwm_clock = VAR_1;
 VAR_13->base.base.temp_get = VAR_5;
 VAR_13->base.base.fan_sense = VAR_6;
 VAR_13->base.sensor.program_alarms = VAR_0;
 return FUNC_1(&VAR_13->base.base);
}
