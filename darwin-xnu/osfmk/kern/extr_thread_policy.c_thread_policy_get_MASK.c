
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_21__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef void* uint64_t ;
typedef TYPE_3__* thread_time_constraint_policy_t ;
typedef void* thread_throughput_qos_t ;
typedef TYPE_4__* thread_throughput_qos_policy_t ;
typedef TYPE_5__* thread_t ;
typedef TYPE_6__* thread_qos_policy_t ;
typedef TYPE_7__* thread_precedence_policy_t ;
typedef scalar_t__ thread_policy_t ;
typedef TYPE_8__* thread_policy_state_t ;
typedef int thread_policy_flavor_t ;
typedef void* thread_latency_qos_t ;
typedef TYPE_9__* thread_latency_qos_policy_t ;
typedef TYPE_10__* thread_extended_policy_t ;
typedef TYPE_11__* thread_affinity_policy_t ;
typedef int spl_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_34__ {int thread_latency_qos_tier; } ;
struct TYPE_33__ {int pending; int effective; int requested; int thps_ipc_overrides; int thps_user_promotion_basepri; int thps_user_promotions; void* thps_effective_policy; void* thps_requested_policy; int flags; } ;
struct TYPE_32__ {int importance; } ;
struct TYPE_31__ {int tier_importance; void* qos_tier; } ;
struct TYPE_25__ {void* preemptible; int constraint; int computation; int period; } ;
struct TYPE_30__ {int sched_flags; int ipc_overrides; int user_promotion_basepri; int effective_policy; int requested_policy; int static_param; int importance; TYPE_1__ realtime; int saved_mode; int sched_mode; int active; } ;
struct TYPE_29__ {int thread_throughput_qos_tier; } ;
struct TYPE_28__ {void* preemptible; int constraint; int computation; int period; } ;
struct TYPE_27__ {int * val; } ;
struct TYPE_26__ {TYPE_2__ sec_token; } ;
struct TYPE_24__ {int affinity_tag; } ;
struct TYPE_23__ {int timeshare; } ;


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
 TYPE_5__* VAR_13 ;

 int VAR_14 ;
 int VAR_15 ;

 int VAR_16 ;

 int VAR_17 ;
 void* VAR_18 ;

 int VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 TYPE_21__* FUNC_0 () ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (TYPE_5__*,TYPE_8__*) ;
 void* FUNC_2 (TYPE_5__*,int ,int ,int*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;

kern_return_t
FUNC_13(
 thread_t VAR_27,
 thread_policy_flavor_t VAR_28,
 thread_policy_t VAR_29,
 mach_msg_type_number_t *VAR_30,
 boolean_t *VAR_31)
{
 kern_return_t VAR_32 = VAR_3;

 if (VAR_27 == VAR_13)
  return (VAR_0);

 FUNC_10(VAR_27);
 if (!VAR_27->active) {
  FUNC_11(VAR_27);

  return (VAR_4);
 }

 switch (VAR_28) {

 case 134:
 {
  boolean_t VAR_33 = VAR_24;

  if (!(*VAR_31)) {
   spl_t VAR_34 = FUNC_5();
   FUNC_9(VAR_27);

   if ( (VAR_27->sched_mode != VAR_21) &&
      (VAR_27->saved_mode != VAR_21) ) {
    if (!(VAR_27->sched_flags & VAR_23))
     VAR_33 = (VAR_27->sched_mode == VAR_22) != 0;
    else
     VAR_33 = (VAR_27->saved_mode == VAR_22) != 0;
   }
   else
    *VAR_31 = VAR_24;

   FUNC_12(VAR_27);
   FUNC_6(VAR_34);
  }

  if (*VAR_30 >= VAR_11) {
   thread_extended_policy_t VAR_35;

   VAR_35 = (thread_extended_policy_t)VAR_29;
   VAR_35->timeshare = VAR_33;
  }

  break;
 }

 case 128:
 {
  thread_time_constraint_policy_t VAR_36;

  if (*VAR_30 < VAR_20) {
   VAR_32 = VAR_0;
   break;
  }

  VAR_36 = (thread_time_constraint_policy_t)VAR_29;

  if (!(*VAR_31)) {
   spl_t VAR_37 = FUNC_5();
   FUNC_9(VAR_27);

   if ( (VAR_27->sched_mode == VAR_21) ||
     (VAR_27->saved_mode == VAR_21) ) {
    VAR_36->period = VAR_27->realtime.period;
    VAR_36->computation = VAR_27->realtime.computation;
    VAR_36->constraint = VAR_27->realtime.constraint;
    VAR_36->preemptible = VAR_27->realtime.preemptible;
   }
   else
    *VAR_31 = VAR_24;

   FUNC_12(VAR_27);
   FUNC_6(VAR_37);
  }

  if (*VAR_31) {
   VAR_36->period = 0;
   VAR_36->computation = VAR_25;
   VAR_36->constraint = VAR_26;
   VAR_36->preemptible = VAR_24;
  }

  break;
 }

 case 131:
 {
  thread_precedence_policy_t VAR_38;

  if (*VAR_30 < VAR_16) {
   VAR_32 = VAR_0;
   break;
  }

  VAR_38 = (thread_precedence_policy_t)VAR_29;

  if (!(*VAR_31)) {
   spl_t VAR_39 = FUNC_5();
   FUNC_9(VAR_27);

   VAR_38->importance = VAR_27->importance;

   FUNC_12(VAR_27);
   FUNC_6(VAR_39);
  }
  else
   VAR_38->importance = 0;

  break;
 }

 case 135:
 {
  thread_affinity_policy_t VAR_40;

  if (!FUNC_8()) {
   VAR_32 = VAR_1;
   break;
  }
  if (*VAR_30 < VAR_9) {
   VAR_32 = VAR_0;
   break;
  }

  VAR_40 = (thread_affinity_policy_t)VAR_29;

  if (!(*VAR_31))
   VAR_40->affinity_tag = FUNC_7(VAR_27);
  else
   VAR_40->affinity_tag = VAR_10;

  break;
 }

 case 132:
 {
  thread_policy_state_t VAR_41;

  if (*VAR_30 < VAR_14) {
   VAR_32 = VAR_0;
   break;
  }


  if (FUNC_0()->sec_token.val[0] != 0) {
   VAR_32 = VAR_2;
   break;
  }

  VAR_41 = (thread_policy_state_t)(void*)VAR_29;

  if (!(*VAR_31)) {
   VAR_41->flags = 0;

   spl_t VAR_42 = FUNC_5();
   FUNC_9(VAR_27);

   VAR_41->flags |= (VAR_27->static_param ? VAR_15 : 0);

   VAR_41->thps_requested_policy = *(uint64_t*)(void*)(&VAR_27->requested_policy);
   VAR_41->thps_effective_policy = *(uint64_t*)(void*)(&VAR_27->effective_policy);

   VAR_41->thps_user_promotions = 0;
   VAR_41->thps_user_promotion_basepri = VAR_27->user_promotion_basepri;
   VAR_41->thps_ipc_overrides = VAR_27->ipc_overrides;

   FUNC_1(VAR_27, VAR_41);

   FUNC_12(VAR_27);
   FUNC_6(VAR_42);
  } else {
   VAR_41->requested = 0;
   VAR_41->effective = 0;
   VAR_41->pending = 0;
  }

  break;
 }

 case 133:
 {
  thread_latency_qos_policy_t VAR_43 = (thread_latency_qos_policy_t) VAR_29;
  thread_latency_qos_t VAR_44;

  if (*VAR_30 < VAR_12) {
   VAR_32 = VAR_0;
   break;
  }

  if (*VAR_31) {
   VAR_44 = 0;
  } else {
   VAR_44 = FUNC_2(VAR_27, VAR_5, VAR_6, ((void*)0));
  }

  VAR_43->thread_latency_qos_tier = FUNC_3(VAR_44);
 }
 break;

 case 129:
 {
  thread_throughput_qos_policy_t VAR_45 = (thread_throughput_qos_policy_t) VAR_29;
  thread_throughput_qos_t VAR_46;

  if (*VAR_30 < VAR_19) {
   VAR_32 = VAR_0;
   break;
  }

  if (*VAR_31) {
   VAR_46 = 0;
  } else {
   VAR_46 = FUNC_2(VAR_27, VAR_5, VAR_8, ((void*)0));
  }

  VAR_45->thread_throughput_qos_tier = FUNC_4(VAR_46);
 }
 break;

 case 130:
 {
  thread_qos_policy_t VAR_47 = (thread_qos_policy_t)VAR_29;

  if (*VAR_30 < VAR_17) {
   VAR_32 = VAR_0;
   break;
  }

  if (!(*VAR_31)) {
   int VAR_48 = 0;
   VAR_47->qos_tier = FUNC_2(VAR_27, VAR_5,
                                                  VAR_7, &VAR_48);

   VAR_47->tier_importance = -VAR_48;
  } else {
   VAR_47->qos_tier = VAR_18;
   VAR_47->tier_importance = 0;
  }

  break;
 }

 default:
  VAR_32 = VAR_0;
  break;
 }

 FUNC_11(VAR_27);

 return (VAR_32);
}
