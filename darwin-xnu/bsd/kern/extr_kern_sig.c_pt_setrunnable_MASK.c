
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int task_t ;
typedef TYPE_1__* proc_t ;
typedef int caddr_t ;
struct TYPE_5__ {int p_lflag; scalar_t__ sigwait; int p_stat; int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(proc_t VAR_3)
{
 task_t VAR_4;

 VAR_4 = VAR_3->task;

 if (VAR_3->p_lflag & VAR_1) {
  FUNC_0(VAR_3);
  VAR_3->p_stat = VAR_2;
  FUNC_1(VAR_3);
  if (VAR_3->sigwait) {
   FUNC_3((caddr_t)&(VAR_3->sigwait));
   if ((VAR_3->p_lflag & VAR_0) == 0) {
    FUNC_2(VAR_4);
   }
  }
 }
}
