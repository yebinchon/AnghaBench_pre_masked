
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef TYPE_2__* proc_t ;
typedef scalar_t__ kauth_cred_t ;
struct TYPE_7__ {scalar_t__ p_ucred; } ;
struct TYPE_6__ {scalar_t__ uu_ucred; int uu_flag; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__*) ;

void
FUNC_3(uthread_t VAR_1, proc_t VAR_2)
{
 if (VAR_1->uu_ucred != VAR_2->p_ucred &&
     (VAR_1->uu_flag & VAR_0) == 0) {
  kauth_cred_t VAR_3 = VAR_1->uu_ucred;
  VAR_1->uu_ucred = FUNC_1(VAR_2);
  if (FUNC_0(VAR_3))
   FUNC_2(&VAR_3);
 }
}
