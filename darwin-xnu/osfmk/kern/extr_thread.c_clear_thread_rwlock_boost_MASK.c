
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_4__ {int sched_flags; int rwlock_count; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2(void)
{
 thread_t VAR_1 = FUNC_0();

 if ((VAR_1->rwlock_count-- == 1) && (VAR_1->sched_flags & VAR_0)) {

  FUNC_1(VAR_1, 0);
 }
}
