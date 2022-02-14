
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* task_t ;
struct task_effective_policy {scalar_t__ tep_qos_ceiling; scalar_t__ tep_sfi_managed; scalar_t__ tep_through_qos; scalar_t__ tep_latency_qos; scalar_t__ tep_role; scalar_t__ tep_suppressed_cpu; scalar_t__ tep_sup_active; scalar_t__ tep_watchers_bg; scalar_t__ tep_tal_engaged; scalar_t__ tep_qos_ui_is_urgent; scalar_t__ tep_bg_iotier; scalar_t__ tep_new_sockets_bg; scalar_t__ tep_all_sockets_bg; scalar_t__ tep_terminated; scalar_t__ tep_lowpri_cpu; scalar_t__ tep_darwinbg; scalar_t__ tep_io_passive; scalar_t__ tep_io_tier; } ;
struct TYPE_3__ {struct task_effective_policy effective_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

uint64_t
FUNC_0(task_t VAR_18)
{
 uint64_t VAR_19 = 0;
 struct task_effective_policy VAR_20 = VAR_18->effective_policy;

 VAR_19 |= (VAR_20.tep_io_tier ? (((uint64_t)VAR_20.tep_io_tier) << VAR_4) : 0);
 VAR_19 |= (VAR_20.tep_io_passive ? VAR_3 : 0);
 VAR_19 |= (VAR_20.tep_darwinbg ? VAR_2 : 0);
 VAR_19 |= (VAR_20.tep_lowpri_cpu ? VAR_6 : 0);
 VAR_19 |= (VAR_20.tep_terminated ? VAR_15 : 0);
 VAR_19 |= (VAR_20.tep_all_sockets_bg ? VAR_0 : 0);
 VAR_19 |= (VAR_20.tep_new_sockets_bg ? VAR_7 : 0);
 VAR_19 |= (VAR_20.tep_bg_iotier ? (((uint64_t)VAR_20.tep_bg_iotier) << VAR_1) : 0);
 VAR_19 |= (VAR_20.tep_qos_ui_is_urgent ? VAR_9 : 0);

 VAR_19 |= (VAR_20.tep_tal_engaged ? VAR_14 : 0);
 VAR_19 |= (VAR_20.tep_watchers_bg ? VAR_17 : 0);
 VAR_19 |= (VAR_20.tep_sup_active ? VAR_12 : 0);
 VAR_19 |= (VAR_20.tep_suppressed_cpu ? VAR_13 : 0);
 VAR_19 |= (VAR_20.tep_role ? (((uint64_t)VAR_20.tep_role) << VAR_10) : 0);
 VAR_19 |= (VAR_20.tep_latency_qos ? (((uint64_t)VAR_20.tep_latency_qos) << VAR_5) : 0);
 VAR_19 |= (VAR_20.tep_through_qos ? (((uint64_t)VAR_20.tep_through_qos) << VAR_16) : 0);
 VAR_19 |= (VAR_20.tep_sfi_managed ? VAR_11 : 0);
 VAR_19 |= (VAR_20.tep_qos_ceiling ? (((uint64_t)VAR_20.tep_qos_ceiling) << VAR_8) : 0);

 return VAR_19;
}
