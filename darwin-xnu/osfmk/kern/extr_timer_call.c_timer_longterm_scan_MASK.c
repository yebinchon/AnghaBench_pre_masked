
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_21__ {int count; } ;
struct TYPE_20__ {scalar_t__ interval; scalar_t__ deadline; TYPE_5__* call; } ;
struct TYPE_22__ {scalar_t__ scan_limit; TYPE_3__ queue; int scan_pauses; TYPE_2__ threshold; int escalates; } ;
typedef TYPE_4__ timer_longterm_t ;
typedef TYPE_5__* timer_call_t ;
typedef int queue_entry_t ;
typedef int mpqueue_head_t ;
struct TYPE_24__ {int head; } ;
struct TYPE_19__ {TYPE_5__* lock_data; } ;
struct TYPE_17__ {TYPE_1__ interlock; } ;
struct TYPE_23__ {scalar_t__ soft_deadline; TYPE_11__ lock; } ;
struct TYPE_18__ {scalar_t__ deadline; scalar_t__ entry_time; int func; TYPE_5__* queue; } ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_15__* FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_7 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_11__*) ;
 int FUNC_15 (TYPE_11__*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*,int *,scalar_t__) ;
 TYPE_7__* VAR_8 ;
 int FUNC_19 (scalar_t__) ;
 int * FUNC_20 (scalar_t__) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

void
FUNC_23(timer_longterm_t *VAR_9,
      uint64_t VAR_10)
{
 queue_entry_t VAR_11;
 timer_call_t VAR_12;
 uint64_t VAR_13;
 uint64_t VAR_14;
 uint64_t VAR_15 = VAR_10 + VAR_9->scan_limit;
 mpqueue_head_t *VAR_16;

 FUNC_6(!FUNC_9());
 FUNC_6(FUNC_7() == VAR_7);

 if (VAR_9->threshold.interval != VAR_5)
  VAR_13 = VAR_10 + VAR_9->threshold.interval;

 VAR_9->threshold.deadline = VAR_5;
 VAR_9->threshold.call = ((void*)0);

 if (FUNC_10(&VAR_8->head))
  return;

 VAR_16 = FUNC_20(VAR_7);
 FUNC_21(VAR_16);

 VAR_11 = FUNC_12(&VAR_8->head);
 while (!FUNC_11(&VAR_8->head, VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  VAR_14 = VAR_12->soft_deadline;
  VAR_11 = FUNC_13(VAR_11);
  if (!FUNC_14(&VAR_12->lock)) {
   FUNC_17(VAR_12);
   continue;
  }
  if (VAR_14 < VAR_13) {
   FUNC_3(VAR_4,
            VAR_2 | VAR_0,
    FUNC_5(VAR_12),
    FUNC_1(VAR_12)->deadline,
    FUNC_1(VAR_12)->entry_time,
    FUNC_4(FUNC_1(VAR_12)->func),
    0);
   VAR_9->escalates++;
   FUNC_16(VAR_12);
   FUNC_18(
    VAR_12, VAR_16, FUNC_1(VAR_12)->deadline);




   (void) FUNC_19(VAR_14);
  } else {
   if (VAR_14 < VAR_9->threshold.deadline) {
    VAR_9->threshold.deadline = VAR_14;
    VAR_9->threshold.call = VAR_12;
   }
  }
  FUNC_15(&VAR_12->lock);


  if (FUNC_8() > VAR_15) {
   VAR_9->threshold.deadline = VAR_6;
   VAR_9->scan_pauses++;
   FUNC_0("timer_longterm_scan() paused %llu, qlen: %llu\n",
       VAR_15, VAR_9->queue.count);
   break;
  }
 }

 FUNC_22(VAR_16);
}
