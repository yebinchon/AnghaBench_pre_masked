
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_2__* thread_t ;
struct task_pend_token {scalar_t__ tpt_update_sockets; } ;
typedef int spl_t ;
typedef int boolean_t ;
struct TYPE_8__ {scalar_t__ thrp_qos_ipc_override; } ;
struct TYPE_9__ {int ipc_overrides; TYPE_1__ requested_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,scalar_t__,int ,struct task_pend_token*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct task_pend_token*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(thread_t VAR_4,
                    uint32_t VAR_5,
                    boolean_t VAR_6)
{
 struct task_pend_token VAR_7 = {};
 boolean_t VAR_8;

 spl_t VAR_9 = FUNC_2();
 FUNC_4(VAR_4);

 uint32_t VAR_10 = VAR_4->requested_policy.thrp_qos_ipc_override;

 FUNC_0(VAR_5 > VAR_3);
 FUNC_0(VAR_5 < VAR_2);

 if (VAR_6) {
  if (VAR_4->ipc_overrides++ == 0) {

   FUNC_0(VAR_10 == VAR_3);
  } else {

   FUNC_0(VAR_10 > VAR_3);
  }
 } else {

  FUNC_0(VAR_4->ipc_overrides > 0);
  FUNC_0(VAR_10 > VAR_3);
 }





 if (VAR_4->ipc_overrides == 1) {
  VAR_8 = VAR_5 != VAR_10;
 } else {
  VAR_8 = VAR_5 > VAR_10;
 }

 if (VAR_8) {
  FUNC_1(VAR_4, VAR_0,
                                    VAR_1,
                                    VAR_5, 0, &VAR_7);
  FUNC_0(VAR_7.tpt_update_sockets == 0);
 }

 FUNC_6(VAR_4);
 FUNC_3(VAR_9);

 FUNC_5(VAR_4, &VAR_7);
}
