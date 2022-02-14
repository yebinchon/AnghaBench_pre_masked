
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int microseconds; int seconds; } ;
typedef TYPE_3__ time_value_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct proc {int p_flag; TYPE_2__* p_stats; } ;
struct TYPE_5__ {struct timeval ru_stime; } ;
struct TYPE_6__ {TYPE_1__ p_ru; } ;


 int VAR_0 ;
 struct proc* FUNC_0 () ;

void
FUNC_1(time_value_t *VAR_1)
{
 struct proc *VAR_2 = FUNC_0();
 struct timeval VAR_3;

 if (VAR_2 == ((void*)0))
  return;
 if ( !(VAR_2->p_flag & VAR_0))
         return;


 VAR_3 = VAR_2->p_stats->p_ru.ru_stime;


 VAR_1->seconds = VAR_3.tv_sec;
 VAR_1->microseconds = VAR_3.tv_usec;
}
