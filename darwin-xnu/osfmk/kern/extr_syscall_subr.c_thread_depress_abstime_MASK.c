
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int spl_t ;
struct TYPE_6__ {int sched_flags; int depress_timer_active; int depress_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,scalar_t__,int ) ;

void
FUNC_9(uint64_t VAR_4)
{
 thread_t VAR_5 = FUNC_2();

 spl_t VAR_6 = FUNC_3();
 FUNC_5(VAR_5);

 FUNC_0((VAR_5->sched_flags & VAR_1) == 0);

 if ((VAR_5->sched_flags & VAR_2) == 0) {
  VAR_5->sched_flags |= VAR_1;
  FUNC_6(VAR_5, VAR_0);

  if (VAR_4 != 0) {
   uint64_t VAR_7;

   FUNC_1(VAR_4, &VAR_7);
   if (!FUNC_8(&VAR_5->depress_timer, VAR_7, VAR_3))
    VAR_5->depress_timer_active++;
  }
 }

 FUNC_7(VAR_5);
 FUNC_4(VAR_6);
}
