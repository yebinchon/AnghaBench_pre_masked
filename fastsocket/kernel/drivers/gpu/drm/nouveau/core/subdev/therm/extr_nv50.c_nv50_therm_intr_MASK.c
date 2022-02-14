
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nvbios_therm_sensor {int thrs_critical; int thrs_fan_boost; int thrs_shutdown; int thrs_down_clock; } ;
struct TYPE_2__ {int alarm_program_lock; } ;
struct nouveau_therm_priv {TYPE_1__ sensor; struct nvbios_therm_sensor bios_sensor; } ;
struct nouveau_therm {int dummy; } ;
struct nouveau_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nouveau_therm* FUNC_0 (struct nouveau_subdev*) ;
 int FUNC_1 (struct nouveau_therm*,int,int,int *,int ) ;
 int FUNC_2 (struct nouveau_therm*,char*,int) ;
 int FUNC_3 (struct nouveau_therm*,int) ;
 int FUNC_4 (struct nouveau_therm*,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct nouveau_subdev *VAR_4)
{
 struct nouveau_therm *VAR_5 = FUNC_0(VAR_4);
 struct nouveau_therm_priv *VAR_6 = (void *)VAR_5;
 struct nvbios_therm_sensor *VAR_7 = &VAR_6->bios_sensor;
 unsigned long VAR_8;
 uint32_t VAR_9;

 FUNC_5(&VAR_6->sensor.alarm_program_lock, VAR_8);

 VAR_9 = FUNC_3(VAR_5, 0x20100);


 if (VAR_9 & 0x002) {
  FUNC_1(VAR_5, 0x20414, 24,
        &VAR_7->thrs_down_clock,
        VAR_1);
  VAR_9 &= ~0x002;
 }


 if (VAR_9 & 0x004) {
  FUNC_1(VAR_5, 0x20480, 20,
         &VAR_7->thrs_shutdown,
         VAR_3);
  VAR_9 &= ~0x004;
 }


 if (VAR_9 & 0x008) {
  FUNC_1(VAR_5, 0x204c4, 21,
         &VAR_7->thrs_fan_boost,
         VAR_2);
  VAR_9 &= ~0x008;
 }


 if (VAR_9 & 0x010) {
  FUNC_1(VAR_5, 0x204c0, 22,
         &VAR_7->thrs_critical,
         VAR_0);
  VAR_9 &= ~0x010;
 }

 if (VAR_9)
  FUNC_2(VAR_5, "unhandled intr 0x%08x\n", VAR_9);


 FUNC_4(VAR_5, 0x20100, 0xffffffff);
 FUNC_4(VAR_5, 0x1100, 0x10000);

 FUNC_6(&VAR_6->sensor.alarm_program_lock, VAR_8);
}
