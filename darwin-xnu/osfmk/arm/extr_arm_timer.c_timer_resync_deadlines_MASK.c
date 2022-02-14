
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spl_t ;
struct TYPE_4__ {scalar_t__ deadline; int has_expired; } ;
typedef TYPE_1__ rtclock_timer_t ;
struct TYPE_5__ {scalar_t__ idle_timer_deadline; scalar_t__ quantum_timer_deadline; scalar_t__ rtcPop; TYPE_1__ rtclock_timer; } ;
typedef TYPE_2__ cpu_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int,int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

void
FUNC_6(void)
{
 uint64_t VAR_4;
 rtclock_timer_t *VAR_5;
 spl_t VAR_6 = FUNC_4();
 cpu_data_t *VAR_7;

 VAR_7 = FUNC_2();

 VAR_4 = 0;


 VAR_5 = &VAR_7->rtclock_timer;
 if ((!VAR_5->has_expired) && (VAR_5->deadline > 0))
  VAR_4 = VAR_5->deadline;


 if ((VAR_7->idle_timer_deadline > 0)
      && (VAR_7->idle_timer_deadline < VAR_4))
  VAR_4 = VAR_7->idle_timer_deadline;


 if ((VAR_7->quantum_timer_deadline > 0)
     && (VAR_7->quantum_timer_deadline < VAR_4))
  VAR_4 = VAR_7->quantum_timer_deadline;

 if ((VAR_4 == VAR_2)
     || ((VAR_4 > 0) && (VAR_7->rtcPop != VAR_4))) {
  int VAR_8;

  VAR_8 = FUNC_3(VAR_4);

  FUNC_0(VAR_3,
      FUNC_1(VAR_1, 1) | VAR_0,
      VAR_8, 2, 0, 0, 0);
 }
 FUNC_5(VAR_6);
}
