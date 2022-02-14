
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int regs; } ;
struct TYPE_7__ {int (* proc ) (void*) ;void* arg; } ;
struct TYPE_8__ {TYPE_1__ thread; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_11__ {TYPE_4__ regs; int exec_buf; TYPE_3__ request; int * prev_sched; } ;
struct TYPE_12__ {TYPE_5__ thread; } ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int (*) (void*),void*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 int (*VAR_1)(void *), VAR_2;
 void *VAR_3;

 if (VAR_0->thread.prev_sched != ((void*)0))
  FUNC_3(VAR_0->thread.prev_sched);
 VAR_0->thread.prev_sched = ((void*)0);

 VAR_1 = VAR_0->thread.request.u.thread.proc;
 VAR_3 = VAR_0->thread.request.u.thread.arg;





 VAR_2 = FUNC_2(VAR_1, VAR_3, &VAR_0->thread.exec_buf);
 if (VAR_2 == 1) {

  FUNC_1();
  FUNC_4(&VAR_0->thread.regs.regs);
 }
 else FUNC_0(0);
}
