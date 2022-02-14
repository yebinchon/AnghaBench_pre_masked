
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct backlight_device {int dummy; } ;
struct atmel_pwm_bl {int pwmc; TYPE_1__* pdata; } ;
struct TYPE_2__ {int pwm_duty_min; int pwm_duty_max; scalar_t__ pwm_active_low; } ;


 int VAR_0 ;
 struct atmel_pwm_bl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 struct atmel_pwm_bl *VAR_2 = FUNC_0(VAR_1);
 u8 VAR_3;

 if (VAR_2->pdata->pwm_active_low) {
  VAR_3 = FUNC_1(&VAR_2->pwmc, VAR_0) -
   VAR_2->pdata->pwm_duty_min;
 } else {
  VAR_3 = VAR_2->pdata->pwm_duty_max -
   FUNC_1(&VAR_2->pwmc, VAR_0);
 }

 return VAR_3;
}
