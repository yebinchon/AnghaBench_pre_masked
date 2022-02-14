
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {struct gpio_trig_data* trigger_data; } ;
struct gpio_trig_data {int work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct led_classdev *VAR_3 = VAR_2;
 struct gpio_trig_data *VAR_4 = VAR_3->trigger_data;


 FUNC_0(&VAR_4->work);

 return VAR_0;
}
