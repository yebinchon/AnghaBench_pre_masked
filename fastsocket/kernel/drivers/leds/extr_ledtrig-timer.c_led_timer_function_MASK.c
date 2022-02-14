
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_trig_data {unsigned long delay_on; unsigned long delay_off; unsigned long brightness_on; int timer; } ;
struct led_classdev {struct timer_trig_data* trigger_data; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct led_classdev*,unsigned long) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct led_classdev *VAR_3 = (struct led_classdev *) VAR_2;
 struct timer_trig_data *VAR_4 = VAR_3->trigger_data;
 unsigned long VAR_5;
 unsigned long VAR_6;

 if (!VAR_4->delay_on || !VAR_4->delay_off) {
  FUNC_1(VAR_3, VAR_0);
  return;
 }

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5) {

  VAR_5 = VAR_4->brightness_on;
  VAR_6 = VAR_4->delay_on;
 } else {



  VAR_4->brightness_on = VAR_5;
  VAR_5 = VAR_0;
  VAR_6 = VAR_4->delay_off;
 }

 FUNC_1(VAR_3, VAR_5);

 FUNC_2(&VAR_4->timer, VAR_1 + FUNC_3(VAR_6));
}
