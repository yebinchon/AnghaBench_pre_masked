
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_frame {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct pt_regs* const,unsigned long*,int *,unsigned int*) ;
 struct stack_frame* FUNC_1 (struct stack_frame*) ;
 scalar_t__ FUNC_2 (struct pt_regs* const) ;
 unsigned long FUNC_3 (struct pt_regs* const) ;
 int FUNC_4 (struct pt_regs* const) ;
 scalar_t__ FUNC_5 (struct pt_regs* const,unsigned int) ;

void
FUNC_6(struct pt_regs * const VAR_1, unsigned int VAR_2)
{
 struct stack_frame *VAR_3 = (struct stack_frame *)FUNC_2(VAR_1);

 if (!FUNC_4(VAR_1)) {
  unsigned long VAR_4 = FUNC_3(VAR_1);
  if (VAR_2)
   FUNC_0(((void*)0), VAR_1, (unsigned long *)VAR_4,
       &VAR_0, &VAR_2);
  return;
 }

 if (FUNC_5(VAR_1, VAR_2))
  return;

 while (VAR_2-- && VAR_3)
  VAR_3 = FUNC_1(VAR_3);
}
