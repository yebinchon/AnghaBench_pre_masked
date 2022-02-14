
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct nvbios_therm_fan {size_t nr_fan_trip; int min_duty; int max_duty; int pwm_freq; int bump_period; int slow_down_period; int linear_min_temp; int linear_max_temp; struct nouveau_therm_trip_point* trip; } ;
struct nouveau_therm_trip_point {int hysteresis; int temp; int fan_duty; } ;
struct nouveau_bios {int dummy; } ;
typedef int s16 ;


 int FUNC_0 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_1 (struct nouveau_bios*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nouveau_bios*,int ,scalar_t__*,scalar_t__*) ;

int
FUNC_3(struct nouveau_bios *VAR_0,
     struct nvbios_therm_fan *VAR_1)
{
 struct nouveau_therm_trip_point *VAR_2 = ((void*)0);
 u8 VAR_3, VAR_4, VAR_5;
 u16 VAR_6;

 uint8_t VAR_7[] = { 0, 0, 25, 0, 40, 0, 50, 0,
    75, 0, 85, 0, 100, 0, 100, 0 };

 VAR_5 = 0;
 VAR_1->nr_fan_trip = 0;
 while ((VAR_6 = FUNC_2(VAR_0, VAR_5++, &VAR_3, &VAR_4))) {
  s16 VAR_8 = FUNC_1(VAR_0, VAR_6 + 1);

  switch (FUNC_0(VAR_0, VAR_6 + 0)) {
  case 0x22:
   VAR_1->min_duty = VAR_8 & 0xff;
   VAR_1->max_duty = (VAR_8 & 0xff00) >> 8;
   break;
  case 0x24:
   VAR_1->nr_fan_trip++;
   VAR_2 = &VAR_1->trip[VAR_1->nr_fan_trip - 1];
   VAR_2->hysteresis = VAR_8 & 0xf;
   VAR_2->temp = (VAR_8 & 0xff0) >> 4;
   VAR_2->fan_duty = VAR_7[(VAR_8 & 0xf000) >> 12];
   break;
  case 0x25:
   VAR_2 = &VAR_1->trip[VAR_1->nr_fan_trip - 1];
   VAR_2->fan_duty = VAR_8;
   break;
  case 0x26:
   VAR_1->pwm_freq = VAR_8;
   break;
  case 0x3b:
   VAR_1->bump_period = VAR_8;
   break;
  case 0x3c:
   VAR_1->slow_down_period = VAR_8;
   break;
  case 0x46:
   VAR_1->linear_min_temp = FUNC_0(VAR_0, VAR_6 + 1);
   VAR_1->linear_max_temp = FUNC_0(VAR_0, VAR_6 + 2);
   break;
  }
 }

 return 0;
}
