
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_0, unsigned long *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1)
  VAR_1 = (unsigned long*)&VAR_1;

 FUNC_3("Call Trace: ");
 while (!FUNC_1(VAR_1)) {
  VAR_2 = *VAR_1++;
  if (FUNC_0(VAR_2)) {
   FUNC_3("[<%08lx>] ", VAR_2);
   FUNC_2("%s\n", VAR_2);
  }
 }
 FUNC_3("\n");
}
