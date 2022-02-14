
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_call_group_t ;
struct TYPE_5__ {scalar_t__ active_count; scalar_t__ idle_count; int flags; int dealloc_timer; int idle_waitq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ) ;

__attribute__((used)) static __inline__ void
FUNC_4(
 thread_call_group_t VAR_8)
{




 if (FUNC_0(VAR_8) || VAR_8->active_count == 0) {
  if (FUNC_3(&VAR_8->idle_waitq, VAR_1,
           VAR_3, VAR_5) == VAR_0) {
   VAR_8->idle_count--; VAR_8->active_count++;

   if (VAR_8->idle_count == 0 && (VAR_8->flags & VAR_2) == VAR_2) {
    if (FUNC_2(&VAR_8->dealloc_timer) == VAR_4) {
     VAR_8->flags &= ~VAR_2;
    }
   }
  } else {
   if (!VAR_7 && FUNC_1(VAR_8)) {
    VAR_7 = VAR_4;
    FUNC_3(&VAR_6, VAR_1,
         VAR_3, VAR_5);
   }
  }
 }
}
