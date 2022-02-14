
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int duty_ns; int period_ns; int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct pwm_device *VAR_2)
{
 VAR_2->duty_ns = -1;
 VAR_2->period_ns = -1;

 FUNC_1(&VAR_1);
 FUNC_0(&VAR_2->list, &VAR_0);
 FUNC_2(&VAR_1);

 return 0;
}
