
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int temp; int hysteresis; } ;
struct TYPE_10__ {int temp; int hysteresis; } ;
struct TYPE_9__ {int temp; int hysteresis; } ;
struct TYPE_8__ {int temp; int hysteresis; } ;
struct TYPE_12__ {TYPE_4__ thrs_shutdown; TYPE_3__ thrs_critical; TYPE_2__ thrs_down_clock; TYPE_1__ thrs_fan_boost; } ;
struct nouveau_therm_priv {int mode; TYPE_5__ bios_sensor; TYPE_6__* fan; } ;
struct nouveau_therm {int dummy; } ;
typedef enum nouveau_therm_attr_type { ____Placeholder_nouveau_therm_attr_type } nouveau_therm_attr_type ;
struct TYPE_14__ {int min_duty; int max_duty; } ;
struct TYPE_13__ {TYPE_7__ bios; } ;


 int VAR_0 ;
int
FUNC_0(struct nouveau_therm *VAR_1,
         enum nouveau_therm_attr_type VAR_2)
{
 struct nouveau_therm_priv *VAR_3 = (void *)VAR_1;

 switch (VAR_2) {
 case 137:
  return VAR_3->fan->bios.min_duty;
 case 138:
  return VAR_3->fan->bios.max_duty;
 case 136:
  return VAR_3->mode;
 case 131:
  return VAR_3->bios_sensor.thrs_fan_boost.temp;
 case 130:
  return VAR_3->bios_sensor.thrs_fan_boost.hysteresis;
 case 133:
  return VAR_3->bios_sensor.thrs_down_clock.temp;
 case 132:
  return VAR_3->bios_sensor.thrs_down_clock.hysteresis;
 case 135:
  return VAR_3->bios_sensor.thrs_critical.temp;
 case 134:
  return VAR_3->bios_sensor.thrs_critical.hysteresis;
 case 129:
  return VAR_3->bios_sensor.thrs_shutdown.temp;
 case 128:
  return VAR_3->bios_sensor.thrs_shutdown.hysteresis;
 }

 return -VAR_0;
}
