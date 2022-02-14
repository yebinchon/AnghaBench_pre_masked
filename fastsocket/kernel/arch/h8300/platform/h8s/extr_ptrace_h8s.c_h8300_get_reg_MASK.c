
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ esp0; int usp; } ;
struct task_struct {TYPE_1__ thread; } ;





 scalar_t__* VAR_0 ;

long FUNC_0(struct task_struct *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 128:
  return VAR_1->thread.usp + sizeof(long)*2 + 2;
 case 130:
 case 129:
     return *(unsigned short *)(VAR_1->thread.esp0 + VAR_0[VAR_2]);
 default:
     return *(unsigned long *)(VAR_1->thread.esp0 + VAR_0[VAR_2]);
 }
}
