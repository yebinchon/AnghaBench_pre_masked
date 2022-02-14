
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int (* program_alarms ) (struct nouveau_therm*) ;} ;
struct TYPE_14__ {int temp; int hysteresis; } ;
struct TYPE_13__ {int temp; int hysteresis; } ;
struct TYPE_12__ {int temp; int hysteresis; } ;
struct TYPE_11__ {int temp; int hysteresis; } ;
struct TYPE_15__ {TYPE_6__ thrs_shutdown; TYPE_5__ thrs_critical; TYPE_4__ thrs_down_clock; TYPE_3__ thrs_fan_boost; } ;
struct nouveau_therm_priv {TYPE_8__ sensor; TYPE_7__ bios_sensor; TYPE_2__* fan; } ;
struct nouveau_therm {int dummy; } ;
typedef enum nouveau_therm_attr_type { ____Placeholder_nouveau_therm_attr_type } nouveau_therm_attr_type ;
struct TYPE_9__ {int max_duty; int min_duty; } ;
struct TYPE_10__ {TYPE_1__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_therm*,int) ;
 int FUNC_1 (struct nouveau_therm*) ;
 int FUNC_2 (struct nouveau_therm*) ;
 int FUNC_3 (struct nouveau_therm*) ;
 int FUNC_4 (struct nouveau_therm*) ;
 int FUNC_5 (struct nouveau_therm*) ;
 int FUNC_6 (struct nouveau_therm*) ;
 int FUNC_7 (struct nouveau_therm*) ;
 int FUNC_8 (struct nouveau_therm*) ;

int
FUNC_9(struct nouveau_therm *VAR_1,
         enum nouveau_therm_attr_type VAR_2, int VAR_3)
{
 struct nouveau_therm_priv *VAR_4 = (void *)VAR_1;

 switch (VAR_2) {
 case 137:
  if (VAR_3 < 0)
   VAR_3 = 0;
  if (VAR_3 > VAR_4->fan->bios.max_duty)
   VAR_3 = VAR_4->fan->bios.max_duty;
  VAR_4->fan->bios.min_duty = VAR_3;
  return 0;
 case 138:
  if (VAR_3 < 0)
   VAR_3 = 0;
  if (VAR_3 < VAR_4->fan->bios.min_duty)
   VAR_3 = VAR_4->fan->bios.min_duty;
  VAR_4->fan->bios.max_duty = VAR_3;
  return 0;
 case 136:
  return FUNC_0(VAR_1, VAR_3);
 case 131:
  VAR_4->bios_sensor.thrs_fan_boost.temp = VAR_3;
  VAR_4->sensor.program_alarms(VAR_1);
  return 0;
 case 130:
  VAR_4->bios_sensor.thrs_fan_boost.hysteresis = VAR_3;
  VAR_4->sensor.program_alarms(VAR_1);
  return 0;
 case 133:
  VAR_4->bios_sensor.thrs_down_clock.temp = VAR_3;
  VAR_4->sensor.program_alarms(VAR_1);
  return 0;
 case 132:
  VAR_4->bios_sensor.thrs_down_clock.hysteresis = VAR_3;
  VAR_4->sensor.program_alarms(VAR_1);
  return 0;
 case 135:
  VAR_4->bios_sensor.thrs_critical.temp = VAR_3;
  VAR_4->sensor.program_alarms(VAR_1);
  return 0;
 case 134:
  VAR_4->bios_sensor.thrs_critical.hysteresis = VAR_3;
  VAR_4->sensor.program_alarms(VAR_1);
  return 0;
 case 129:
  VAR_4->bios_sensor.thrs_shutdown.temp = VAR_3;
  VAR_4->sensor.program_alarms(VAR_1);
  return 0;
 case 128:
  VAR_4->bios_sensor.thrs_shutdown.hysteresis = VAR_3;
  VAR_4->sensor.program_alarms(VAR_1);
  return 0;
 }

 return -VAR_0;
}
