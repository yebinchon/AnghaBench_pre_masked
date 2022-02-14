
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long debugctlmsr; } ;
struct task_struct {TYPE_1__ thread; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_1,
        unsigned long VAR_2)
{
 VAR_1->thread.debugctlmsr = VAR_2;

 FUNC_0();
 if (VAR_1 == VAR_0)
  FUNC_2(VAR_2);
 FUNC_1();
}
