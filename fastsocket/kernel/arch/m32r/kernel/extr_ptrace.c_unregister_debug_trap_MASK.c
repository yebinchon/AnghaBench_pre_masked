
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_trap {int nr_trap; unsigned long* addr; unsigned long* insn; } ;
struct TYPE_2__ {struct debug_trap debug_trap; } ;
struct task_struct {TYPE_1__ thread; } ;



__attribute__((used)) static int
FUNC_0(struct task_struct *VAR_0, unsigned long VAR_1,
        unsigned long *VAR_2)
{
 struct debug_trap *VAR_3 = &VAR_0->thread.debug_trap;
        int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3->nr_trap; VAR_4++) {
  if (VAR_3->addr[VAR_4] == VAR_1)
   break;
 }
 if (VAR_4 >= VAR_3->nr_trap) {



  return 0;
 }


 *VAR_2 = VAR_3->insn[VAR_4];


 while (VAR_4 < VAR_3->nr_trap - 1) {
  VAR_3->insn[VAR_4] = VAR_3->insn[VAR_4 + 1];
  VAR_3->addr[VAR_4] = VAR_3->addr[VAR_4 + 1];
  VAR_4++;
 }
 VAR_3->nr_trap--;
 return 1;
}
