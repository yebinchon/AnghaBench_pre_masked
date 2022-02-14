
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_trig_data {int timer; } ;
struct led_classdev {int (* blink_set ) (struct led_classdev*,unsigned long*,unsigned long*) ;int dev; struct timer_trig_data* trigger_data; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct timer_trig_data*) ;
 int FUNC_3 (struct led_classdev*,unsigned long*,unsigned long*) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_2)
{
 struct timer_trig_data *VAR_3 = VAR_2->trigger_data;
 unsigned long VAR_4 = 0, VAR_5 = 0;

 if (VAR_3) {
  FUNC_1(VAR_2->dev, &VAR_1);
  FUNC_1(VAR_2->dev, &VAR_0);
  FUNC_0(&VAR_3->timer);
  FUNC_2(VAR_3);
 }


 if (VAR_2->blink_set)
  VAR_2->blink_set(VAR_2, &VAR_4, &VAR_5);
}
