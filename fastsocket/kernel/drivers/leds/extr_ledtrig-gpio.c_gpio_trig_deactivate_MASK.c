
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dev; struct gpio_trig_data* trigger_data; } ;
struct gpio_trig_data {scalar_t__ gpio; int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct led_classdev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct gpio_trig_data*) ;

__attribute__((used)) static void FUNC_5(struct led_classdev *VAR_3)
{
 struct gpio_trig_data *VAR_4 = VAR_3->trigger_data;

 if (VAR_4) {
  FUNC_0(VAR_3->dev, &VAR_1);
  FUNC_0(VAR_3->dev, &VAR_2);
  FUNC_0(VAR_3->dev, &VAR_0);
  FUNC_1(&VAR_4->work);
  if (VAR_4->gpio != 0)
   FUNC_2(FUNC_3(VAR_4->gpio), VAR_3);
  FUNC_4(VAR_4);
 }
}
