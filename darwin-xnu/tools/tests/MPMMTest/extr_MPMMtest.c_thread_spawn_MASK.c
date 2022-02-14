
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tid; scalar_t__ pid; } ;
typedef TYPE_1__ thread_id_t ;
typedef scalar_t__ kern_return_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_4 (scalar_t__*,int *,void* (*) (void*),void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(thread_id_t *VAR_2, void *(VAR_3)(void *), void *VAR_4) {
 if (VAR_0) {
  kern_return_t VAR_5;
  VAR_5 = FUNC_4(
    &VAR_2->tid,
    ((void*)0),
    VAR_3,
    VAR_4);
  if (VAR_5 != 0)
   FUNC_0(1, "pthread_create()");
  if (VAR_1 > 1)
   FUNC_3("created pthread %p\n", VAR_2->tid);
 } else {
  VAR_2->pid = FUNC_2();
  if (VAR_2->pid == 0) {
   if (VAR_1 > 1)
    FUNC_3("calling %p(%p)\n", VAR_3, VAR_4);
   VAR_3(VAR_4);
   FUNC_1(0);
  }
  if (VAR_1 > 1)
   FUNC_3("forked pid %d\n", VAR_2->pid);
 }
}
