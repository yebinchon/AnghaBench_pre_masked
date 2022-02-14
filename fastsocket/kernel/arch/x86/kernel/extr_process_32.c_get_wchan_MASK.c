
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sp; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

unsigned long FUNC_2(struct task_struct *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;
 if (!VAR_4 || VAR_4 == VAR_1 || VAR_4->state == VAR_0)
  return 0;
 VAR_8 = (unsigned long)FUNC_1(VAR_4);
 VAR_6 = VAR_4->thread.sp;
 if (!VAR_8 || VAR_6 < VAR_8 || VAR_6 > VAR_3+VAR_8)
  return 0;

 VAR_5 = *(unsigned long *) VAR_6;
 do {
  if (VAR_5 < VAR_8 || VAR_5 > VAR_2+VAR_8)
   return 0;
  VAR_7 = *(unsigned long *) (VAR_5+4);
  if (!FUNC_0(VAR_7))
   return VAR_7;
  VAR_5 = *(unsigned long *) VAR_5;
 } while (VAR_9++ < 16);
 return 0;
}
