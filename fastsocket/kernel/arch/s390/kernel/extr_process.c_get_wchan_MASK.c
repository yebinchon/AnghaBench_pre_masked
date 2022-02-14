
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ksp; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;
struct stack_frame {unsigned long back_chain; unsigned long* gprs; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 struct stack_frame* FUNC_2 (struct task_struct*) ;

unsigned long FUNC_3(struct task_struct *VAR_3)
{
 struct stack_frame *VAR_4, *VAR_5, *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 if (!VAR_3 || VAR_3 == VAR_2 || VAR_3->state == VAR_1 || !FUNC_2(VAR_3))
  return 0;
 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = (struct stack_frame *) FUNC_1(VAR_3);
 VAR_4 = (struct stack_frame *) (VAR_3->thread.ksp & VAR_0);
 if (VAR_4 <= VAR_5 || VAR_4 > VAR_6)
  return 0;
 for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
  VAR_4 = (struct stack_frame *) (VAR_4->back_chain & VAR_0);
  if (VAR_4 <= VAR_5 || VAR_4 > VAR_6)
   return 0;
  VAR_7 = VAR_4->gprs[8] & VAR_0;
  if (!FUNC_0(VAR_7))
   return VAR_7;
 }
 return 0;
}
