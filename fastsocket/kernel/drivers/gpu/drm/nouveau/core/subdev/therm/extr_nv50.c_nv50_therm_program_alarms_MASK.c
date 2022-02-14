
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int hysteresis; int temp; } ;
struct TYPE_9__ {int temp; int hysteresis; } ;
struct TYPE_8__ {int temp; int hysteresis; } ;
struct TYPE_7__ {int temp; int hysteresis; } ;
struct nvbios_therm_sensor {TYPE_5__ thrs_shutdown; TYPE_4__ thrs_critical; TYPE_3__ thrs_down_clock; TYPE_2__ thrs_fan_boost; } ;
struct TYPE_6__ {int alarm_program_lock; } ;
struct nouveau_therm_priv {TYPE_1__ sensor; struct nvbios_therm_sensor bios_sensor; } ;
struct nouveau_therm {int dummy; } ;


 int FUNC_0 (struct nouveau_therm*,char*,int,int ,int,int ,int,int ,int,int) ;
 int FUNC_1 (struct nouveau_therm*,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_therm *VAR_0)
{
 struct nouveau_therm_priv *VAR_1 = (void *)VAR_0;
 struct nvbios_therm_sensor *VAR_2 = &VAR_1->bios_sensor;
 unsigned long VAR_3;

 FUNC_2(&VAR_1->sensor.alarm_program_lock, VAR_3);


 FUNC_1(VAR_0, 0x20000, 0x000003ff);


 FUNC_1(VAR_0, 0x20484, VAR_2->thrs_shutdown.hysteresis);
 FUNC_1(VAR_0, 0x20480, VAR_2->thrs_shutdown.temp);


 FUNC_1(VAR_0, 0x204c4, VAR_2->thrs_fan_boost.temp);


 FUNC_1(VAR_0, 0x204c0, VAR_2->thrs_critical.temp);


 FUNC_1(VAR_0, 0x20414, VAR_2->thrs_down_clock.temp);
 FUNC_3(&VAR_1->sensor.alarm_program_lock, VAR_3);

 FUNC_0(VAR_0,
  "Programmed thresholds [ %d(%d), %d(%d), %d(%d), %d(%d) ]\n",
  VAR_2->thrs_fan_boost.temp, VAR_2->thrs_fan_boost.hysteresis,
  VAR_2->thrs_down_clock.temp,
  VAR_2->thrs_down_clock.hysteresis,
  VAR_2->thrs_critical.temp, VAR_2->thrs_critical.hysteresis,
  VAR_2->thrs_shutdown.temp, VAR_2->thrs_shutdown.hysteresis);

}
