
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long usp; scalar_t__ esp0; } ;
struct task_struct {TYPE_1__ thread; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;



 scalar_t__* VAR_2 ;

int FUNC_0(struct task_struct *VAR_3, int VAR_4, unsigned long VAR_5)
{
 unsigned short VAR_6;
 switch (VAR_4) {
 case 128:
  VAR_3->thread.usp = VAR_5 - sizeof(long)*2 - 2;
 case 130:
  VAR_6 = *(unsigned short *)(VAR_3->thread.esp0 + VAR_2[VAR_4]);
  VAR_6 &= ~VAR_0;
  VAR_5 &= VAR_0;
  VAR_5 |= VAR_6;
  *(unsigned short *)(VAR_3->thread.esp0 + VAR_2[VAR_4]) = VAR_5;
  break;
 case 129:

  return -VAR_1;
 default:
  *(unsigned long *)(VAR_3->thread.esp0 + VAR_2[VAR_4]) = VAR_5;
  break;
 }
 return 0;
}
