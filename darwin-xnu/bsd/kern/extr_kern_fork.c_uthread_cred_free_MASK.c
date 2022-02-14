
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef int kauth_cred_t ;
struct TYPE_2__ {int uu_ucred; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(void *VAR_1)
{
 uthread_t VAR_2 = (uthread_t)VAR_1;


 if (FUNC_0(VAR_2->uu_ucred)) {
  kauth_cred_t VAR_3 = VAR_2->uu_ucred;
  VAR_2->uu_ucred = VAR_0;
  FUNC_1(&VAR_3);
 }
}
