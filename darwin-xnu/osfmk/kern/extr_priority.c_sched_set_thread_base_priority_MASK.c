
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_7__ {scalar_t__ sched_mode; int base_pri; int state; scalar_t__ last_made_runnable_time; scalar_t__ last_basepri_change_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

void
FUNC_6(thread_t VAR_8, int VAR_9)
{
 FUNC_0(VAR_9 >= VAR_1);
 uint64_t VAR_10 = 0;

 if (VAR_8->sched_mode == VAR_6)
  FUNC_0(VAR_9 <= VAR_0);
 else
  FUNC_0(VAR_9 < VAR_0);

 int VAR_11 = VAR_8->base_pri;
 VAR_8->base_pri = VAR_9;

 if ((VAR_8->state & VAR_7) == VAR_7) {
  FUNC_0(VAR_8->last_made_runnable_time != VAR_5);
  VAR_10 = FUNC_2();
  VAR_8->last_basepri_change_time = VAR_10;
 } else {
  FUNC_0(VAR_8->last_basepri_change_time == VAR_5);
  FUNC_0(VAR_8->last_made_runnable_time == VAR_5);
 }






 if (VAR_8 == FUNC_1() && VAR_11 != VAR_9) {
  if (!VAR_10) {
      VAR_10 = FUNC_2();
  }
  FUNC_3(VAR_2,
   VAR_10, VAR_3, VAR_8);
 }
 FUNC_4(VAR_8);

 FUNC_5(VAR_8, VAR_4);
}
