
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpuidle_driver* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct cpuidle_driver *VAR_4)
{
 if (!VAR_4)
  return -VAR_1;

 FUNC_0(&VAR_3);
 if (VAR_2) {
  FUNC_1(&VAR_3);
  return -VAR_0;
 }
 VAR_2 = VAR_4;
 FUNC_1(&VAR_3);

 return 0;
}
