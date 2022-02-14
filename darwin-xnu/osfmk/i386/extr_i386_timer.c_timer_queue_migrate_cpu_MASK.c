
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int deadline; int queue; } ;
struct TYPE_6__ {int cpu_number; TYPE_1__ rtclock_timer; } ;
typedef TYPE_2__ cpu_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int,int,int,int ,int ) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;

uint32_t
FUNC_7(int VAR_6)
{
 cpu_data_t *VAR_7 = FUNC_2(VAR_6);
 cpu_data_t *VAR_8 = FUNC_3();
 int VAR_9;

 FUNC_1(!FUNC_4());
 FUNC_1(VAR_6 != VAR_8->cpu_number);
 FUNC_1(VAR_6 == VAR_5);

 FUNC_0(VAR_4,
  VAR_2 | VAR_1,
  VAR_6,
  VAR_8->rtclock_timer.deadline, (VAR_8->rtclock_timer.deadline >>32),
  0, 0);
 VAR_9 = FUNC_6(&VAR_8->rtclock_timer.queue,
         &VAR_7->rtclock_timer.queue);




 if (VAR_9 > 0) {
  VAR_8->rtclock_timer.deadline = VAR_3;
  FUNC_5(VAR_3);
 }

 FUNC_0(VAR_4,
  VAR_2 | VAR_0,
  VAR_6, VAR_9, 0, 0, 0);

 return VAR_9;
}
