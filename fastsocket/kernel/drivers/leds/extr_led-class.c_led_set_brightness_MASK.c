
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_timer {int dummy; } ;
struct led_classdev {void (* brightness_set ) (struct led_classdev*,int) ;} ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 struct led_timer* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct led_timer*) ;
 void FUNC_2 (struct led_classdev*,int) ;

void FUNC_3(struct led_classdev *VAR_0,
   enum led_brightness VAR_1)
{
 struct led_timer *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  FUNC_1(VAR_2);

 return VAR_0->brightness_set(VAR_0, VAR_1);
}
