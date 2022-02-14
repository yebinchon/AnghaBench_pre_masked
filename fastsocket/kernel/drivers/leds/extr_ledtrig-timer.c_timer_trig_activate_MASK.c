
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct timer_trig_data {scalar_t__ brightness_on; int delay_off; int delay_on; TYPE_1__ timer; } ;
struct led_classdev {scalar_t__ max_brightness; struct timer_trig_data* trigger_data; int dev; int (* blink_set ) (struct led_classdev*,int *,int *) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct timer_trig_data*) ;
 struct timer_trig_data* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct led_classdev*) ;
 int VAR_4 ;
 int FUNC_6 (struct led_classdev*,int *,int *) ;

__attribute__((used)) static void FUNC_7(struct led_classdev *VAR_5)
{
 struct timer_trig_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(sizeof(struct timer_trig_data), VAR_0);
 if (!VAR_6)
  return;

 VAR_6->brightness_on = FUNC_5(VAR_5);
 if (VAR_6->brightness_on == VAR_1)
  VAR_6->brightness_on = VAR_5->max_brightness;
 VAR_5->trigger_data = VAR_6;

 FUNC_2(&VAR_6->timer);
 VAR_6->timer.function = VAR_4;
 VAR_6->timer.data = (unsigned long) VAR_5;

 VAR_7 = FUNC_0(VAR_5->dev, &VAR_3);
 if (VAR_7)
  goto err_out;
 VAR_7 = FUNC_0(VAR_5->dev, &VAR_2);
 if (VAR_7)
  goto err_out_delayon;




 if (VAR_5->blink_set)
  VAR_5->blink_set(VAR_5,
   &VAR_6->delay_on, &VAR_6->delay_off);

 return;

err_out_delayon:
 FUNC_1(VAR_5->dev, &VAR_3);
err_out:
 VAR_5->trigger_data = ((void*)0);
 FUNC_3(VAR_6);
}
