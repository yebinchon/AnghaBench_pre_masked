
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int task_t ;
struct io_stat_info {int dummy; } ;
struct TYPE_11__ {scalar_t__ ref_count; int state; scalar_t__ runq; scalar_t__ turnstile; scalar_t__ ith_voucher; scalar_t__ kernel_stack; scalar_t__ thread_magic; int mutex; scalar_t__ thread_io_stats; scalar_t__ t_threadledger; scalar_t__ t_ledger; int * uthread; int task; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int ,TYPE_1__*) ;

void
FUNC_17(
 thread_t VAR_6)
{
 task_t VAR_7;

 FUNC_1(VAR_6);

 FUNC_0(VAR_6->ref_count == 0);

 FUNC_0(FUNC_13(VAR_6) == 0);

 if (!(VAR_6->state & VAR_2))
  FUNC_9("thread_deallocate: thread not properly terminated\n");

 FUNC_0(VAR_6->runq == VAR_1);





 FUNC_2(VAR_6);

 FUNC_10(VAR_6);

 VAR_7 = VAR_6->task;
 if (VAR_6->t_ledger)
  FUNC_7(VAR_6->t_ledger);
 if (VAR_6->t_threadledger)
  FUNC_7(VAR_6->t_threadledger);

 FUNC_0(VAR_6->turnstile != VAR_3);
 if (VAR_6->turnstile)
  FUNC_14(VAR_6->turnstile);

 if (VAR_0 != VAR_6->ith_voucher)
  FUNC_3(VAR_6->ith_voucher);

 if (VAR_6->thread_io_stats)
  FUNC_4(VAR_6->thread_io_stats, sizeof(struct io_stat_info));

 if (VAR_6->kernel_stack != 0)
  FUNC_11(VAR_6);

 FUNC_6(&VAR_6->mutex, &VAR_4);
 FUNC_8(VAR_6);

 FUNC_12(VAR_7);






 FUNC_16(VAR_5, VAR_6);
}
