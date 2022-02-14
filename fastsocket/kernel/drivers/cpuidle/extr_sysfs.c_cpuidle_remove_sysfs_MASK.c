
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int id; } ;
struct cpuidle_device {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cpuidle_device* FUNC_1 (int ,int) ;

void FUNC_2(struct sys_device *VAR_1)
{
 int VAR_2 = VAR_1->id;
 struct cpuidle_device *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 FUNC_0(&VAR_3->kobj);
}
