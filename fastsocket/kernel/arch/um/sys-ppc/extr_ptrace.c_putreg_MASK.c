
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* regs; } ;
struct TYPE_4__ {TYPE_1__ process_regs; } ;
struct task_struct {TYPE_2__ thread; } ;



int FUNC_0(struct task_struct *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 VAR_0->thread.process_regs.regs[VAR_1 >> 2] = VAR_2;
 return 0;
}
