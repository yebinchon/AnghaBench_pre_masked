
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int spl_t ;
struct TYPE_7__ {int sched_flags; scalar_t__ sched_mode; int computation_epoch; int computation_metered; int depress_timer_active; int depress_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int,int ) ;

void
FUNC_9(thread_t VAR_7)
{
 FUNC_0(VAR_7 == FUNC_1());
 FUNC_0((VAR_7->sched_flags & VAR_2) == 0);

 if (VAR_7->sched_mode != VAR_1)
  return;

 spl_t VAR_8 = FUNC_3();

 uint64_t VAR_9 = FUNC_2();
 uint64_t VAR_10 = VAR_9 -
         VAR_7->computation_epoch + VAR_7->computation_metered;

 if (VAR_10 >= VAR_5) {
  FUNC_5(VAR_7);

  VAR_7->computation_epoch = VAR_9;
  VAR_7->computation_metered = 0;

  uint64_t VAR_11 = VAR_9 +
           (VAR_10 >> VAR_6);

  if (!FUNC_8(&VAR_7->depress_timer, VAR_11,
                        VAR_4))
   VAR_7->depress_timer_active++;

  VAR_7->sched_flags |= VAR_3;
  FUNC_6(VAR_7, VAR_0);

  FUNC_7(VAR_7);
 }
 FUNC_4(VAR_8);
}
