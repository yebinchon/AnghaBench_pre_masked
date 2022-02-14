
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_timer {unsigned long blink_delay_on; unsigned long blink_delay_off; int blink_brightness; int blink_timer; } ;
struct led_classdev {int brightness; int max_brightness; int (* blink_set ) (struct led_classdev*,unsigned long*,unsigned long*) ;} ;


 int FUNC_0 (struct led_classdev*,int) ;
 scalar_t__ VAR_0 ;
 struct led_timer* FUNC_1 (struct led_classdev*) ;
 struct led_timer* FUNC_2 (struct led_classdev*) ;
 int FUNC_3 (struct led_timer*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct led_classdev*,unsigned long*,unsigned long*) ;

void FUNC_6(struct led_classdev *VAR_1,
     unsigned long *VAR_2,
     unsigned long *VAR_3)
{
 struct led_timer *VAR_4;
 int VAR_5;

 if (VAR_1->blink_set &&
     !VAR_1->blink_set(VAR_1, VAR_2, VAR_3))
  return;

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4) {
  VAR_4 = FUNC_2(VAR_1);
  if (!VAR_4)
   return;
 }


 if (!*VAR_2 && !*VAR_3)
  *VAR_2 = *VAR_3 = 500;

 if (VAR_4->blink_delay_on == *VAR_2 &&
     VAR_4->blink_delay_off == *VAR_3)
  return;

 VAR_5 = VAR_1->brightness;
 if (VAR_5)
  VAR_4->blink_brightness = VAR_5;
 if (!VAR_4->blink_brightness)
  VAR_4->blink_brightness = VAR_1->max_brightness;

 FUNC_3(VAR_4);
 VAR_4->blink_delay_on = *VAR_2;
 VAR_4->blink_delay_off = *VAR_3;


 if (!*VAR_2)
  return;


 if (!*VAR_3) {
  FUNC_0(VAR_1, VAR_4->blink_brightness);
  return;
 }

 FUNC_4(&VAR_4->blink_timer, VAR_0 + 1);
}
