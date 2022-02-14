
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef scalar_t__ wait_interrupt_t ;
typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int lck_sleep_action_t ;
typedef int lck_mtx_t ;
typedef int * event_t ;
struct TYPE_4__ {int sched_flags; int rwlock_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int,int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

wait_result_t
FUNC_12(
        lck_mtx_t *VAR_11,
 lck_sleep_action_t VAR_12,
 event_t VAR_13,
 wait_interrupt_t VAR_14,
 uint64_t VAR_15)
{
 wait_result_t VAR_16;
 thread_t VAR_17 = FUNC_4();

 FUNC_0(FUNC_1(VAR_2, VAR_3) | VAR_1,
       FUNC_2(VAR_11), (int)VAR_12, FUNC_2(VAR_13), (int)VAR_14, 0);

 if ((VAR_12 & ~VAR_4) != 0)
  FUNC_9("Invalid lock sleep action %x\n", VAR_12);

 if (VAR_12 & VAR_5) {



  VAR_17->rwlock_count++;
 }

 VAR_16 = FUNC_3(VAR_13, VAR_14, VAR_15);
 if (VAR_16 == VAR_9) {
  FUNC_7(VAR_11);
  VAR_16 = FUNC_10(VAR_8);
  if (!(VAR_12 & VAR_7)) {
   if ((VAR_12 & VAR_6))
    FUNC_6(VAR_11);
   else
    FUNC_5(VAR_11);
  }
 }
 else
 if (VAR_12 & VAR_7)
  FUNC_7(VAR_11);

 if (VAR_12 & VAR_5) {
  if ((VAR_17->rwlock_count-- == 1 ) && (VAR_17->sched_flags & VAR_10)) {

   FUNC_8(VAR_17, FUNC_11(VAR_13));
  }
 }

 FUNC_0(FUNC_1(VAR_2, VAR_3) | VAR_0, (int)VAR_16, 0, 0, 0, 0);

 return VAR_16;
}
