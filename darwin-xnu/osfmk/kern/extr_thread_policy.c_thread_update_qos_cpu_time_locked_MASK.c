
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_5__* thread_t ;
typedef TYPE_6__* task_t ;
struct TYPE_10__ {scalar_t__ cpu_time_qos_user_interactive; scalar_t__ cpu_time_qos_user_initiated; scalar_t__ cpu_time_qos_legacy; scalar_t__ cpu_time_qos_utility; scalar_t__ cpu_time_qos_background; scalar_t__ cpu_time_qos_maintenance; scalar_t__ cpu_time_qos_default; } ;
struct TYPE_8__ {scalar_t__ cpu_time_qos_user_interactive; scalar_t__ cpu_time_qos_user_initiated; scalar_t__ cpu_time_qos_legacy; scalar_t__ cpu_time_qos_utility; scalar_t__ cpu_time_qos_background; scalar_t__ cpu_time_qos_maintenance; scalar_t__ cpu_time_qos_default; } ;
struct TYPE_13__ {TYPE_3__ cpu_time_rqos_stats; TYPE_1__ cpu_time_eqos_stats; } ;
struct TYPE_11__ {int thrp_qos; } ;
struct TYPE_9__ {int thep_qos; } ;
struct TYPE_12__ {TYPE_4__ requested_policy; TYPE_2__ effective_policy; scalar_t__ vtimer_qos_save; int system_timer; int user_timer; TYPE_6__* task; } ;


 int FUNC_0 (scalar_t__,scalar_t__*) ;







 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(thread_t VAR_0)
{
 task_t VAR_1 = VAR_0->task;
 uint64_t VAR_2, VAR_3;
 VAR_2 = FUNC_2(&VAR_0->user_timer);
 VAR_2 += FUNC_2(&VAR_0->system_timer);
 VAR_3 = VAR_2 - VAR_0->vtimer_qos_save;

 VAR_0->vtimer_qos_save = VAR_2;

 uint64_t* VAR_4 = ((void*)0);


 switch (VAR_0->effective_policy.thep_qos) {
  case 131: VAR_4 = &VAR_1->cpu_time_eqos_stats.cpu_time_qos_default; break;
  case 132: VAR_4 = &VAR_1->cpu_time_eqos_stats.cpu_time_qos_maintenance; break;
  case 134: VAR_4 = &VAR_1->cpu_time_eqos_stats.cpu_time_qos_background; break;
  case 128: VAR_4 = &VAR_1->cpu_time_eqos_stats.cpu_time_qos_utility; break;
  case 133: VAR_4 = &VAR_1->cpu_time_eqos_stats.cpu_time_qos_legacy; break;
  case 130: VAR_4 = &VAR_1->cpu_time_eqos_stats.cpu_time_qos_user_initiated; break;
  case 129: VAR_4 = &VAR_1->cpu_time_eqos_stats.cpu_time_qos_user_interactive; break;
  default:
   FUNC_1("unknown effective QoS: %d", VAR_0->effective_policy.thep_qos);
 }

 FUNC_0(VAR_3, VAR_4);


 switch (VAR_0->requested_policy.thrp_qos) {
  case 131: VAR_4 = &VAR_1->cpu_time_rqos_stats.cpu_time_qos_default; break;
  case 132: VAR_4 = &VAR_1->cpu_time_rqos_stats.cpu_time_qos_maintenance; break;
  case 134: VAR_4 = &VAR_1->cpu_time_rqos_stats.cpu_time_qos_background; break;
  case 128: VAR_4 = &VAR_1->cpu_time_rqos_stats.cpu_time_qos_utility; break;
  case 133: VAR_4 = &VAR_1->cpu_time_rqos_stats.cpu_time_qos_legacy; break;
  case 130: VAR_4 = &VAR_1->cpu_time_rqos_stats.cpu_time_qos_user_initiated; break;
  case 129: VAR_4 = &VAR_1->cpu_time_rqos_stats.cpu_time_qos_user_interactive; break;
  default:
   FUNC_1("unknown requested QoS: %d", VAR_0->requested_policy.thrp_qos);
 }

 FUNC_0(VAR_3, VAR_4);
}
