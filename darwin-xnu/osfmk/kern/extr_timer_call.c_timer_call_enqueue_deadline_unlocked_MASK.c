
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* timer_call_t ;
typedef int timer_call_param_t ;
typedef int mpqueue_head_t ;
typedef TYPE_2__* call_entry_t ;
struct TYPE_13__ {int param1; TYPE_1__* queue; } ;
struct TYPE_12__ {int lock; void* ttd; int flags; void* soft_deadline; scalar_t__ async_dequeue; } ;


 int FUNC_0 (char*,TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int,int ,scalar_t__,int ,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,void*) ;
 int FUNC_9 (TYPE_1__*) ;
 int * VAR_6 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__inline__ mpqueue_head_t *
FUNC_12(
 timer_call_t VAR_7,
 mpqueue_head_t *VAR_8,
 uint64_t VAR_9,
 uint64_t VAR_10,
 uint64_t VAR_11,
 timer_call_param_t VAR_12,
 uint32_t VAR_13)
{
 call_entry_t VAR_14 = FUNC_2(VAR_7);
 mpqueue_head_t *VAR_15;

 FUNC_0("timer_call_enqueue_deadline_unlocked(%p,%p,)\n", VAR_7, VAR_8);

 FUNC_5(&VAR_7->lock);

 VAR_15 = FUNC_1(VAR_14->queue);

 if (VAR_15 != ((void*)0)) {
  FUNC_10(VAR_15);
  if (VAR_7->async_dequeue) {
   VAR_7->async_dequeue = VAR_2;
   VAR_14->queue = ((void*)0);
  } else if (VAR_15 != VAR_8) {
   FUNC_7(VAR_7);



  }
  if (VAR_15 == VAR_6)
   FUNC_9(VAR_7);
  if (VAR_15 != VAR_8) {
   FUNC_11(VAR_15);
   FUNC_10(VAR_8);
  }
 } else {
  FUNC_10(VAR_8);
 }

 VAR_7->soft_deadline = VAR_10;
 VAR_7->flags = VAR_13;
 FUNC_2(VAR_7)->param1 = VAR_12;
 VAR_7->ttd = VAR_11;

 FUNC_8(VAR_7, VAR_8, VAR_9);
 FUNC_11(VAR_8);
 FUNC_6(&VAR_7->lock);

 return (VAR_15);
}
