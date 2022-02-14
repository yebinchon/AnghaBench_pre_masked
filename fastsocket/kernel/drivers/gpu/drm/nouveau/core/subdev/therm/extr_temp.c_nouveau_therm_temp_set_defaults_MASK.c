
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int temp; int hysteresis; } ;
struct TYPE_8__ {int temp; int hysteresis; } ;
struct TYPE_7__ {int temp; int hysteresis; } ;
struct TYPE_6__ {int temp; int hysteresis; } ;
struct TYPE_10__ {TYPE_4__ thrs_shutdown; TYPE_3__ thrs_critical; TYPE_2__ thrs_down_clock; TYPE_1__ thrs_fan_boost; scalar_t__ offset_constant; } ;
struct nouveau_therm_priv {TYPE_5__ bios_sensor; } ;
struct nouveau_therm {int dummy; } ;



__attribute__((used)) static void
FUNC_0(struct nouveau_therm *VAR_0)
{
 struct nouveau_therm_priv *VAR_1 = (void *)VAR_0;

 VAR_1->bios_sensor.offset_constant = 0;

 VAR_1->bios_sensor.thrs_fan_boost.temp = 90;
 VAR_1->bios_sensor.thrs_fan_boost.hysteresis = 3;

 VAR_1->bios_sensor.thrs_down_clock.temp = 95;
 VAR_1->bios_sensor.thrs_down_clock.hysteresis = 3;

 VAR_1->bios_sensor.thrs_critical.temp = 105;
 VAR_1->bios_sensor.thrs_critical.hysteresis = 5;

 VAR_1->bios_sensor.thrs_shutdown.temp = 135;
 VAR_1->bios_sensor.thrs_shutdown.hysteresis = 5;
}
