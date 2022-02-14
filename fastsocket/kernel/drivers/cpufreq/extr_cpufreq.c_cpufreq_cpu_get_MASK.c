
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int kobj; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_3 ;
 struct cpufreq_policy* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

struct cpufreq_policy *FUNC_6(unsigned int VAR_4)
{
 struct cpufreq_policy *VAR_5;
 unsigned long VAR_6;

 if (VAR_4 >= VAR_3)
  goto err_out;


 FUNC_3(&VAR_2, VAR_6);

 if (!VAR_1)
  goto err_out_unlock;

 if (!FUNC_5(VAR_1->owner))
  goto err_out_unlock;



 VAR_5 = FUNC_2(VAR_0, VAR_4);

 if (!VAR_5)
  goto err_out_put_module;

 if (!FUNC_0(&VAR_5->kobj))
  goto err_out_put_module;

 FUNC_4(&VAR_2, VAR_6);
 return VAR_5;

err_out_put_module:
 FUNC_1(VAR_1->owner);
err_out_unlock:
 FUNC_4(&VAR_2, VAR_6);
err_out:
 return ((void*)0);
}
