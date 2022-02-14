
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int spl_t ;
struct TYPE_6__ {scalar_t__ count; } ;
struct TYPE_7__ {scalar_t__ deadline; TYPE_1__ queue; int has_expired; } ;
typedef TYPE_2__ rtclock_timer_t ;
struct TYPE_8__ {scalar_t__ quantum_timer_deadline; TYPE_2__ rtclock_timer; int cpu_running; } ;
typedef TYPE_3__ cpu_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,scalar_t__,int,scalar_t__,scalar_t__,int ) ;
 TYPE_3__* FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

void
FUNC_6(void)
{
 uint64_t VAR_4 = VAR_2;
 uint64_t VAR_5;
 uint64_t VAR_6;
 rtclock_timer_t *VAR_7;
 spl_t VAR_8 = FUNC_4();
 cpu_data_t *VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_1();
 if (!VAR_9->cpu_running)

  return;




 VAR_7 = &VAR_9->rtclock_timer;
 if (!VAR_7->has_expired &&
     0 < VAR_7->deadline && VAR_7->deadline < VAR_2)
  VAR_4 = VAR_7->deadline;




 VAR_5 = FUNC_2(VAR_9);
 if (0 < VAR_5 && VAR_5 < VAR_4)
  VAR_4 = VAR_5;


 VAR_6 = VAR_9->quantum_timer_deadline;
 if ((VAR_6 > 0) &&
     (VAR_6 < VAR_4))
  VAR_4 = VAR_6;





 VAR_10 = (uint32_t) FUNC_3(VAR_4);


 if (VAR_10 != 0 && VAR_4 != VAR_5) {
  uint64_t VAR_11 = 0;
  if (VAR_4 != VAR_6) {




   VAR_11 = VAR_7->queue.count;
  }
  FUNC_0(VAR_3,
      VAR_1 | VAR_0,
      VAR_10, 2,
      VAR_4,
      VAR_11, 0);
 }
 FUNC_5(VAR_8);
}
