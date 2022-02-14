
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int fpexc_mode; struct pt_regs* regs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct task_struct *VAR_8, unsigned int VAR_9)
{
 struct pt_regs *VAR_10 = VAR_8->thread.regs;





 if (VAR_9 & VAR_7) {
  return -VAR_1;

 }






 if (VAR_9 > VAR_6)
  return -VAR_1;
 VAR_8->thread.fpexc_mode = FUNC_0(VAR_9);
 if (VAR_10 != ((void*)0) && (VAR_10->msr & VAR_4) != 0)
  VAR_10->msr = (VAR_10->msr & ~(VAR_2|VAR_3))
   | VAR_8->thread.fpexc_mode;
 return 0;
}
