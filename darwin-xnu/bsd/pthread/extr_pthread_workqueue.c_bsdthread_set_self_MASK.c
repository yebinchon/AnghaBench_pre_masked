
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_t ;
struct TYPE_4__ {int qos_tier; } ;
typedef TYPE_1__ thread_qos_policy_data_t ;
typedef int thread_policy_t ;
struct TYPE_5__ {int timeshare; } ;
typedef TYPE_2__ thread_extended_policy_data_t ;
struct workqueue {int wq_constrained_threads_scheduled; } ;
struct uu_workq_policy {scalar_t__ qos_bucket; int qos_req; } ;
struct uthread {int uu_workq_flags; struct uu_workq_policy uu_workq_pri; struct kqrequest* uu_kqr_bound; } ;
struct kqrequest {int kqr_state; } ;
typedef int pthread_priority_t ;
typedef int proc_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef enum workq_set_self_flags { ____Placeholder_workq_set_self_flags } workq_set_self_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
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
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int,TYPE_1__*) ;
 struct uthread* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct kqrequest*) ;
 struct workqueue* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct workqueue*) ;
 int FUNC_9 (int ,struct workqueue*,struct uthread*,struct uu_workq_policy,struct uu_workq_policy,int) ;
 int FUNC_10 (struct workqueue*) ;
 scalar_t__ VAR_21 ;

__attribute__((used)) static int
FUNC_11(proc_t VAR_22, thread_t VAR_23, pthread_priority_t VAR_24,
  mach_port_name_t VAR_25, enum workq_set_self_flags VAR_26)
{
 struct uthread *VAR_27 = FUNC_1(VAR_23);
 struct workqueue *VAR_28 = FUNC_3(VAR_22);

 kern_return_t VAR_29;
 int VAR_30 = 0, VAR_31 = 0, VAR_32 = 0, VAR_33 = 0;
 bool VAR_34 = (FUNC_4(VAR_23) & VAR_12);

 if (VAR_26 & VAR_18) {
  if (!VAR_34) {
   VAR_30 = VAR_2;
   goto qos;
  }

  if (VAR_27->uu_workq_pri.qos_bucket == VAR_19) {
   VAR_30 = VAR_2;
   goto qos;
  }

  struct kqrequest *VAR_35 = VAR_27->uu_kqr_bound;
  if (VAR_35 == ((void*)0)) {
   VAR_30 = VAR_0;
   goto qos;
  }

  if (VAR_35->kqr_state & VAR_7) {
   VAR_30 = VAR_2;
   goto qos;
  }

  FUNC_2(VAR_22, VAR_27->uu_kqr_bound);
 }

qos:
 if (VAR_26 & VAR_15) {
  thread_qos_policy_data_t VAR_36;

  if (!FUNC_0(VAR_24, &VAR_36)) {
   VAR_31 = VAR_2;
   goto voucher;
  }

  if (!VAR_34) {



   if (!FUNC_5(VAR_23)) {
    VAR_31 = VAR_5;
    goto voucher;
   }
  } else if (VAR_27->uu_workq_pri.qos_bucket == VAR_19) {



   VAR_31 = VAR_2;
   goto voucher;
  } else {




   bool VAR_37 = VAR_27->uu_workq_flags & VAR_13;
   bool VAR_38 = VAR_24 & VAR_20;
   struct uu_workq_policy VAR_39, VAR_40;
   bool VAR_41 = 0;

   FUNC_8(VAR_28);

   if (VAR_37 != VAR_38) {
    VAR_27->uu_workq_flags ^= VAR_13;
    if (VAR_37) {
     VAR_28->wq_constrained_threads_scheduled++;
    } else if (VAR_28->wq_constrained_threads_scheduled-- ==
      VAR_21) {
     VAR_41 = 1;
    }
   }

   VAR_39 = VAR_40 = VAR_27->uu_workq_pri;
   VAR_40.qos_req = VAR_36.qos_tier;
   FUNC_9(VAR_22, VAR_28, VAR_27, VAR_39, VAR_40, VAR_41);
   FUNC_10(VAR_28);
  }

  VAR_29 = FUNC_6(VAR_23, VAR_10,
    (thread_policy_t)&VAR_36, VAR_11);
  if (VAR_29 != VAR_6) {
   VAR_31 = VAR_2;
  }
 }

voucher:
 if (VAR_26 & VAR_17) {
  VAR_29 = FUNC_7(VAR_25);
  if (VAR_29 != VAR_6) {
   VAR_32 = VAR_3;
   goto fixedpri;
  }
 }

fixedpri:
 if (VAR_31) goto done;
 if (VAR_26 & VAR_14) {
  thread_extended_policy_data_t VAR_42 = {.timeshare = 0};

  if (VAR_34) {

   VAR_33 = VAR_4;
   goto done;
  }

  VAR_29 = FUNC_6(VAR_23, VAR_8,
    (thread_policy_t)&VAR_42, VAR_9);
  if (VAR_29 != VAR_6) {
   VAR_33 = VAR_2;
   goto done;
  }
 } else if (VAR_26 & VAR_16) {
  thread_extended_policy_data_t VAR_43 = {.timeshare = 1};

  if (VAR_34) {

   VAR_33 = VAR_4;
   goto done;
  }

  VAR_29 = FUNC_6(VAR_23, VAR_8,
    (thread_policy_t)&VAR_43, VAR_9);
  if (VAR_29 != VAR_6) {
   VAR_33 = VAR_2;
   goto done;
  }
 }

done:
 if (VAR_31 && VAR_32) {

  return VAR_1;
 }

 if (VAR_30) {
  return VAR_30;
 }

 if (VAR_31) {
  return VAR_31;
 }

 if (VAR_32) {
  return VAR_32;
 }

 if (VAR_33) {
  return VAR_33;
 }

 return 0;
}
