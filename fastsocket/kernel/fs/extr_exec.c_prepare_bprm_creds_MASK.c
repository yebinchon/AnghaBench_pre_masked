
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_binprm {int cred; } ;
struct TYPE_2__ {int cred_guard_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

int FUNC_4(struct linux_binprm *VAR_3)
{
 if (FUNC_1(&VAR_2->cred_guard_mutex))
  return -VAR_1;

 VAR_3->cred = FUNC_3();
 if (FUNC_0(VAR_3->cred))
  return 0;

 FUNC_2(&VAR_2->cred_guard_mutex);
 return -VAR_0;
}
