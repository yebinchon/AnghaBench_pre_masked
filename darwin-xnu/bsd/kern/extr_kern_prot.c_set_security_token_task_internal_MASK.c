
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef TYPE_3__* uthread_t ;
typedef scalar_t__ task_t ;
struct TYPE_24__ {scalar_t__* val; } ;
typedef TYPE_4__ security_token_t ;
typedef TYPE_5__* proc_t ;
typedef TYPE_6__* posix_cred_t ;
typedef TYPE_7__* kauth_cred_t ;
typedef scalar_t__ host_priv_t ;
struct TYPE_28__ {int * val; } ;
typedef TYPE_8__ audit_token_t ;
struct TYPE_22__ {TYPE_1__* as_aia_p; } ;
struct TYPE_27__ {TYPE_2__ cr_audit; } ;
struct TYPE_26__ {int cr_rgid; int cr_ruid; int cr_gid; int cr_uid; } ;
struct TYPE_25__ {int p_idversion; int p_pid; } ;
struct TYPE_23__ {int uu_flag; } ;
struct TYPE_21__ {int ai_asid; int ai_auid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,scalar_t__,TYPE_4__,TYPE_8__,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_7__*) ;
 scalar_t__ FUNC_8 (TYPE_7__*) ;
 TYPE_7__* FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_7__**) ;
 scalar_t__ FUNC_11 (TYPE_7__*) ;
 TYPE_6__* FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (scalar_t__) ;

int
FUNC_14(proc_t VAR_3, void *VAR_4)
{
 security_token_t VAR_5;
 audit_token_t VAR_6;
 kauth_cred_t VAR_7;
 posix_cred_t VAR_8;
 host_priv_t VAR_9;
 task_t VAR_10 = VAR_4;







 if (VAR_10 == FUNC_1()) {
  uthread_t VAR_11;
  VAR_11 = (uthread_t)FUNC_3(FUNC_2());
  if (VAR_11->uu_flag & VAR_2)
   return (1);
 }

 VAR_7 = FUNC_9(VAR_3);
 VAR_8 = FUNC_12(VAR_7);


 if (FUNC_0(VAR_7)) {
  VAR_5.val[0] = FUNC_8(VAR_7);
  VAR_5.val[1] = FUNC_7(VAR_7);
 } else {
  VAR_5.val[0] = 0;
  VAR_5.val[1] = 0;
 }
 VAR_6.val[0] = VAR_7->cr_audit.as_aia_p->ai_auid;
 VAR_6.val[1] = VAR_8->cr_uid;
 VAR_6.val[2] = VAR_8->cr_gid;
 VAR_6.val[3] = VAR_8->cr_ruid;
 VAR_6.val[4] = VAR_8->cr_rgid;
 VAR_6.val[5] = VAR_3->p_pid;
 VAR_6.val[6] = VAR_7->cr_audit.as_aia_p->ai_asid;
 VAR_6.val[7] = VAR_3->p_idversion;

 VAR_9 = (VAR_5.val[0]) ? VAR_0 : FUNC_4();




 FUNC_10(&VAR_7);
 return (FUNC_6(FUNC_5(),
        VAR_10,
        VAR_5,
        VAR_6,
        VAR_9) != VAR_1);
}
