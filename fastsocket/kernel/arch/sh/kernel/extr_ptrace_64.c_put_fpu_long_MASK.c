
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hard; } ;
struct TYPE_3__ {TYPE_2__ fpu; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int sr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 struct task_struct* VAR_2 ;
 int FUNC_3 (struct task_struct*,struct pt_regs*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;

__attribute__((used)) static inline int
FUNC_6(struct task_struct *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 struct pt_regs *VAR_6;

 VAR_6 = (struct pt_regs*)((unsigned char *)VAR_3 + VAR_1) - 1;

 if (!FUNC_5(VAR_3)) {
  FUNC_2(&VAR_3->thread.fpu.hard);
  FUNC_4(VAR_3);
 } else if (VAR_2 == VAR_3) {
  FUNC_1();
  FUNC_3(VAR_3, VAR_6);
  FUNC_0();
  VAR_2 = 0;
  VAR_6->sr |= VAR_0;
 }

 ((long *)&VAR_3->thread.fpu)[VAR_4 / sizeof(unsigned long)] = VAR_5;
 return 0;
}
