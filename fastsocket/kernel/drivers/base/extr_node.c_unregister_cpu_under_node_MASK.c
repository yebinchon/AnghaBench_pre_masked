
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sys_device {int kobj; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ sysdev; } ;


 struct sys_device* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(unsigned int VAR_1, unsigned int VAR_2)
{
 struct sys_device *VAR_3;

 if (!FUNC_2(VAR_2))
  return 0;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return 0;

 FUNC_3(&VAR_0[VAR_2].sysdev.kobj,
     FUNC_1(&VAR_3->kobj));
 FUNC_3(&VAR_3->kobj,
     FUNC_1(&VAR_0[VAR_2].sysdev.kobj));

 return 0;
}
