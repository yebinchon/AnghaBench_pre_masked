
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct led_timer {unsigned long blink_delay_on; unsigned long blink_delay_off; unsigned long blink_brightness; int blink_timer; TYPE_1__* cdev; } ;
struct TYPE_3__ {unsigned long brightness; int (* brightness_set ) (TYPE_1__*,unsigned long) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned long) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (TYPE_1__*,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct led_timer *VAR_3 = (struct led_timer *)VAR_2;
 unsigned long VAR_4;
 unsigned long VAR_5;

 if (!VAR_3->blink_delay_on || !VAR_3->blink_delay_off) {
  VAR_3->cdev->brightness_set(VAR_3->cdev, VAR_0);
  return;
 }

 VAR_4 = VAR_3->cdev->brightness;
 if (!VAR_4) {

  VAR_4 = VAR_3->blink_brightness;
  VAR_5 = VAR_3->blink_delay_on;
 } else {



  VAR_3->blink_brightness = VAR_4;
  VAR_4 = VAR_0;
  VAR_5 = VAR_3->blink_delay_off;
 }

 FUNC_0(VAR_3->cdev, VAR_4);
 FUNC_1(&VAR_3->blink_timer, VAR_1 + FUNC_2(VAR_5));
}
