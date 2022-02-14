
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int sched_call_t ;
struct TYPE_3__ {int state; int sched_call; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(
 thread_t VAR_1,
 sched_call_t VAR_2)
{
 FUNC_0((VAR_1->state & VAR_0) == 0);
 VAR_1->sched_call = VAR_2;
}
