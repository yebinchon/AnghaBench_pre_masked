
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int spl_t ;
struct TYPE_6__ {scalar_t__ rwlock_count; int sched_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,uintptr_t) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(thread_t VAR_1, uintptr_t VAR_2)
{
 FUNC_0(VAR_1->rwlock_count == 0);


 spl_t VAR_3 = FUNC_2();
 FUNC_4(VAR_1);

 if (VAR_1->sched_flags & VAR_0)
  FUNC_1(VAR_1, VAR_0, VAR_2);

 FUNC_5(VAR_1);
 FUNC_3(VAR_3);
}
