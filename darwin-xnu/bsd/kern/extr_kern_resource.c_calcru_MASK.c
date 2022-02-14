
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int microseconds; int seconds; } ;
struct TYPE_12__ {int microseconds; int seconds; } ;
struct TYPE_16__ {TYPE_4__ system_time; TYPE_3__ user_time; } ;
typedef TYPE_7__ task_thread_times_info_data_t ;
typedef scalar_t__ task_t ;
typedef int task_info_t ;
struct TYPE_17__ {scalar_t__ csw; scalar_t__ pageins; scalar_t__ faults; } ;
typedef TYPE_8__ task_events_info_data_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct proc {TYPE_6__* p_stats; scalar_t__ task; } ;
struct TYPE_11__ {int microseconds; int seconds; } ;
struct TYPE_10__ {int microseconds; int seconds; } ;
struct TYPE_18__ {int resident_size_max; TYPE_2__ system_time; TYPE_1__ user_time; } ;
typedef TYPE_9__ mach_task_basic_info_data_t ;
typedef int mach_msg_type_number_t ;
struct TYPE_14__ {scalar_t__ ru_nivcsw; scalar_t__ ru_nvcsw; int ru_maxrss; scalar_t__ ru_majflt; scalar_t__ ru_minflt; } ;
struct TYPE_15__ {TYPE_5__ p_ru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ,int ,int *) ;
 int FUNC_1 (struct timeval*,struct timeval*,struct timeval*) ;
 int FUNC_2 (struct timeval*) ;

void
FUNC_3(struct proc *VAR_6, struct timeval *VAR_7, struct timeval *VAR_8, struct timeval *VAR_9)
{
 task_t VAR_10;

 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 if (VAR_9 != ((void*)0))
  FUNC_2(VAR_9);

 VAR_10 = VAR_6->task;
 if (VAR_10) {
  mach_task_basic_info_data_t VAR_11;
  task_thread_times_info_data_t VAR_12;
  task_events_info_data_t VAR_13;
  mach_msg_type_number_t VAR_14, VAR_15;
  mach_msg_type_number_t VAR_16;
  struct timeval VAR_17,VAR_18;

  VAR_14 = VAR_1;
  FUNC_0(VAR_10, VAR_0,
     (task_info_t)&VAR_11, &VAR_14);
  VAR_17.tv_sec = VAR_11.user_time.seconds;
  VAR_17.tv_usec = VAR_11.user_time.microseconds;
  VAR_18.tv_sec = VAR_11.system_time.seconds;
  VAR_18.tv_usec = VAR_11.system_time.microseconds;
  FUNC_1(&VAR_17, VAR_7, VAR_7);
  FUNC_1(&VAR_18, VAR_8, VAR_8);

  VAR_15 = VAR_5;
  FUNC_0(VAR_10, VAR_4,
     (task_info_t)&VAR_12, &VAR_15);

  VAR_17.tv_sec = VAR_12.user_time.seconds;
  VAR_17.tv_usec = VAR_12.user_time.microseconds;
  VAR_18.tv_sec = VAR_12.system_time.seconds;
  VAR_18.tv_usec = VAR_12.system_time.microseconds;
  FUNC_1(&VAR_17, VAR_7, VAR_7);
  FUNC_1(&VAR_18, VAR_8, VAR_8);

  VAR_16 = VAR_3;
  FUNC_0(VAR_10, VAR_2,
     (task_info_t)&VAR_13, &VAR_16);





  VAR_6->p_stats->p_ru.ru_minflt = (VAR_13.faults -
           VAR_13.pageins);
  VAR_6->p_stats->p_ru.ru_majflt = VAR_13.pageins;
  VAR_6->p_stats->p_ru.ru_nivcsw = (VAR_13.csw -
           VAR_6->p_stats->p_ru.ru_nvcsw);
  if (VAR_6->p_stats->p_ru.ru_nivcsw < 0)
   VAR_6->p_stats->p_ru.ru_nivcsw = 0;

  VAR_6->p_stats->p_ru.ru_maxrss = VAR_11.resident_size_max;
 }
}
