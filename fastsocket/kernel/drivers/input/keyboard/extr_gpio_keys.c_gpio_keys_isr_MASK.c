
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_keys_button {scalar_t__ debounce_interval; int gpio; } ;
struct gpio_button_data {int work; int timer; struct gpio_keys_button* button; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct gpio_button_data *VAR_4 = VAR_3;
 struct gpio_keys_button *VAR_5 = VAR_4->button;

 FUNC_0(VAR_2 != FUNC_1(VAR_5->gpio));

 if (VAR_5->debounce_interval)
  FUNC_2(&VAR_4->timer,
   VAR_1 + FUNC_3(VAR_5->debounce_interval));
 else
  FUNC_4(&VAR_4->work);

 return VAR_0;
}
