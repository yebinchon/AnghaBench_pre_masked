
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ ksp; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;
struct switch_stack {unsigned long a6; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (unsigned long) ;

unsigned long FUNC_1(struct task_struct *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;
 if (!VAR_3 || VAR_3 == VAR_2 || VAR_3->state == VAR_0)
  return 0;

 VAR_6 = (unsigned long)VAR_3;
 VAR_4 = ((struct switch_stack *)VAR_3->thread.ksp)->a6;
 do {
  if (VAR_4 < VAR_6+sizeof(struct thread_info) ||
      VAR_4 >= VAR_1-8+VAR_6)
   return 0;
  VAR_5 = ((unsigned long *)VAR_4)[1];
  if (!FUNC_0(VAR_5))
   return VAR_5;
  VAR_4 = *(unsigned long *) VAR_4;
 } while (VAR_7++ < 16);
 return 0;
}
