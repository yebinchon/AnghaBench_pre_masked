
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;
typedef struct TYPE_21__ TYPE_12__ ;


typedef TYPE_2__* timer_call_t ;
struct TYPE_25__ {int earliest_soft_deadline; int head; } ;
typedef TYPE_3__ mpqueue_head_t ;
struct TYPE_23__ {TYPE_2__* lock_data; } ;
struct TYPE_21__ {TYPE_1__ interlock; } ;
struct TYPE_24__ {int flags; TYPE_12__ lock; } ;
struct TYPE_22__ {scalar_t__ deadline; TYPE_2__* queue; } ;


 int FUNC_0 (char*,TYPE_3__*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_17__* FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int,int ,int ,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (TYPE_12__*) ;
 int FUNC_13 (TYPE_12__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 int FUNC_17 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_18 (TYPE_3__*) ;

int
FUNC_19(mpqueue_head_t *VAR_7, mpqueue_head_t *VAR_8)
{
 timer_call_t VAR_9;
 timer_call_t VAR_10;
 int VAR_11 = 0;

 FUNC_0("timer_queue_migrate(%p,%p)\n", VAR_7, VAR_8);

 FUNC_5(!FUNC_6());
 FUNC_5(VAR_7 != VAR_8);

 if (VAR_5) {






  return -4;
 }
        FUNC_17(VAR_8);

 VAR_10 = FUNC_2(FUNC_10(&VAR_8->head));
 if (FUNC_8(&VAR_8->head)) {
  VAR_11 = -1;
  goto abort1;
 }

        FUNC_17(VAR_7);

 if (FUNC_8(&VAR_7->head)) {
  VAR_11 = -2;
  goto abort2;
 }

 VAR_9 = FUNC_2(FUNC_10(&VAR_7->head));
 if (FUNC_1(VAR_9)->deadline < FUNC_1(VAR_10)->deadline) {
  VAR_11 = 0;
  goto abort2;
 }


 do {
  if (VAR_9->flags & VAR_3) {
   VAR_11 = -3;
   goto abort2;
  }
  VAR_9 = FUNC_2(FUNC_11(FUNC_7(VAR_9)));
 } while (!FUNC_9(&VAR_7->head, FUNC_7(VAR_9)));


 while (!FUNC_8(&VAR_7->head)) {
  VAR_9 = FUNC_2(FUNC_10(&VAR_7->head));
  if (!FUNC_12(&VAR_9->lock)) {
   VAR_6++;
   FUNC_15(VAR_9);
   continue;
  }
  FUNC_14(VAR_9);
  FUNC_16(
   VAR_9, VAR_8, FUNC_1(VAR_9)->deadline);
  VAR_11++;
  FUNC_13(&VAR_9->lock);
 }
 VAR_7->earliest_soft_deadline = VAR_4;
abort2:
        FUNC_18(VAR_7);
abort1:
        FUNC_18(VAR_8);

 return VAR_11;
}
