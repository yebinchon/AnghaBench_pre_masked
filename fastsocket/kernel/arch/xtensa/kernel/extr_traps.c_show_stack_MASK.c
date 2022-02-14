
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct task_struct*,unsigned long*) ;
 unsigned long* FUNC_3 (struct task_struct*) ;

void FUNC_4(struct task_struct *VAR_1, unsigned long *VAR_2)
{
 int VAR_3 = 0;
 unsigned long *VAR_4;

 if (!VAR_2)
  VAR_2 = FUNC_3(VAR_1);
  VAR_4 = VAR_2;

 FUNC_1("\nStack: ");

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_0(VAR_2))
   break;
  if (VAR_3 && ((VAR_3 % 8) == 0))
   FUNC_1("\n       ");
  FUNC_1("%08lx ", *VAR_2++);
 }
 FUNC_1("\n");
 FUNC_2(VAR_1, VAR_4);
}
