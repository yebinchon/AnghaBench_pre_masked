
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ksp; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct task_struct* VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,struct task_struct*,int ) ;

unsigned long FUNC_2(struct task_struct *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 int VAR_7 = 0;

 if (!VAR_4 || VAR_4 == VAR_3 || VAR_4->state == VAR_2)
  return 0;

 VAR_6 = VAR_4->thread.ksp;
 if (!FUNC_1(VAR_6, VAR_4, VAR_1))
  return 0;

 do {
  VAR_6 = *(unsigned long *)VAR_6;
  if (!FUNC_1(VAR_6, VAR_4, VAR_1))
   return 0;
  if (VAR_7 > 0) {
   VAR_5 = ((unsigned long *)VAR_6)[VAR_0];
   if (!FUNC_0(VAR_5))
    return VAR_5;
  }
 } while (VAR_7++ < 16);
 return 0;
}
