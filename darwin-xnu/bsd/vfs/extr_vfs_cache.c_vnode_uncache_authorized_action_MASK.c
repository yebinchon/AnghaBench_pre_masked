
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef scalar_t__ kauth_cred_t ;
typedef int kauth_action_t ;
struct TYPE_3__ {scalar_t__ v_cred; int v_authorized_actions; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__*) ;

void FUNC_4(vnode_t VAR_2, kauth_action_t VAR_3)
{
        kauth_cred_t VAR_4 = VAR_1;

 FUNC_1();

 VAR_2->v_authorized_actions &= ~VAR_3;

 if (VAR_3 == VAR_0 &&
     FUNC_0(VAR_2->v_cred)) {



         VAR_4 = VAR_2->v_cred;
  VAR_2->v_cred = VAR_1;
 }
 FUNC_2();

 if (VAR_4 != VAR_1)
  FUNC_3(&VAR_4);
}
