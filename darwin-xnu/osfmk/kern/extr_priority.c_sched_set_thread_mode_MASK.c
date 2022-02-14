
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int sched_mode_t ;
struct TYPE_4__ {scalar_t__ runq; int sched_mode; } ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(thread_t VAR_1, sched_mode_t VAR_2)
{
 FUNC_0(VAR_1->runq == VAR_0);

 switch (VAR_2) {
 case 130:
 case 129:
 case 128:
  break;

 default:
  FUNC_1("unexpected mode: %d", VAR_2);
  break;
 }

 VAR_1->sched_mode = VAR_2;

 FUNC_2(VAR_1);
}
