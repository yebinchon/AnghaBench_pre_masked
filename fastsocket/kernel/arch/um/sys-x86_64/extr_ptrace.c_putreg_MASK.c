
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regs; } ;
struct task_struct {TYPE_1__ thread; } ;





 int VAR_0 ;

 unsigned long VAR_1 ;




 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (int *,int,unsigned long) ;

 int VAR_2 ;
 scalar_t__ FUNC_2 (struct task_struct*,int ) ;

int FUNC_3(struct task_struct *VAR_3, int VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;
 switch (VAR_4) {
 case 132:
 case 130:
 case 135:
 case 133:
 case 128:
 case 136:
  if (VAR_5 && (VAR_5 & 3) != 3)
   return -VAR_0;
  VAR_5 &= 0xffff;
  break;

 case 131:
 case 129:
  if (!((VAR_5 >> 48) == 0 || (VAR_5 >> 48) == 0xffff))
   return -VAR_0;
  break;

 case 134:
  VAR_5 &= VAR_1;
  VAR_6 = FUNC_0(&VAR_3->thread.regs) & ~VAR_1;
  VAR_5 |= VAR_6;
  break;
 }

 FUNC_1(&VAR_3->thread.regs, VAR_4, VAR_5);
 return 0;
}
