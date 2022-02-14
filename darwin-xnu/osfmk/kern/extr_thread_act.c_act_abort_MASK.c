
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int spl_t ;
struct TYPE_7__ {int sched_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(
 thread_t VAR_2)
{
 spl_t VAR_3 = FUNC_0();

 FUNC_3(VAR_2);

 if (!(VAR_2->sched_flags & VAR_0)) {
  VAR_2->sched_flags |= VAR_0;
  FUNC_4(VAR_2);
  FUNC_2(VAR_2);
 } else {
  VAR_2->sched_flags &= ~VAR_1;
 }

 FUNC_5(VAR_2);
 FUNC_1(VAR_3);
}
