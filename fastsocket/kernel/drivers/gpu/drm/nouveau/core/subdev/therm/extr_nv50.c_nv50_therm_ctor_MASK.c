
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int temp_get; int pwm_clock; int pwm_set; int pwm_get; int pwm_ctrl; } ;
struct TYPE_6__ {int program_alarms; } ;
struct TYPE_7__ {TYPE_4__ base; TYPE_1__ sensor; } ;
struct nv50_therm_priv {TYPE_2__ base; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_8__ {int intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv50_therm_priv**) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct nouveau_object* FUNC_3 (struct nv50_therm_priv*) ;
 TYPE_3__* FUNC_4 (struct nv50_therm_priv*) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_12,
  struct nouveau_object *VAR_13,
  struct nouveau_oclass *VAR_14, void *VAR_15, u32 VAR_16,
  struct nouveau_object **VAR_17)
{
 struct nv50_therm_priv *VAR_18;
 int VAR_19;

 VAR_19 = FUNC_0(VAR_12, VAR_13, VAR_14, &VAR_18);
 *VAR_17 = FUNC_3(VAR_18);
 if (VAR_19)
  return VAR_19;

 VAR_18->base.base.pwm_ctrl = VAR_6;
 VAR_18->base.base.pwm_get = VAR_7;
 VAR_18->base.base.pwm_set = VAR_8;
 VAR_18->base.base.pwm_clock = VAR_5;
 VAR_18->base.base.temp_get = VAR_9;
 VAR_18->base.sensor.program_alarms = VAR_11;
 FUNC_4(VAR_18)->intr = VAR_10;


 FUNC_2(&VAR_18->base.base,
       VAR_4,
       VAR_3);
 FUNC_2(&VAR_18->base.base,
       VAR_2,
       VAR_3);
 FUNC_2(&VAR_18->base.base,
       VAR_0,
       VAR_3);
 FUNC_2(&VAR_18->base.base,
       VAR_1,
       VAR_3);

 return FUNC_1(&VAR_18->base.base);
}
