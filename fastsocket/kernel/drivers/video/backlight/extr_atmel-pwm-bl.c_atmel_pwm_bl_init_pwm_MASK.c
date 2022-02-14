
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {unsigned long mck; } ;
struct atmel_pwm_bl {TYPE_5__ pwmc; TYPE_4__* pdata; TYPE_3__* pdev; TYPE_2__* bldev; } ;
struct TYPE_10__ {int pwm_frequency; int pwm_compare_max; unsigned long pwm_duty_min; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {unsigned long brightness; } ;
struct TYPE_8__ {TYPE_1__ props; } ;


 int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct atmel_pwm_bl *VAR_3)
{
 unsigned long VAR_4 = VAR_3->pwmc.mck;
 unsigned long VAR_5 = FUNC_0(VAR_4,
   (VAR_3->pdata->pwm_frequency *
    VAR_3->pdata->pwm_compare_max)) - 1;






 VAR_5 = FUNC_2(VAR_5);
 if (VAR_5 > 0xf)
  VAR_5 = 0xf;

 FUNC_4(&VAR_3->pwmc, VAR_1, VAR_5);
 FUNC_4(&VAR_3->pwmc, VAR_0,
   VAR_3->pdata->pwm_duty_min +
   VAR_3->bldev->props.brightness);
 FUNC_4(&VAR_3->pwmc, VAR_2,
   VAR_3->pdata->pwm_compare_max);

 FUNC_1(&VAR_3->pdev->dev, "Atmel PWM backlight driver "
   "(%lu Hz)\n", VAR_3->pwmc.mck /
   VAR_3->pdata->pwm_compare_max /
   (1 << VAR_5));

 return FUNC_3(&VAR_3->pwmc);
}
