
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_call_t ;
typedef TYPE_2__* thread_call_group_t ;
typedef int queue_head_t ;
typedef int boolean_t ;
struct TYPE_9__ {int pending_count; int * delayed_queues; int pending_queue; } ;
struct TYPE_8__ {int tc_flags; int tc_submit_count; scalar_t__ tc_deadline; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static __inline__ boolean_t
FUNC_4(thread_call_t VAR_7,
                      thread_call_group_t VAR_8)
{
 if ((VAR_3 | VAR_5)
   == (VAR_7->tc_flags & (VAR_3 | VAR_5))) {
  VAR_7->tc_deadline = 0;

  uint32_t VAR_9 = VAR_7->tc_flags;
  VAR_7->tc_flags |= VAR_4;

  if ((VAR_9 & VAR_4) != 0)
   return (VAR_6);
  else
   return (VAR_0);
 }

 queue_head_t *VAR_10 = FUNC_1(FUNC_0(VAR_7), &VAR_8->pending_queue);

 if (VAR_10 == ((void*)0)) {
  VAR_7->tc_submit_count++;
 } else if (VAR_10 != &VAR_8->pending_queue &&
            VAR_10 != &VAR_8->delayed_queues[VAR_1] &&
            VAR_10 != &VAR_8->delayed_queues[VAR_2]) {
  FUNC_2("tried to move a thread call (%p) between groups (old_queue: %p)", VAR_7, VAR_10);
 }

 VAR_8->pending_count++;

 FUNC_3(VAR_8);

 return (VAR_10 != ((void*)0));
}
