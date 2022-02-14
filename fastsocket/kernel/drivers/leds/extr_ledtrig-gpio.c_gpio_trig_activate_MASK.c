
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dev; struct gpio_trig_data* trigger_data; } ;
struct gpio_trig_data {int work; struct led_classdev* led; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;
 int FUNC_3 (struct gpio_trig_data*) ;
 struct gpio_trig_data* FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct led_classdev *VAR_5)
{
 struct gpio_trig_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;

 VAR_7 = FUNC_1(VAR_5->dev, &VAR_2);
 if (VAR_7)
  goto err_gpio;

 VAR_7 = FUNC_1(VAR_5->dev, &VAR_3);
 if (VAR_7)
  goto err_inverted;

 VAR_7 = FUNC_1(VAR_5->dev, &VAR_1);
 if (VAR_7)
  goto err_brightness;

 VAR_6->led = VAR_5;
 VAR_5->trigger_data = VAR_6;
 FUNC_0(&VAR_6->work, VAR_4);

 return;

err_brightness:
 FUNC_2(VAR_5->dev, &VAR_3);

err_inverted:
 FUNC_2(VAR_5->dev, &VAR_2);

err_gpio:
 FUNC_3(VAR_6);
}
