
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int temp; int hysteresis; } ;
struct TYPE_7__ {int temp; int hysteresis; } ;
struct TYPE_6__ {int temp; int hysteresis; } ;
struct TYPE_5__ {int temp; int hysteresis; } ;
struct nvbios_therm_sensor {int offset_constant; int offset_num; int offset_den; int slope_mult; int slope_div; TYPE_4__ thrs_shutdown; TYPE_3__ thrs_fan_boost; TYPE_2__ thrs_down_clock; TYPE_1__ thrs_critical; } ;
struct nouveau_bios {int dummy; } ;
typedef int s8 ;
typedef int s16 ;
typedef enum nvbios_therm_domain { ____Placeholder_nvbios_therm_domain } nvbios_therm_domain ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_1 (struct nouveau_bios*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nouveau_bios*,int ,scalar_t__*,scalar_t__*) ;

int
FUNC_3(struct nouveau_bios *VAR_2,
     enum nvbios_therm_domain VAR_3,
     struct nvbios_therm_sensor *VAR_4)
{
 s8 VAR_5, VAR_6, VAR_7;
 u8 VAR_8, VAR_9, VAR_10;
 u16 VAR_11;


 if (VAR_3 != VAR_1)
  return -VAR_0;


 VAR_5 = 0;
 VAR_6 = -1;
 VAR_10 = 0;
 while ((VAR_11 = FUNC_2(VAR_2, VAR_10++, &VAR_8, &VAR_9))) {
  s16 VAR_12 = FUNC_1(VAR_2, VAR_11 + 1);

  switch (FUNC_0(VAR_2, VAR_11 + 0)) {
  case 0x0:
   VAR_5 = VAR_12;
   if (VAR_12 > 0)
    return 0;
   break;
  case 0x01:
   VAR_6++;
   if (VAR_6 == 0) {
    VAR_7 = ((s8) FUNC_0(VAR_2, VAR_11 + 2)) / 2;
    VAR_4->offset_constant = VAR_7;
   }
   break;

  case 0x04:
   if (VAR_5 == 0) {
    VAR_4->thrs_critical.temp = (VAR_12 & 0xff0) >> 4;
    VAR_4->thrs_critical.hysteresis = VAR_12 & 0xf;
   }
   break;

  case 0x07:
   if (VAR_5 == 0) {
    VAR_4->thrs_down_clock.temp = (VAR_12 & 0xff0) >> 4;
    VAR_4->thrs_down_clock.hysteresis = VAR_12 & 0xf;
   }
   break;

  case 0x08:
   if (VAR_5 == 0) {
    VAR_4->thrs_fan_boost.temp = (VAR_12 & 0xff0) >> 4;
    VAR_4->thrs_fan_boost.hysteresis = VAR_12 & 0xf;
   }
   break;

  case 0x10:
   if (VAR_6 == 0)
    VAR_4->offset_num = VAR_12;
   break;

  case 0x11:
   if (VAR_6 == 0)
    VAR_4->offset_den = VAR_12;
   break;

  case 0x12:
   if (VAR_6 == 0)
    VAR_4->slope_mult = VAR_12;
   break;

  case 0x13:
   if (VAR_6 == 0)
    VAR_4->slope_div = VAR_12;
   break;
  case 0x32:
   if (VAR_5 == 0) {
    VAR_4->thrs_shutdown.temp = (VAR_12 & 0xff0) >> 4;
    VAR_4->thrs_shutdown.hysteresis = VAR_12 & 0xf;
   }
   break;
  }
 }

 return 0;
}
