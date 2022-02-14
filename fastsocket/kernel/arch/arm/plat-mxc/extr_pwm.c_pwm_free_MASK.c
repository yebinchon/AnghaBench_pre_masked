
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int * label; scalar_t__ use_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;

void FUNC_3(struct pwm_device *VAR_1)
{
 FUNC_0(&VAR_0);

 if (VAR_1->use_count) {
  VAR_1->use_count--;
  VAR_1->label = ((void*)0);
 } else
  FUNC_2("PWM device already freed\n");

 FUNC_1(&VAR_0);
}
