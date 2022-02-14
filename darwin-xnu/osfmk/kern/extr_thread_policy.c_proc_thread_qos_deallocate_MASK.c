
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct thread_qos_override {struct thread_qos_override* override_next; } ;
struct TYPE_6__ {scalar_t__ thrp_qos_ipc_override; scalar_t__ thrp_qos_sync_ipc_override; scalar_t__ thrp_qos_override; } ;
struct TYPE_7__ {scalar_t__ ipc_overrides; scalar_t__ sync_ipc_overrides; TYPE_1__ requested_policy; struct thread_qos_override* overrides; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct thread_qos_override*) ;

void FUNC_4(thread_t VAR_2)
{

 FUNC_0(VAR_2->ipc_overrides == 0);
 FUNC_0(VAR_2->requested_policy.thrp_qos_ipc_override == VAR_0);
 FUNC_0(VAR_2->sync_ipc_overrides == 0);
 FUNC_0(VAR_2->requested_policy.thrp_qos_sync_ipc_override == VAR_0);




 struct thread_qos_override *VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = VAR_2->overrides;
 VAR_2->overrides = ((void*)0);
 VAR_2->requested_policy.thrp_qos_override = VAR_0;

 FUNC_2(VAR_2);

 while (VAR_3) {
  struct thread_qos_override *VAR_4 = VAR_3->override_next;

  FUNC_3(VAR_1, VAR_3);
  VAR_3 = VAR_4;
 }
}
