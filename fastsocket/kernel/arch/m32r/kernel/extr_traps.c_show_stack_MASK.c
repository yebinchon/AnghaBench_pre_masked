
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sp; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct task_struct*,unsigned long*) ;

void FUNC_3(struct task_struct *VAR_1, unsigned long *VAR_2)
{
 unsigned long *VAR_3;
 int VAR_4;






 if(VAR_2==((void*)0)) {
  if (VAR_1)
   VAR_2 = (unsigned long *)VAR_1->thread.sp;
  else
   VAR_2=(unsigned long*)&VAR_2;
 }

 VAR_3 = VAR_2;
 for(VAR_4=0; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_0(VAR_3))
   break;
  if (VAR_4 && ((VAR_4 % 4) == 0))
   FUNC_1("\n       ");
  FUNC_1("%08lx ", *VAR_3++);
 }
 FUNC_1("\n");
 FUNC_2(VAR_1, VAR_2);
}
