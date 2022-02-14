
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_bl_data {int pwm; int period; } ;
struct platform_pwm_backlight_data {int (* exit ) (TYPE_1__*) ;} ;
struct TYPE_2__ {struct platform_pwm_backlight_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct backlight_device {int dev; } ;


 int FUNC_0 (struct backlight_device*) ;
 struct pwm_bl_data* FUNC_1 (int *) ;
 int FUNC_2 (struct pwm_bl_data*) ;
 struct backlight_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct platform_pwm_backlight_data *VAR_1 = VAR_0->dev.platform_data;
 struct backlight_device *VAR_2 = FUNC_3(VAR_0);
 struct pwm_bl_data *VAR_3 = FUNC_1(&VAR_2->dev);

 FUNC_0(VAR_2);
 FUNC_4(VAR_3->pwm, 0, VAR_3->period);
 FUNC_5(VAR_3->pwm);
 FUNC_6(VAR_3->pwm);
 FUNC_2(VAR_3);
 if (VAR_1->exit)
  VAR_1->exit(&VAR_0->dev);
 return 0;
}
