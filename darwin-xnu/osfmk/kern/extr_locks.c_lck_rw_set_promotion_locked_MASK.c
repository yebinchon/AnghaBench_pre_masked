
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_4__ {scalar_t__ rwlock_count; int sched_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

void
FUNC_2(thread_t VAR_3)
{
 if (VAR_0 & VAR_2)
  return;

 FUNC_0(VAR_3->rwlock_count > 0);

 if (!(VAR_3->sched_flags & VAR_1))
  FUNC_1(VAR_3, VAR_1, 0);
}
