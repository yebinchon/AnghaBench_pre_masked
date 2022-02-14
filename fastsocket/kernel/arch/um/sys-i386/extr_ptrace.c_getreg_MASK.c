
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regs; } ;
struct task_struct {TYPE_1__ thread; } ;







 unsigned long FUNC_0 (int *,int) ;


unsigned long FUNC_1(struct task_struct *VAR_0, int VAR_1)
{
 unsigned long VAR_2 = ~0UL;

 VAR_1 >>= 2;
 switch (VAR_1) {
 case 130:
 case 129:
 case 132:
 case 131:
 case 128:
 case 133:
  VAR_2 = 0xffff;

 default:
  VAR_2 &= FUNC_0(&VAR_0->thread.regs, VAR_1);
 }
 return VAR_2;
}
