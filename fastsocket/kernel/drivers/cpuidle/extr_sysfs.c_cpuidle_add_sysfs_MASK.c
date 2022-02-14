
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int id; int kobj; } ;
struct cpuidle_device {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 struct cpuidle_device* FUNC_2 (int ,int) ;

int FUNC_3(struct sys_device *VAR_3)
{
 int VAR_4 = VAR_3->id;
 struct cpuidle_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1, VAR_4);
 VAR_6 = FUNC_0(&VAR_5->kobj, &VAR_2, &VAR_3->kobj,
         "cpuidle");
 if (!VAR_6)
  FUNC_1(&VAR_5->kobj, VAR_0);
 return VAR_6;
}
