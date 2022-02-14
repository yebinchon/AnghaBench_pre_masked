
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int running; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (struct pwm_device*) ;

int FUNC_5(struct pwm_device *VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;

 FUNC_3(VAR_2);

 VAR_3 = FUNC_0(VAR_0);
 VAR_3 |= FUNC_4(VAR_1);
 FUNC_1(VAR_3, VAR_0);

 FUNC_2(VAR_2);

 VAR_1->running = 1;
 return 0;
}
