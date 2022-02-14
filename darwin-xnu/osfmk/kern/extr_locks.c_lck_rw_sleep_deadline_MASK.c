
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef int wait_interrupt_t ;
typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int lck_sleep_action_t ;
typedef int lck_rw_type_t ;
typedef int lck_rw_t ;
typedef int event_t ;
struct TYPE_4__ {int sched_flags; int rwlock_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

wait_result_t
FUNC_11(
 lck_rw_t *VAR_8,
 lck_sleep_action_t VAR_9,
 event_t VAR_10,
 wait_interrupt_t VAR_11,
 uint64_t VAR_12)
{
 wait_result_t VAR_13;
 lck_rw_type_t VAR_14;
 thread_t VAR_15 = FUNC_2();

 if ((VAR_9 & ~VAR_1) != 0)
  FUNC_8("Invalid lock sleep action %x\n", VAR_9);

 if (VAR_9 & VAR_2) {
  VAR_15->rwlock_count++;
 }

 VAR_13 = FUNC_1(VAR_10, VAR_11, VAR_12);
 if (VAR_13 == VAR_6) {
  VAR_14 = FUNC_4(VAR_8);
  VAR_13 = FUNC_9(VAR_5);
  if (!(VAR_9 & VAR_4)) {
   if (!(VAR_9 & (VAR_3|VAR_0)))
    FUNC_5(VAR_8, VAR_14);
   else if (VAR_9 & VAR_0)
    FUNC_6(VAR_8);
   else
    FUNC_7(VAR_8);
  }
 }
 else
 if (VAR_9 & VAR_4)
  (void)FUNC_4(VAR_8);

 if (VAR_9 & VAR_2) {
  if ((VAR_15->rwlock_count-- == 1 ) && (VAR_15->sched_flags & VAR_7)) {



   FUNC_0(VAR_9 & VAR_4);

   FUNC_3(VAR_15, FUNC_10(VAR_10));
  }
 }

 return VAR_13;
}
