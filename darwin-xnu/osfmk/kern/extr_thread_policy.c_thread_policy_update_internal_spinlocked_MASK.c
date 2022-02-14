
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_2__* thread_t ;
typedef TYPE_3__* task_pend_token_t ;
struct thread_requested_policy {int thrp_qos; int thrp_qos_override; int thrp_qos_promote; int thrp_qos_ipc_override; int thrp_qos_workq_override; int thrp_qos_sync_ipc_override; scalar_t__ thrp_qos_relprio; int thrp_int_iotier; int thrp_ext_iotier; int thrp_latency_qos; int thrp_through_qos; scalar_t__ thrp_terminated; scalar_t__ thrp_int_iopassive; scalar_t__ thrp_ext_iopassive; scalar_t__ thrp_pidbind_bg; scalar_t__ thrp_ext_darwinbg; scalar_t__ thrp_int_darwinbg; } ;
struct thread_effective_policy {scalar_t__ thep_qos_ui_is_urgent; int thep_qos; int thep_qos_promote; scalar_t__ thep_qos_relprio; int thep_darwinbg; int thep_new_sockets_bg; int thep_all_sockets_bg; int thep_io_tier; int thep_io_passive; int thep_latency_qos; int thep_through_qos; int thep_terminated; } ;
struct task_effective_policy {scalar_t__ tep_qos_ui_is_urgent; int tep_qos_clamp; int tep_qos_ceiling; int tep_bg_iotier; int tep_io_tier; int tep_latency_qos; int tep_through_qos; scalar_t__ tep_terminated; scalar_t__ tep_io_passive; scalar_t__ tep_new_sockets_bg; scalar_t__ tep_darwinbg; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {int* qos_iotier; int* qos_latency_qos; int* qos_through_qos; } ;
struct TYPE_11__ {int tpt_update_sockets; int tpt_update_throttle; int tpt_update_thread_sfi; int tpt_force_recompute_pri; } ;
struct TYPE_10__ {struct thread_effective_policy effective_policy; TYPE_1__* task; struct thread_requested_policy requested_policy; } ;
struct TYPE_9__ {struct task_effective_policy effective_policy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 TYPE_6__ VAR_8 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(thread_t VAR_9, boolean_t VAR_10,
                                         task_pend_token_t VAR_11)
{





 struct thread_requested_policy VAR_12 = VAR_9->requested_policy;
 struct task_effective_policy VAR_13 = VAR_9->task->effective_policy;
 struct thread_effective_policy VAR_14 = {};

 VAR_14.thep_qos_ui_is_urgent = VAR_13.tep_qos_ui_is_urgent;

 uint32_t VAR_15 = VAR_12.thrp_qos;

 if (VAR_12.thrp_qos != VAR_4) {
  VAR_15 = FUNC_0(VAR_12.thrp_qos_override, VAR_15);
  VAR_15 = FUNC_0(VAR_12.thrp_qos_promote, VAR_15);
  VAR_15 = FUNC_0(VAR_12.thrp_qos_ipc_override, VAR_15);
  VAR_15 = FUNC_0(VAR_12.thrp_qos_workq_override, VAR_15);
 }

 VAR_14.thep_qos = VAR_15;


 if (VAR_13.tep_qos_clamp != VAR_4) {
  if (VAR_14.thep_qos != VAR_4)
   VAR_14.thep_qos = FUNC_1(VAR_13.tep_qos_clamp, VAR_14.thep_qos);
  else
   VAR_14.thep_qos = VAR_13.tep_qos_clamp;
 }





 VAR_14.thep_qos_promote = VAR_14.thep_qos;


 if (VAR_13.tep_qos_ceiling != VAR_4 &&
     VAR_14.thep_qos != VAR_4) {
  VAR_14.thep_qos = FUNC_1(VAR_13.tep_qos_ceiling, VAR_14.thep_qos);
 }


 FUNC_2(VAR_12.thrp_qos_sync_ipc_override == VAR_4);
 if ((VAR_12.thrp_qos != VAR_4) &&
     (VAR_12.thrp_qos == VAR_14.thep_qos) &&
     (VAR_12.thrp_qos_override == VAR_4)) {
  VAR_14.thep_qos_relprio = VAR_12.thrp_qos_relprio;
 } else {
  VAR_14.thep_qos_relprio = 0;
 }


 boolean_t VAR_16 = VAR_0;
 boolean_t VAR_17 = VAR_0;







 if (VAR_12.thrp_int_darwinbg || VAR_12.thrp_ext_darwinbg)
  VAR_17 = VAR_16 = VAR_7;

 if (VAR_12.thrp_pidbind_bg)
  VAR_17 = VAR_16 = VAR_7;

 if (VAR_13.tep_darwinbg)
  VAR_16 = VAR_7;

 if (VAR_14.thep_qos == VAR_2 ||
     VAR_14.thep_qos == VAR_3)
  VAR_16 = VAR_7;



 if (VAR_16)
  VAR_14.thep_darwinbg = 1;

 if (VAR_14.thep_darwinbg || VAR_13.tep_new_sockets_bg)
  VAR_14.thep_new_sockets_bg = 1;


 if (VAR_17)
  VAR_14.thep_all_sockets_bg = 1;


 if (VAR_14.thep_darwinbg &&
     (VAR_14.thep_qos > VAR_2 || VAR_14.thep_qos == VAR_4)) {
  VAR_14.thep_qos = VAR_2;
  VAR_14.thep_qos_relprio = 0;
 }



 int VAR_18 = VAR_5;


 if (VAR_14.thep_darwinbg)
  VAR_18 = FUNC_0(VAR_18, VAR_13.tep_bg_iotier);

 VAR_18 = FUNC_0(VAR_18, VAR_13.tep_io_tier);


 VAR_18 = FUNC_0(VAR_18, VAR_8.qos_iotier[VAR_14.thep_qos]);

 VAR_18 = FUNC_0(VAR_18, VAR_12.thrp_int_iotier);
 VAR_18 = FUNC_0(VAR_18, VAR_12.thrp_ext_iotier);

 VAR_14.thep_io_tier = VAR_18;






 boolean_t VAR_19 = VAR_0;
 if (VAR_8.qos_iotier[VAR_14.thep_qos] <
     VAR_8.qos_iotier[VAR_12.thrp_qos])
  VAR_19 = VAR_7;


 if (VAR_12.thrp_ext_iopassive ||
     VAR_12.thrp_int_iopassive ||
     VAR_19 ||
     VAR_13.tep_io_passive )
  VAR_14.thep_io_passive = 1;


 uint32_t VAR_20 = VAR_12.thrp_latency_qos;

 VAR_20 = FUNC_0(VAR_20, VAR_13.tep_latency_qos);
 VAR_20 = FUNC_0(VAR_20, VAR_8.qos_latency_qos[VAR_14.thep_qos]);

 VAR_14.thep_latency_qos = VAR_20;


 uint32_t VAR_21 = VAR_12.thrp_through_qos;

 VAR_21 = FUNC_0(VAR_21, VAR_13.tep_through_qos);
 VAR_21 = FUNC_0(VAR_21, VAR_8.qos_through_qos[VAR_14.thep_qos]);

 VAR_14.thep_through_qos = VAR_21;

 if (VAR_13.tep_terminated || VAR_12.thrp_terminated) {

  VAR_14.thep_terminated = 1;
  VAR_14.thep_darwinbg = 0;
  VAR_14.thep_io_tier = VAR_5;
  VAR_14.thep_qos = VAR_4;
  VAR_14.thep_latency_qos = VAR_1;
  VAR_14.thep_through_qos = VAR_6;
 }






 struct thread_effective_policy VAR_22 = VAR_9->effective_policy;

 FUNC_4(VAR_9);


 VAR_9->effective_policy = VAR_14;






 if (VAR_22.thep_all_sockets_bg != VAR_14.thep_all_sockets_bg)
  VAR_11->tpt_update_sockets = 1;


 if (VAR_22.thep_io_tier != VAR_14.thep_io_tier)
  VAR_11->tpt_update_throttle = 1;





 if (VAR_22.thep_qos != VAR_14.thep_qos ||
     VAR_22.thep_darwinbg != VAR_14.thep_darwinbg )
  VAR_11->tpt_update_thread_sfi = 1;







 if (VAR_22.thep_qos != VAR_14.thep_qos ||
     VAR_22.thep_qos_relprio != VAR_14.thep_qos_relprio ||
     VAR_22.thep_qos_ui_is_urgent != VAR_14.thep_qos_ui_is_urgent ||
     VAR_22.thep_terminated != VAR_14.thep_terminated ||
     VAR_11->tpt_force_recompute_pri == 1 ||
     VAR_10) {
  FUNC_3(VAR_9);
 }
}
