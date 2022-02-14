
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_trap {int nr_trap; int * insn; int * addr; } ;
struct TYPE_2__ {struct debug_trap debug_trap; } ;
struct task_struct {TYPE_1__ thread; } ;


 int FUNC_0 (struct task_struct*,int ,int *,int,int) ;

__attribute__((used)) static void
FUNC_1(struct task_struct *VAR_0)
{
 struct debug_trap *VAR_1 = &VAR_0->thread.debug_trap;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_trap; VAR_2++)
  FUNC_0(VAR_0, VAR_1->addr[VAR_2], &VAR_1->insn[VAR_2], sizeof(VAR_1->insn[VAR_2]), 1);
 VAR_1->nr_trap = 0;
}
