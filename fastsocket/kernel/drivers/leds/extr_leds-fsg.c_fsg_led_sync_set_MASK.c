
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct led_classdev *VAR_3,
        enum led_brightness VAR_4)
{
 if (VAR_4) {
  VAR_2 &= ~(1 << VAR_0);
  *VAR_1 = VAR_2;
 } else {
  VAR_2 |= (1 << VAR_0);
  *VAR_1 = VAR_2;
 }
}
