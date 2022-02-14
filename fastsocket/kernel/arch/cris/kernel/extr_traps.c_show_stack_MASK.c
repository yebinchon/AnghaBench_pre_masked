
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ksp; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long*) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (unsigned long*) ;

void
FUNC_4(struct task_struct *VAR_2, unsigned long *VAR_3)
{
 unsigned long *VAR_4, VAR_5;
 int VAR_6;






 if (VAR_3 == ((void*)0)) {
  if (VAR_2)
   VAR_3 = (unsigned long*)VAR_2->thread.ksp;
  else
   VAR_3 = (unsigned long*)FUNC_2();
 }

 VAR_4 = VAR_3;

 FUNC_1("\nStack from %08lx:\n       ", (unsigned long)VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (((long)VAR_4 & (VAR_0-1)) == 0)
   break;
  if (VAR_6 && ((VAR_6 % 8) == 0))
   FUNC_1("\n       ");
  if (FUNC_0(VAR_5, VAR_4)) {



   FUNC_1("Failing address 0x%lx\n", (unsigned long)VAR_4);
   break;
  }
  VAR_4++;
  FUNC_1("%08lx ", VAR_5);
 }
 FUNC_3(VAR_3);
}
