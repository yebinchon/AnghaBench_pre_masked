
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {int dummy; } ;


 int FUNC_0 (struct cpuidle_device*) ;
 int FUNC_1 (struct cpuidle_device*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct cpuidle_device *VAR_1)
{
 int VAR_2;

 FUNC_3(&VAR_0);

 if ((VAR_2 = FUNC_0(VAR_1))) {
  FUNC_4(&VAR_0);
  return VAR_2;
 }

 FUNC_1(VAR_1);
 FUNC_2();

 FUNC_4(&VAR_0);

 return 0;

}
