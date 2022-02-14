
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* switch_buf; } ;
struct task_struct {scalar_t__ state; TYPE_2__ thread; } ;
struct TYPE_3__ {unsigned long JB_SP; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 struct task_struct* VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

unsigned long FUNC_3(struct task_struct *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;
 bool VAR_7 = 0;

 if ((VAR_3 == ((void*)0)) || (VAR_3 == VAR_2) || (VAR_3->state == VAR_0))
  return 0;

 VAR_4 = (unsigned long) FUNC_2(VAR_3);

 if (VAR_4 == 0)
  return 0;

 VAR_5 = VAR_3->thread.switch_buf->JB_SP;




 if (VAR_5 < VAR_4)
  return 0;

 while (VAR_5 < VAR_4 + VAR_1) {
  VAR_6 = *((unsigned long *) VAR_5);
  if (FUNC_0(VAR_6))

   VAR_7 = 1;
  else if (FUNC_1(VAR_6) && VAR_7)
   return VAR_6;

  VAR_5 += sizeof(unsigned long);
 }

 return 0;
}
