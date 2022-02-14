
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_t ;
typedef TYPE_1__* proc_t ;
typedef int caddr_t ;
struct TYPE_4__ {int p_mlock; int sigwait_thread; scalar_t__ exit_thread; scalar_t__ sigwait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(proc_t VAR_2)
{
 thread_t VAR_3 = FUNC_0();

 while (VAR_2->sigwait || VAR_2->exit_thread) {
  if (VAR_2->exit_thread) {
   return(0);
  }
  FUNC_1((caddr_t)&VAR_2->sigwait_thread, &VAR_2->p_mlock, VAR_0 | VAR_1, 0, 0);
  if (FUNC_3(VAR_3)) {



   FUNC_2(VAR_2);
   return -1;
  }
  FUNC_2(VAR_2);
 }
 return 1;
}
