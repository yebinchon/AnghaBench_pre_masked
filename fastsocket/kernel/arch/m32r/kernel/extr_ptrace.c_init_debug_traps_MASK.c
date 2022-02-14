
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_trap {scalar_t__* insn; scalar_t__* addr; scalar_t__ nr_trap; } ;
struct TYPE_2__ {struct debug_trap debug_trap; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;

void
FUNC_0(struct task_struct *VAR_1)
{
 struct debug_trap *VAR_2 = &VAR_1->thread.debug_trap;
 int VAR_3;
 VAR_2->nr_trap = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->addr[VAR_3] = 0;
  VAR_2->insn[VAR_3] = 0;
 }
}
