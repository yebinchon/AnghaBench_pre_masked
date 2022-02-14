
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {scalar_t__ ksp; } ;
struct task_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct thread_info* FUNC_0 (struct task_struct*) ;

unsigned long FUNC_1(struct task_struct *VAR_1)
{
 struct thread_info *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3 = 0xdeadbeefUL;

 if (VAR_2 && VAR_2->ksp) {
  unsigned long *VAR_4;
  VAR_4 = (unsigned long *)(VAR_2->ksp + VAR_0);
  if (((unsigned long)VAR_4 & (sizeof(long) - 1)) == 0UL &&
      VAR_4[14]) {
   unsigned long *VAR_5;
   VAR_5 = (unsigned long *)(VAR_4[14] + VAR_0);
   if (((unsigned long)VAR_5 & (sizeof(long) - 1)) == 0UL)
    VAR_3 = VAR_5[15];
  }
 }
 return VAR_3;
}
