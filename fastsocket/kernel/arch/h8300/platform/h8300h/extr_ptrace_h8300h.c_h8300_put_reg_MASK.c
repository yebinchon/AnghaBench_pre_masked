
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long usp; scalar_t__ esp0; } ;
struct task_struct {TYPE_1__ thread; } ;


 unsigned short VAR_0 ;


 scalar_t__* VAR_1 ;

int FUNC_0(struct task_struct *VAR_2, int VAR_3, unsigned long VAR_4)
{
 unsigned short VAR_5;
 switch (VAR_3) {
 case 128:
  VAR_2->thread.usp = VAR_4 - sizeof(long)*2;
 case 129:
  VAR_5 = *(unsigned short *)(VAR_2->thread.esp0 + VAR_1[VAR_3]);
  VAR_5 &= ~VAR_0;
  VAR_4 &= VAR_0;
  VAR_4 |= VAR_5;
  *(unsigned short *)(VAR_2->thread.esp0 + VAR_1[VAR_3]) = VAR_4;
  break;
 default:
  *(unsigned long *)(VAR_2->thread.esp0 + VAR_1[VAR_3]) = VAR_4;
  break;
 }
 return 0;
}
