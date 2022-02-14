
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_16__ {scalar_t__ interval; scalar_t__ deadline; TYPE_3__* call; } ;
struct TYPE_17__ {TYPE_1__ threshold; } ;
typedef TYPE_2__ timer_longterm_t ;
typedef TYPE_3__* timer_call_t ;
typedef int queue_entry_t ;
struct TYPE_19__ {int head; } ;
typedef TYPE_4__ mpqueue_head_t ;
struct TYPE_18__ {int flags; int lock; } ;
struct TYPE_15__ {scalar_t__ deadline; } ;


 TYPE_13__* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int VAR_3 ;
 TYPE_4__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_13(timer_longterm_t *VAR_4,
    uint64_t VAR_5)
{
 queue_entry_t VAR_6;
 timer_call_t VAR_7;
 uint64_t VAR_8;
 uint64_t VAR_9;
 mpqueue_head_t *VAR_10;

 if (VAR_4->threshold.interval != VAR_1)
  VAR_8 = VAR_5 + VAR_4->threshold.interval;
 else
  VAR_8 = VAR_1;

 VAR_10 = FUNC_10(VAR_2);
 FUNC_11(VAR_10);

 VAR_6 = FUNC_3(&VAR_10->head);
 while (!FUNC_2(&VAR_10->head, VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  VAR_9 = FUNC_0(VAR_7)->deadline;
  VAR_6 = FUNC_4(VAR_6);
  if ((VAR_7->flags & VAR_0) != 0)
   continue;
  if (!FUNC_5(&VAR_7->lock)) {

   FUNC_8(VAR_7);
   continue;
  }
  if (VAR_9 > VAR_8) {

   FUNC_7(VAR_7);
   FUNC_9(VAR_7, VAR_3);
   if (VAR_9 < VAR_4->threshold.deadline) {
    VAR_4->threshold.deadline = VAR_9;
    VAR_4->threshold.call = VAR_7;
   }
  }
  FUNC_6(&VAR_7->lock);
 }
 FUNC_12(VAR_10);
}
