
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ ksp; } ;
struct TYPE_4__ {TYPE_1__ pcb; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 TYPE_2__* FUNC_1 (struct task_struct*) ;
 unsigned long FUNC_2 (struct task_struct*) ;

unsigned long
FUNC_3(struct task_struct *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 if (!VAR_2 || VAR_2 == VAR_1 || VAR_2->state == VAR_0)
  return 0;
 VAR_4 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_4)) {
  VAR_3 = ((unsigned long *)FUNC_1(VAR_2)->pcb.ksp)[6];
  return ((unsigned long *)VAR_3)[12];
 }
 return VAR_4;
}
