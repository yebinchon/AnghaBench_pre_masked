
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int attr_set; int attr_get; int fan_sense; int fan_set; int fan_get; } ;
struct TYPE_3__ {int alarm_program_lock; } ;
struct nouveau_therm_priv {int mode; int suspend; TYPE_2__ base; TYPE_1__ sensor; int lock; int alarm; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,char*,char*,int,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct nouveau_object *VAR_6,
        struct nouveau_object *VAR_7,
        struct nouveau_oclass *VAR_8,
        int VAR_9, void **VAR_10)
{
 struct nouveau_therm_priv *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_8, 0, "PTHERM",
         "therm", VAR_9, VAR_10);
 VAR_11 = *VAR_10;
 if (VAR_12)
  return VAR_12;

 FUNC_0(&VAR_11->alarm, VAR_0);
 FUNC_2(&VAR_11->lock);
 FUNC_2(&VAR_11->sensor.alarm_program_lock);

 VAR_11->base.fan_get = VAR_4;
 VAR_11->base.fan_set = VAR_5;
 VAR_11->base.fan_sense = VAR_3;
 VAR_11->base.attr_get = VAR_1;
 VAR_11->base.attr_set = VAR_2;
 VAR_11->mode = VAR_11->suspend = -1;
 return 0;
}
