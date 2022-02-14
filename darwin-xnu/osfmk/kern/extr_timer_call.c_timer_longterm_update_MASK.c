
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ deadline; int deadline_set; int timer; } ;
struct TYPE_6__ {TYPE_1__ threshold; } ;
typedef TYPE_2__ timer_longterm_t ;
typedef int spl_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(timer_longterm_t *VAR_5)
{
 spl_t VAR_6 = FUNC_2();

 FUNC_6(VAR_4);

 if (FUNC_0() != VAR_3)
  FUNC_1("timer_longterm_update_master() on non-boot cpu");

 FUNC_5(VAR_5);

 if (VAR_5->threshold.deadline != VAR_2)
  FUNC_4(
   &VAR_5->threshold.timer,
   VAR_5->threshold.deadline_set,
   VAR_0 | VAR_1);

 FUNC_7(VAR_4);
 FUNC_3(VAR_6);
}
