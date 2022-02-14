
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* thread_call_t ;
typedef TYPE_2__* thread_call_group_t ;
typedef size_t thread_call_flavor_t ;
typedef int queue_head_t ;
typedef int boolean_t ;
struct TYPE_8__ {int * delayed_queues; int pending_count; int pending_queue; } ;
struct TYPE_7__ {int tc_flags; int tc_submit_count; int tc_deadline; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (char*,TYPE_1__*,int *) ;

__attribute__((used)) static boolean_t
FUNC_3(
 thread_call_t VAR_7,
 thread_call_group_t VAR_8,
 uint64_t VAR_9,
 thread_call_flavor_t VAR_10)
{
 if ((VAR_3 | VAR_5)
   == (VAR_7->tc_flags & (VAR_3 | VAR_5))) {
  VAR_7->tc_deadline = VAR_9;

  uint32_t VAR_11 = VAR_7->tc_flags;
  VAR_7->tc_flags |= VAR_4;

  if ((VAR_11 & VAR_4) != 0)
   return (VAR_6);
  else
   return (VAR_0);
 }

 queue_head_t *VAR_12 = FUNC_1(FUNC_0(VAR_7),
                                                       &VAR_8->delayed_queues[VAR_10],
                                                       VAR_9);

 if (VAR_12 == &VAR_8->pending_queue) {
  VAR_8->pending_count--;
 } else if (VAR_12 == ((void*)0)) {
  VAR_7->tc_submit_count++;
 } else if (VAR_12 == &VAR_8->delayed_queues[VAR_1] ||
            VAR_12 == &VAR_8->delayed_queues[VAR_2]) {


 } else {
  FUNC_2("tried to move a thread call (%p) between groups (old_queue: %p)", VAR_7, VAR_12);
 }

 return (VAR_12 != ((void*)0));
}
