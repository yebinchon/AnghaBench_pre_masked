
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* workq_threadreq_t ;
struct TYPE_11__ {scalar_t__ trp_value; int trp_flags; int trp_pri; int trp_pol; } ;
typedef TYPE_4__ workq_threadreq_param_t ;
typedef int uint32_t ;
typedef int thread_t ;
typedef scalar_t__ thread_qos_t ;
struct workqueue {int wq_event_manager_priority; } ;
struct TYPE_8__ {scalar_t__ workloop_params; scalar_t__ qos; } ;
struct TYPE_9__ {TYPE_1__ uus_workq_park_data; } ;
struct uthread {int uu_workq_flags; TYPE_2__ uu_save; int uu_workq_pri; int uu_thread; } ;
struct TYPE_10__ {scalar_t__ tr_qos; int tr_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_4__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_5(struct workqueue *VAR_10, struct uthread *VAR_11,
  workq_threadreq_t VAR_12)
{
 thread_t VAR_13 = VAR_11->uu_thread;
 thread_qos_t VAR_14 = VAR_12 ? VAR_12->tr_qos : VAR_6;
 workq_threadreq_param_t VAR_15 = { };
 int VAR_16 = 31;
 int VAR_17 = VAR_0;

 if (VAR_12 && (VAR_12->tr_flags & VAR_4)) {
  VAR_15 = FUNC_3(VAR_12);
 }

 VAR_11->uu_workq_pri = FUNC_0(VAR_14);
 VAR_11->uu_workq_flags &= ~VAR_5;
 VAR_11->uu_save.uus_workq_park_data.workloop_params = VAR_15.trp_value;


 VAR_11->uu_save.uus_workq_park_data.qos = VAR_14;

 if (VAR_14 == VAR_7) {
  uint32_t VAR_18 = VAR_10->wq_event_manager_priority;
  FUNC_2(VAR_15.trp_value == 0);

  if (VAR_18 & VAR_8) {
   VAR_18 &= VAR_9;
   FUNC_4(VAR_13, VAR_1, VAR_18,
     VAR_0);
   return;
  }

  VAR_14 = FUNC_1(VAR_18);
 } else {
  if (VAR_15.trp_flags & VAR_3) {
   VAR_14 = VAR_1;
   VAR_16 = VAR_15.trp_pri;
   VAR_11->uu_workq_flags |= VAR_5;
  }

  if (VAR_15.trp_flags & VAR_2) {
   VAR_17 = VAR_15.trp_pol;
  }
 }

 FUNC_4(VAR_13, VAR_14, VAR_16, VAR_17);
}
