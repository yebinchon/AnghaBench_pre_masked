
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* workq_threadreq_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ thread_qos_t ;
struct workqueue {scalar_t__ wq_nthreads; int wq_constrained_threads_scheduled; int wq_fulfilled; int * wq_thscheduled_count; scalar_t__ wq_thidlecount; } ;
struct TYPE_9__ {TYPE_3__* thread_request; scalar_t__ upcall_flags; } ;
struct TYPE_10__ {TYPE_1__ uus_workq_park_data; } ;
struct uthread {TYPE_2__ uu_save; int uu_workq_flags; } ;
struct proc {int dummy; } ;
typedef int pthread_priority_t ;
struct TYPE_11__ {int tr_flags; int tr_qos; scalar_t__ tr_count; int tr_state; int tr_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int,struct workqueue*,scalar_t__,int,scalar_t__,int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct workqueue*) ;
 int FUNC_4 (struct workqueue*,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 struct workqueue* FUNC_7 (struct proc*) ;
 scalar_t__ FUNC_8 (struct proc*,struct workqueue*) ;
 scalar_t__ FUNC_9 (struct workqueue*,scalar_t__,int *,int) ;
 int FUNC_10 (struct workqueue*) ;
 struct uthread* FUNC_11 (struct workqueue*) ;
 int FUNC_12 (struct proc*,struct workqueue*,int ) ;
 int FUNC_13 (struct workqueue*,struct uthread*,TYPE_3__*) ;
 int FUNC_14 (struct uthread*) ;
 scalar_t__ FUNC_15 (struct workqueue*,TYPE_3__*) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (struct workqueue*) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 TYPE_3__* FUNC_18 (int ) ;
 int FUNC_19 (int ,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_20(struct proc *VAR_18, uint32_t VAR_19, pthread_priority_t VAR_20)
{
 thread_qos_t VAR_21 = FUNC_1(VAR_20);
 struct workqueue *VAR_22 = FUNC_7(VAR_18);
 uint32_t VAR_23, VAR_24 = VAR_13;

 if (VAR_22 == ((void*)0) || VAR_19 <= 0 || VAR_19 > VAR_9 ||
   VAR_21 == VAR_3) {
  return VAR_2;
 }

 FUNC_0(VAR_5 | VAR_0,
   VAR_22, VAR_19, VAR_20, 0, 0);

 workq_threadreq_t VAR_25 = FUNC_18(VAR_16);
 FUNC_6(&VAR_25->tr_entry);
 VAR_25->tr_state = VAR_8;
 VAR_25->tr_flags = 0;
 VAR_25->tr_qos = VAR_21;

 if (VAR_20 & VAR_15) {
  VAR_25->tr_flags |= VAR_6;
  VAR_24 |= VAR_14;
 }

 FUNC_0(VAR_4 | VAR_0,
   VAR_22, FUNC_16(VAR_25), VAR_25->tr_qos, VAR_19, 0);

 FUNC_10(VAR_22);
 do {
  if (FUNC_3(VAR_22)) {
   goto exiting;
  }
  if (VAR_19 > 1 && (VAR_25->tr_flags & VAR_6) == 0) {
   VAR_23 = FUNC_9(VAR_22, VAR_21, ((void*)0), 0);
   if (VAR_23 >= VAR_19 - 1) {
    VAR_23 = VAR_19 - 1;
   }
  } else {
   VAR_23 = VAR_19 - 1;
  }





  FUNC_5(!(VAR_25->tr_flags & VAR_7));




  while (VAR_23 > 0 && VAR_22->wq_thidlecount) {
   struct uthread *VAR_26 = FUNC_11(VAR_22);

   FUNC_4(VAR_22, VAR_21);
   VAR_22->wq_thscheduled_count[FUNC_2(VAR_21)]++;
   FUNC_13(VAR_22, VAR_26, VAR_25);
   VAR_22->wq_fulfilled++;

   VAR_26->uu_workq_flags |= VAR_10;
   if ((VAR_25->tr_flags & VAR_6) == 0) {
    VAR_26->uu_workq_flags &= ~VAR_11;
    VAR_22->wq_constrained_threads_scheduled++;
   }
   VAR_26->uu_save.uus_workq_park_data.upcall_flags = VAR_24;
   VAR_26->uu_save.uus_workq_park_data.thread_request = VAR_25;
   FUNC_14(VAR_26);
   VAR_23--;
   VAR_19--;
  }
 } while (VAR_23 && VAR_22->wq_nthreads < VAR_17 &&
   FUNC_8(VAR_18, VAR_22));

 if (FUNC_3(VAR_22)) {
  goto exiting;
 }

 VAR_25->tr_count = VAR_19;
 if (FUNC_15(VAR_22, VAR_25)) {

  FUNC_12(VAR_18, VAR_22, VAR_12);
 }
 FUNC_17(VAR_22);
 return 0;

exiting:
 FUNC_17(VAR_22);
 FUNC_19(VAR_16, VAR_25);
 return VAR_1;
}
