
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regs; } ;
struct task_struct {TYPE_1__ thread; } ;







 unsigned long FUNC_0 (int *,int) ;

 int VAR_0 ;
 int FUNC_1 (struct task_struct*,int ) ;

unsigned long FUNC_2(struct task_struct *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = ~0UL;
 switch (VAR_2) {
 case 130:
 case 129:
 case 132:
 case 131:
 case 128:
 case 133:
  VAR_3 = 0xffff;

 default:
  VAR_3 &= FUNC_0(&VAR_1->thread.regs, VAR_2);




 }
 return VAR_3;
}
