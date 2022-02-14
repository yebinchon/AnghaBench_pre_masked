
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_binprm {scalar_t__ interp; scalar_t__ filename; scalar_t__ cred; } ;
struct TYPE_2__ {int cred_guard_mutex; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct linux_binprm*) ;
 int FUNC_2 (struct linux_binprm*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct linux_binprm *VAR_1)
{
 FUNC_1(VAR_1);
 if (VAR_1->cred) {
  FUNC_3(&VAR_0->cred_guard_mutex);
  FUNC_0(VAR_1->cred);
 }

 if (VAR_1->interp != VAR_1->filename)
  FUNC_2(VAR_1->interp);
 FUNC_2(VAR_1);
}
