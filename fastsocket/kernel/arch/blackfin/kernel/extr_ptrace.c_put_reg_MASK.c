
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long usp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {unsigned long retx; unsigned long pc; unsigned long usp; } ;





 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static inline int
FUNC_1(struct task_struct *VAR_1, int VAR_2, unsigned long VAR_3)
{
 char *VAR_4;

 struct pt_regs *VAR_5 =
     (struct pt_regs *)((unsigned long)FUNC_0(VAR_1) +
          (VAR_0 - sizeof(struct pt_regs)));
 VAR_4 = (char *)VAR_5;

 switch (VAR_2) {
 case 130:




  VAR_5->retx = VAR_3;
  VAR_5->pc = VAR_3;
  break;
 case 129:
  break;
 case 128:
  VAR_5->usp = VAR_3;
  VAR_1->thread.usp = VAR_3;
  break;
 default:
  if (VAR_2 <= 216)
   *(long *)(VAR_4 + VAR_2) = VAR_3;
 }
 return 0;
}
