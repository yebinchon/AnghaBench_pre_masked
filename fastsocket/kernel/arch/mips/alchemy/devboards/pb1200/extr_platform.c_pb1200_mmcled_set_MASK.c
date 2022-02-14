
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int disk_leds; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct led_classdev *VAR_3,
   enum led_brightness VAR_4)
{
 if (VAR_4 != VAR_0) {
  if (++VAR_2 == 1)
   VAR_1->disk_leds &= ~(1 << 8);
 } else {
  if (--VAR_2 == 0)
   VAR_1->disk_leds |= (1 << 8);
 }
}
