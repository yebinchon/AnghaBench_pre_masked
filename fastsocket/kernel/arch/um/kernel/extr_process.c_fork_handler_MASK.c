
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int regs; } ;
struct TYPE_6__ {TYPE_1__ regs; int * prev_sched; } ;
struct TYPE_7__ {TYPE_2__ thread; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 FUNC_1();

 FUNC_3(VAR_0->thread.prev_sched);






 FUNC_0(VAR_0);

 VAR_0->thread.prev_sched = ((void*)0);


 FUNC_2();

 FUNC_4(&VAR_0->thread.regs.regs);
}
