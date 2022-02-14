
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int spl_t ;
struct TYPE_7__ {scalar_t__ suspend_parked; int sched_flags; scalar_t__ suspend_count; int active; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;

void
FUNC_10(thread_t VAR_7)
{
 FUNC_6(VAR_7);

 FUNC_0(VAR_7->suspend_parked == VAR_0);

 spl_t VAR_8 = FUNC_2();
 FUNC_5(VAR_7);


 FUNC_0((VAR_7->sched_flags & VAR_4) == 0);

 VAR_7->sched_flags &= ~VAR_3;
 FUNC_9(VAR_7);
 FUNC_3(VAR_8);

 if (!VAR_7->active) {

  FUNC_7(VAR_7);

  FUNC_8();

 }


 if (VAR_7->suspend_count > 0) {
  VAR_7->suspend_parked = VAR_5;
  FUNC_1(&VAR_7->suspend_count,
    VAR_1 | VAR_2);
  FUNC_7(VAR_7);

  FUNC_4(VAR_6);

 }

 FUNC_7(VAR_7);
}
