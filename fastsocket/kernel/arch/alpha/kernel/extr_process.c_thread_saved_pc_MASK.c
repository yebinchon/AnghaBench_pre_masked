
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_3__ {unsigned long ksp; } ;
struct TYPE_4__ {TYPE_1__ pcb; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 TYPE_2__* FUNC_1 (struct task_struct*) ;

unsigned long
FUNC_2(struct task_struct *VAR_0)
{
 unsigned long VAR_1 = (unsigned long)FUNC_0(VAR_0);
 unsigned long VAR_2, VAR_3 = FUNC_1(VAR_0)->pcb.ksp;

 if (VAR_3 > VAR_1 && VAR_3+6*8 < VAR_1 + 16*1024) {
  VAR_2 = ((unsigned long*)VAR_3)[6];
  if (VAR_2 > VAR_3 && VAR_2 < VAR_1 + 16*1024)
   return *(unsigned long *)VAR_2;
 }

 return 0;
}
