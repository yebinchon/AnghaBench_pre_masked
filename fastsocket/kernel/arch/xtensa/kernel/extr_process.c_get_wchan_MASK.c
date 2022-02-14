
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sp; unsigned long ra; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

unsigned long FUNC_3(struct task_struct *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6 = (unsigned long) FUNC_2(VAR_3);
 int VAR_7 = 0;

 if (!VAR_3 || VAR_3 == VAR_2 || VAR_3->state == VAR_0)
  return 0;

 VAR_4 = VAR_3->thread.sp;
 VAR_5 = FUNC_0(VAR_3->thread.ra, VAR_3->thread.sp);

 do {
  if (VAR_4 < VAR_6 + sizeof(struct task_struct) ||
      VAR_4 >= (VAR_6 + VAR_1) ||
      VAR_5 == 0)
   return 0;
  if (!FUNC_1(VAR_5))
   return VAR_5;



  VAR_5 = FUNC_0(*(unsigned long*)VAR_4 - 4, VAR_4);
  VAR_4 = *(unsigned long *)VAR_4 - 3;
 } while (VAR_7++ < 16);
 return 0;
}
