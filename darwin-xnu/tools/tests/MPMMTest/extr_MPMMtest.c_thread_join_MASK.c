
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tid; int pid; } ;
typedef TYPE_1__ thread_id_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_4(thread_id_t *VAR_3) {
 if (VAR_1) {
  kern_return_t VAR_4;
  if (VAR_2 > 1)
   FUNC_1("joining thread %p\n", VAR_3->tid);
  VAR_4 = FUNC_2(VAR_3->tid, ((void*)0));
  if (VAR_4 != VAR_0)
   FUNC_0(1, "pthread_join(%p)", VAR_3->tid);
 } else {
  int VAR_5;
  if (VAR_2 > 1)
   FUNC_1("waiting for pid %d\n", VAR_3->pid);
  FUNC_3(VAR_3->pid, &VAR_5, 0);
 }
}
