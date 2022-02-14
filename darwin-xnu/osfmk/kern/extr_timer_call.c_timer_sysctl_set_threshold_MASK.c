
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ interval; int margin; scalar_t__ deadline_set; scalar_t__ deadline; scalar_t__ latency_max; int latency_min; scalar_t__ latency; scalar_t__ preempts; scalar_t__ scans; int timer; } ;
struct TYPE_7__ {TYPE_1__ threshold; scalar_t__ scan_pauses; scalar_t__ escalates; scalar_t__ dequeues; scalar_t__ enqueues; } ;
typedef TYPE_2__ timer_longterm_t ;
typedef int spl_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(uint64_t VAR_9)
{
 timer_longterm_t *VAR_10 = &VAR_7;
 spl_t VAR_11 = FUNC_2();
 boolean_t VAR_12;

 FUNC_8(VAR_8);

 FUNC_4(&VAR_10->threshold.timer);




 if (VAR_9 == 0) {
  VAR_10->threshold.interval = VAR_5;
  VAR_12 = VAR_6;
  FUNC_4(&VAR_10->threshold.timer);
 } else {
  uint64_t VAR_13 = VAR_10->threshold.interval;
  VAR_10->threshold.interval = VAR_9 * VAR_2;
  FUNC_1(VAR_10->threshold.interval,
         &VAR_10->threshold.interval);
  VAR_10->threshold.margin = VAR_10->threshold.interval / 10;
  if (VAR_13 == VAR_5)
   VAR_12 = VAR_1;
  else
   VAR_12 = (VAR_10->threshold.interval > VAR_13);
 }

 if (VAR_12 ) {

  FUNC_6(VAR_10, FUNC_0());
 } else {






  FUNC_7(VAR_10, FUNC_0());
 }


 VAR_10->threshold.deadline_set = VAR_10->threshold.deadline;
 if (VAR_10->threshold.deadline != VAR_5) {
  VAR_10->threshold.deadline_set -= VAR_10->threshold.margin;
  VAR_10->threshold.deadline_set -= VAR_10->threshold.latency;
  FUNC_5(
   &VAR_10->threshold.timer,
   VAR_10->threshold.deadline_set,
   VAR_3 | VAR_4);
 }


 VAR_10->enqueues = 0;
 VAR_10->dequeues = 0;
 VAR_10->escalates = 0;
 VAR_10->scan_pauses = 0;
 VAR_10->threshold.scans = 0;
 VAR_10->threshold.preempts = 0;
 VAR_10->threshold.latency = 0;
 VAR_10->threshold.latency_min = VAR_0;
 VAR_10->threshold.latency_max = 0;

 FUNC_9(VAR_8);
 FUNC_3(VAR_11);
}
