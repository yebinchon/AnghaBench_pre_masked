
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_call_group_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {scalar_t__ active_count; scalar_t__ blocked_count; scalar_t__ idle_count; scalar_t__ pending_count; int target_thread_count; int tcg_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static boolean_t
FUNC_2(thread_call_group_t VAR_6)
{
 if ((VAR_6->active_count + VAR_6->blocked_count + VAR_6->idle_count) >= VAR_2) {
  FUNC_1("thread_call group '%s' reached max thread cap (%d): active: %d, blocked: %d, idle: %d",
        VAR_6->tcg_name, VAR_2,
        VAR_6->active_count, VAR_6->blocked_count, VAR_6->idle_count);
 }

 if (FUNC_0(VAR_6) == VAR_0) {
  if (VAR_6->pending_count > 0 && VAR_6->active_count == 0) {
   return VAR_4;
  }

  return VAR_0;
 }

 if (VAR_6->pending_count > 0) {
  if (VAR_6->idle_count > 0) {
   return VAR_0;
  }

  uint32_t VAR_7 = VAR_6->active_count;
  if ((VAR_7 == 0) ||
   (VAR_7 < VAR_6->target_thread_count) ||
   ((VAR_6->pending_count > VAR_1 * VAR_7) &&
    (VAR_5 < VAR_3))) {
   return VAR_4;
  }
 }

 return VAR_0;
}
