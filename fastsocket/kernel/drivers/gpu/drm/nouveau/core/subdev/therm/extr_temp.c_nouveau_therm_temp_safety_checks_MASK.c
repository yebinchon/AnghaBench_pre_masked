
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* hysteresis; } ;
struct TYPE_7__ {void* hysteresis; } ;
struct TYPE_6__ {void* hysteresis; } ;
struct TYPE_5__ {void* hysteresis; } ;
struct nvbios_therm_sensor {TYPE_4__ thrs_shutdown; TYPE_3__ thrs_critical; TYPE_2__ thrs_down_clock; TYPE_1__ thrs_fan_boost; } ;
struct nouveau_therm_priv {struct nvbios_therm_sensor bios_sensor; } ;
struct nouveau_therm {int dummy; } ;


 void* FUNC_0 (int ,void*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct nouveau_therm *VAR_1)
{
 struct nouveau_therm_priv *VAR_2 = (void *)VAR_1;
 struct nvbios_therm_sensor *VAR_3 = &VAR_2->bios_sensor;


 VAR_3->thrs_fan_boost.hysteresis = FUNC_0(VAR_0, VAR_3->thrs_fan_boost.hysteresis, 2);
 VAR_3->thrs_down_clock.hysteresis = FUNC_0(VAR_0, VAR_3->thrs_down_clock.hysteresis, 2);
 VAR_3->thrs_critical.hysteresis = FUNC_0(VAR_0, VAR_3->thrs_critical.hysteresis, 2);
 VAR_3->thrs_shutdown.hysteresis = FUNC_0(VAR_0, VAR_3->thrs_shutdown.hysteresis, 2);
}
