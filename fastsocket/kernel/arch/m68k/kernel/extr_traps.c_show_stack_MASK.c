
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ esp0; } ;
struct task_struct {TYPE_1__ thread; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned long*) ;

void FUNC_2(struct task_struct *VAR_2, unsigned long *VAR_3)
{
 unsigned long *VAR_4;
 unsigned long *VAR_5;
 int VAR_6;

 if (!VAR_3) {
  if (VAR_2)
   VAR_3 = (unsigned long *)VAR_2->thread.esp0;
  else
   VAR_3 = (unsigned long *)&VAR_3;
 }
 VAR_5 = (unsigned long *)(((unsigned long)VAR_3 + VAR_0 - 1) & -VAR_0);

 FUNC_0("Stack from %08lx:", (unsigned long)VAR_3);
 VAR_4 = VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4 + 1 > VAR_5)
   break;
  if (VAR_6 % 8 == 0)
   FUNC_0("\n       ");
  FUNC_0(" %08lx", *VAR_4++);
 }
 FUNC_0("\n");
 FUNC_1(VAR_3);
}
