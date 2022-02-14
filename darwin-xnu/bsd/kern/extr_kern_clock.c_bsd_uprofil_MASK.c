
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_addr_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct time_value {int seconds; int microseconds; } ;
struct proc {int p_flag; TYPE_2__* p_stats; } ;
struct TYPE_3__ {struct timeval ru_stime; } ;
struct TYPE_4__ {TYPE_1__ p_ru; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ,int) ;
 struct proc* FUNC_1 () ;
 int VAR_1 ;

void
FUNC_2(struct time_value *VAR_2, user_addr_t VAR_3)
{
 struct proc *VAR_4 = FUNC_1();
 int VAR_5;
 struct timeval *VAR_6;
 struct timeval VAR_7;

 if (VAR_4 == ((void*)0))
         return;
 if ( !(VAR_4->p_flag & VAR_0))
         return;

 VAR_7.tv_sec = VAR_2->seconds;
 VAR_7.tv_usec = VAR_2->microseconds;

 VAR_6 = &(VAR_4->p_stats->p_ru.ru_stime);

 VAR_5 = ((VAR_6->tv_sec - VAR_7.tv_sec) * 1000 +
  (VAR_6->tv_usec - VAR_7.tv_usec) / 1000) /
  (VAR_1 / 1000);
 if (VAR_5)
  FUNC_0(VAR_4, VAR_3, VAR_5);
}
