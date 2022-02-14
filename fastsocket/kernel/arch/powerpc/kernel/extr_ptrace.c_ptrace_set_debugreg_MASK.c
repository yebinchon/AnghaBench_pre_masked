
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long dabr; int dbcr0; TYPE_1__* regs; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_3__ {int msr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;

int FUNC_0(struct task_struct *VAR_8, unsigned long VAR_9,
          unsigned long VAR_10)
{




 if (VAR_9 > 0)
  return -VAR_4;


 if ((VAR_10 & ~0x7UL) >= VAR_7)
  return -VAR_5;
 if (VAR_10 && !(VAR_10 & VAR_0))
  return -VAR_5;


 VAR_8->thread.dabr = VAR_10;
 return 0;
}
