
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef TYPE_2__* thread_time_constraint_policy_t ;
typedef int thread_throughput_qos_t ;
typedef TYPE_3__* thread_throughput_qos_policy_t ;
typedef TYPE_4__* thread_t ;
typedef TYPE_5__* thread_qos_policy_t ;
typedef TYPE_6__* thread_precedence_policy_t ;
typedef int thread_policy_t ;
typedef int thread_policy_flavor_t ;
typedef int thread_latency_qos_t ;
typedef TYPE_7__* thread_latency_qos_policy_t ;
typedef TYPE_8__* thread_extended_policy_t ;
typedef TYPE_9__* thread_background_policy_t ;
typedef TYPE_10__* thread_affinity_policy_t ;
struct task_pend_token {int tpt_update_thread_sfi; } ;
typedef int spl_t ;
typedef int sched_mode_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_31__ {int priority; } ;
struct TYPE_30__ {int timeshare; } ;
struct TYPE_29__ {int thread_latency_qos_tier; } ;
struct TYPE_28__ {int importance; } ;
struct TYPE_27__ {int qos_tier; int tier_importance; } ;
struct TYPE_23__ {int preemptible; int constraint; int computation; int period; } ;
struct TYPE_26__ {int task; int importance; TYPE_1__ realtime; int active; } ;
struct TYPE_25__ {int thread_throughput_qos_tier; } ;
struct TYPE_24__ {int preemptible; int constraint; int computation; int period; } ;
struct TYPE_22__ {int affinity_tag; } ;


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

 int VAR_18 ;

 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

 int VAR_22 ;
 int VAR_23 ;

 int VAR_24 ;

 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 () ;
 TYPE_4__* FUNC_1 () ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (TYPE_4__*,int,int ,int,int ,struct task_pend_token*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,struct task_pend_token*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (TYPE_4__*) ;

kern_return_t
FUNC_17(
                           thread_t VAR_32,
                           thread_policy_flavor_t VAR_33,
                           thread_policy_t VAR_34,
                           mach_msg_type_number_t VAR_35)
{
 kern_return_t VAR_36 = VAR_3;
 struct task_pend_token VAR_37 = {};

 FUNC_11(VAR_32);
 if (!VAR_32->active) {
  FUNC_12(VAR_32);

  return (VAR_4);
 }

 switch (VAR_33) {

 case 133:
 {
  boolean_t VAR_38 = VAR_29;

  if (VAR_35 >= VAR_17) {
   thread_extended_policy_t VAR_39;

   VAR_39 = (thread_extended_policy_t)VAR_34;
   VAR_38 = VAR_39->timeshare;
  }

  sched_mode_t VAR_40 = (VAR_38 == VAR_29) ? VAR_28 : VAR_26;

  spl_t VAR_41 = FUNC_6();
  FUNC_10(VAR_32);

  FUNC_15(VAR_32, VAR_40);

  FUNC_16(VAR_32);
  FUNC_7(VAR_41);

  VAR_37.tpt_update_thread_sfi = 1;

  break;
 }

 case 128:
 {
  thread_time_constraint_policy_t VAR_42;

  if (VAR_35 < VAR_25) {
   VAR_36 = VAR_0;
   break;
  }

  VAR_42 = (thread_time_constraint_policy_t)VAR_34;
  if (VAR_42->constraint < VAR_42->computation ||
      VAR_42->computation > VAR_30 ||
      VAR_42->computation < VAR_31 ) {
   VAR_36 = VAR_0;
   break;
  }

  spl_t VAR_43 = FUNC_6();
  FUNC_10(VAR_32);

  VAR_32->realtime.period = VAR_42->period;
  VAR_32->realtime.computation = VAR_42->computation;
  VAR_32->realtime.constraint = VAR_42->constraint;
  VAR_32->realtime.preemptible = VAR_42->preemptible;

  FUNC_15(VAR_32, VAR_27);

  FUNC_16(VAR_32);
  FUNC_7(VAR_43);

  VAR_37.tpt_update_thread_sfi = 1;

  break;
 }

 case 131:
 {
  thread_precedence_policy_t VAR_44;

  if (VAR_35 < VAR_19) {
   VAR_36 = VAR_0;
   break;
  }
  VAR_44 = (thread_precedence_policy_t)VAR_34;

  spl_t VAR_45 = FUNC_6();
  FUNC_10(VAR_32);

  VAR_32->importance = VAR_44->importance;

  FUNC_14(VAR_32);

  FUNC_16(VAR_32);
  FUNC_7(VAR_45);

  break;
 }

 case 135:
 {
  thread_affinity_policy_t VAR_46;

  if (!FUNC_8()) {
   VAR_36 = VAR_1;
   break;
  }
  if (VAR_35 < VAR_14) {
   VAR_36 = VAR_0;
   break;
  }

  VAR_46 = (thread_affinity_policy_t) VAR_34;






  FUNC_12(VAR_32);
  return FUNC_9(VAR_32, VAR_46->affinity_tag);
 }
 case 129:
 {
  thread_throughput_qos_policy_t VAR_47 = (thread_throughput_qos_policy_t) VAR_34;
  thread_throughput_qos_t VAR_48;

  if (VAR_35 < VAR_24) {
   VAR_36 = VAR_0;
   break;
  }

  if ((VAR_36 = FUNC_5(VAR_47->thread_throughput_qos_tier)) != VAR_3)
   break;

  VAR_48 = FUNC_3(VAR_47->thread_throughput_qos_tier);

  FUNC_2(VAR_32, VAR_5,
                                VAR_13, VAR_48, 0, &VAR_37);

  break;
 }

 case 132:
 {
  thread_latency_qos_policy_t VAR_49 = (thread_latency_qos_policy_t) VAR_34;
  thread_latency_qos_t VAR_50;

  if (VAR_35 < VAR_18) {
   VAR_36 = VAR_0;
   break;
  }

  if ((VAR_36 = FUNC_4(VAR_49->thread_latency_qos_tier)) != VAR_3)
   break;

  VAR_50 = FUNC_3(VAR_49->thread_latency_qos_tier);

  FUNC_2(VAR_32, VAR_5,
                                VAR_11, VAR_50, 0, &VAR_37);

  break;
 }

 case 130:
 {
  thread_qos_policy_t VAR_51 = (thread_qos_policy_t)VAR_34;

  if (VAR_35 < VAR_22) {
   VAR_36 = VAR_0;
   break;
  }

  if (VAR_51->qos_tier < 0 || VAR_51->qos_tier >= VAR_20) {
   VAR_36 = VAR_0;
   break;
  }

  if (VAR_51->tier_importance > 0 || VAR_51->tier_importance < VAR_21) {
   VAR_36 = VAR_0;
   break;
  }

  if (VAR_51->qos_tier == VAR_23 && VAR_51->tier_importance != 0) {
   VAR_36 = VAR_0;
   break;
  }

  FUNC_2(VAR_32, VAR_5, VAR_12,
                                VAR_51->qos_tier, -VAR_51->tier_importance, &VAR_37);

  break;
 }

 default:
  VAR_36 = VAR_0;
  break;
 }

 FUNC_12(VAR_32);

 FUNC_13(VAR_32, &VAR_37);

 return (VAR_36);
}
