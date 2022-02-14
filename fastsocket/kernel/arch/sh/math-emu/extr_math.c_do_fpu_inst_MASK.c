
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_fpu_soft_struct {int dummy; } ;
struct TYPE_3__ {struct sh_fpu_soft_struct soft; } ;
struct TYPE_4__ {TYPE_1__ fpu; } ;
struct task_struct {TYPE_2__ thread; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (unsigned short,struct sh_fpu_soft_struct*,struct pt_regs*) ;
 int FUNC_1 (struct sh_fpu_soft_struct*) ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 (struct task_struct*,int ) ;

int FUNC_4(unsigned short VAR_2, struct pt_regs *VAR_3)
{
 struct task_struct *VAR_4 = VAR_1;
 struct sh_fpu_soft_struct *VAR_5 = &(VAR_4->thread.fpu.soft);

 if (!FUNC_3(VAR_4, VAR_0)) {

  FUNC_1(VAR_5);
  FUNC_2(VAR_4, VAR_0);
 }

 return FUNC_0(VAR_2, VAR_5, VAR_3);
}
