
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* timer_call_t ;
typedef int mpqueue_head_t ;
typedef TYPE_2__* call_entry_t ;
struct TYPE_12__ {TYPE_1__* queue; } ;
struct TYPE_11__ {int lock; scalar_t__ async_dequeue; } ;


 int FUNC_0 (char*,TYPE_1__*) ;
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
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int * VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

mpqueue_head_t *
FUNC_11(
 timer_call_t VAR_6)
{
 call_entry_t VAR_7 = FUNC_2(VAR_6);
 mpqueue_head_t *VAR_8;

 FUNC_0("timer_call_dequeue_unlocked(%p)\n", VAR_6);

 FUNC_5(&VAR_6->lock);
 VAR_8 = FUNC_1(VAR_7->queue);
 if (VAR_8 != ((void*)0)) {
  FUNC_9(VAR_8);
  if (VAR_6->async_dequeue) {
   VAR_6->async_dequeue = VAR_2;
   VAR_7->queue = ((void*)0);
  } else {
   FUNC_7(VAR_6);
  }
  if (VAR_8 == VAR_5)
   FUNC_8(VAR_6);
  FUNC_10(VAR_8);
 }
 FUNC_6(&VAR_6->lock);
 return (VAR_8);
}
