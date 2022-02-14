
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_11__ {scalar_t__ earliest_soft_deadline; } ;
struct TYPE_8__ {scalar_t__ deadline; int has_expired; scalar_t__ when_set; TYPE_4__ queue; } ;
typedef TYPE_1__ rtclock_timer_t ;
typedef int int64_t ;
struct TYPE_9__ {scalar_t__ quantum_timer_deadline; TYPE_1__ rtclock_timer; } ;
typedef TYPE_2__ cpu_data_t ;
typedef int boolean_t ;
struct TYPE_10__ {int rtcDeadline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int ,scalar_t__,int,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 void* VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (TYPE_4__*,scalar_t__) ;
 int FUNC_13 () ;
 TYPE_3__* FUNC_14 () ;

void
FUNC_15(int VAR_10,
     uint64_t VAR_11)
{
 uint64_t VAR_12;
 rtclock_timer_t *VAR_13;
 cpu_data_t *VAR_14;
 int64_t VAR_15;
 uint64_t VAR_16;
 boolean_t VAR_17 = VAR_6;

 VAR_14 = FUNC_6();

 FUNC_2(FUNC_7());

 VAR_12 = FUNC_8();


 VAR_13 = &VAR_14->rtclock_timer;

 if ((VAR_17 = ((VAR_13->deadline <= VAR_12) ||
      (VAR_12 >= (VAR_13->queue.earliest_soft_deadline))))) {






  VAR_15 = (int64_t) (VAR_12 - FUNC_1(VAR_13->deadline,
         VAR_13->when_set));



  if (VAR_15 < 0) {
   FUNC_3(0xEEEE0000, VAR_12, VAR_13->queue.earliest_soft_deadline, VAR_12 - VAR_13->queue.earliest_soft_deadline, 0, 0);
   VAR_15 = 0;
  }

  FUNC_0(VAR_7,
   VAR_4 | VAR_1,
   -VAR_15,
   ((VAR_10 != 0) ? VAR_11 : FUNC_4(VAR_11)),
   VAR_10, 0, 0);

  VAR_13->has_expired = VAR_8;
  VAR_13->deadline = FUNC_12(&VAR_13->queue, VAR_12);
  VAR_13->has_expired = VAR_6;


  VAR_12 = FUNC_8();
  VAR_13->when_set = VAR_12;
 }


 if ((VAR_16 = FUNC_10(VAR_14)) && (VAR_16 <= VAR_12)) {
  FUNC_0(VAR_7,
   VAR_3 | VAR_2,
   0, 0, 0, 0, 0);
  FUNC_9(VAR_14);
  FUNC_0(VAR_7,
   VAR_3 | VAR_0,
   0, 0, 0, 0, 0);
  VAR_17 = VAR_8;
  VAR_12 = FUNC_8();
 }

 uint64_t VAR_18 = VAR_14->quantum_timer_deadline;

 if ((VAR_18 <= VAR_12) && (VAR_18 > 0)) {
  VAR_14->quantum_timer_deadline = 0;
  FUNC_11(VAR_12);
 }


 FUNC_14()->rtcDeadline = VAR_5;
 FUNC_13();

 if (FUNC_5(VAR_17 == VAR_6))
  VAR_9++;
}
