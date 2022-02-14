
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_t ;
struct proc {int dummy; } ;
struct bsdthread_terminate_args {int sem; int port; int freesize; int stackaddr; } ;
typedef int int32_t ;
struct TYPE_2__ {int (* bsdthread_terminate ) (struct proc*,int ,int ,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct proc*,int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct proc*,int ) ;

int
FUNC_5(struct proc *VAR_2, struct bsdthread_terminate_args *VAR_3, int32_t *VAR_4)
{
 thread_t VAR_5 = FUNC_0();
 if (FUNC_3(VAR_5) & VAR_0) {
  FUNC_4(VAR_2, FUNC_1(VAR_5));
 }
 return VAR_1->bsdthread_terminate(VAR_2, VAR_3->stackaddr, VAR_3->freesize, VAR_3->port, VAR_3->sem, VAR_4);
}
