
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_therm_priv {TYPE_2__* fan; } ;
struct nouveau_therm {int dummy; } ;
struct TYPE_3__ {int max_duty; int bump_period; int slow_down_period; int linear_min_temp; int linear_max_temp; scalar_t__ min_duty; scalar_t__ pwm_freq; } ;
struct TYPE_4__ {TYPE_1__ bios; } ;



__attribute__((used)) static void
FUNC_0(struct nouveau_therm *VAR_0)
{
 struct nouveau_therm_priv *VAR_1 = (void *)VAR_0;

 VAR_1->fan->bios.pwm_freq = 0;
 VAR_1->fan->bios.min_duty = 0;
 VAR_1->fan->bios.max_duty = 100;
 VAR_1->fan->bios.bump_period = 500;
 VAR_1->fan->bios.slow_down_period = 2000;
 VAR_1->fan->bios.linear_min_temp = 40;
 VAR_1->fan->bios.linear_max_temp = 85;
}
