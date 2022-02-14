
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int thread_continue_t ;
typedef int spl_t ;
typedef TYPE_2__* processor_t ;
typedef scalar_t__ processor_set_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_17__ {scalar_t__ processor_set; scalar_t__ state; scalar_t__ idle_thread; scalar_t__ active_thread; scalar_t__ next_thread; scalar_t__ processor_self; int cpu_id; } ;
struct TYPE_16__ {int last_made_runnable_time; int state; TYPE_2__* bound_processor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int *,int ,TYPE_1__**) ;
 int FUNC_5 () ;
 TYPE_2__* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,TYPE_2__*,scalar_t__) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;

kern_return_t
FUNC_16(
 processor_t VAR_14)
{
 processor_set_t VAR_15;
 thread_t VAR_16;
 kern_return_t VAR_17;
 spl_t VAR_18;

 if (VAR_14 == VAR_5 || VAR_14->processor_set == VAR_7)
  return (VAR_2);

 if (VAR_14 == VAR_12) {
  processor_t VAR_19;

  VAR_19 = FUNC_11(VAR_14);
  FUNC_12(VAR_9);

  VAR_17 = FUNC_0(VAR_14->cpu_id);

  FUNC_11(VAR_19);

  return (VAR_17);
 }

 VAR_18 = FUNC_9();
 VAR_15 = VAR_14->processor_set;
 FUNC_6(VAR_15);
 if (VAR_14->state != VAR_6) {
  FUNC_7(VAR_15);
  FUNC_10(VAR_18);

  return (VAR_1);
 }

 FUNC_8(VAR_15, VAR_14, VAR_8);
 FUNC_7(VAR_15);
 FUNC_10(VAR_18);




 if (VAR_14->idle_thread == VAR_10) {
  VAR_17 = FUNC_1(VAR_14);
  if (VAR_17 != VAR_3) {
   VAR_18 = FUNC_9();
   FUNC_6(VAR_15);
   FUNC_8(VAR_15, VAR_14, VAR_6);
   FUNC_7(VAR_15);
   FUNC_10(VAR_18);

   return (VAR_17);
  }
 }






 if ( VAR_14->active_thread == VAR_10 &&
   VAR_14->next_thread == VAR_10 ) {
  VAR_17 = FUNC_4((thread_continue_t)VAR_13, ((void*)0), VAR_4, &VAR_16);
  if (VAR_17 != VAR_3) {
   VAR_18 = FUNC_9();
   FUNC_6(VAR_15);
   FUNC_8(VAR_15, VAR_14, VAR_6);
   FUNC_7(VAR_15);
   FUNC_10(VAR_18);

   return (VAR_17);
  }

  VAR_18 = FUNC_9();
  FUNC_14(VAR_16);
  VAR_16->bound_processor = VAR_14;
  VAR_14->next_thread = VAR_16;
  VAR_16->state = VAR_11;
  VAR_16->last_made_runnable_time = FUNC_5();
  FUNC_15(VAR_16);
  FUNC_10(VAR_18);

  FUNC_13(VAR_16);
 }

 if (VAR_14->processor_self == VAR_0)
  FUNC_3(VAR_14);

 VAR_17 = FUNC_0(VAR_14->cpu_id);
 if (VAR_17 != VAR_3) {
  VAR_18 = FUNC_9();
  FUNC_6(VAR_15);
  FUNC_8(VAR_15, VAR_14, VAR_6);
  FUNC_7(VAR_15);
  FUNC_10(VAR_18);

  return (VAR_17);
 }

 FUNC_2(VAR_14);

 return (VAR_3);
}
