
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int queue; } ;
struct TYPE_7__ {scalar_t__ cpu_signals; TYPE_1__ rtclock_timer; int cpu_running; } ;
typedef TYPE_2__ cpu_data_t ;
struct TYPE_8__ {scalar_t__ rtcDeadline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int VAR_8 ;
 int FUNC_14 (int *) ;
 TYPE_3__* FUNC_15 () ;
 int VAR_9 ;

void
FUNC_16(void)
{
 cpu_data_t *VAR_10 = FUNC_4();

 FUNC_1(!FUNC_5());

 FUNC_0(
  VAR_5 | VAR_2,
  0, 0, 0, 0, 0);

 FUNC_10(&VAR_9);
 VAR_10->cpu_running = VAR_4;
 FUNC_13(&VAR_9);





 FUNC_14(&VAR_10->rtclock_timer.queue);
 FUNC_7(FUNC_3(VAR_7), VAR_0, VAR_8, ((void*)0));
 FUNC_8();
 FUNC_6(VAR_6);

 while (VAR_10->cpu_signals && FUNC_15()->rtcDeadline != VAR_3)
  FUNC_2();




 FUNC_12(0);

 FUNC_6(VAR_4);
 FUNC_9();

 FUNC_0(
  VAR_5 | VAR_1,
  0, 0, 0, 0, 0);
}
