
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long cr2; unsigned long error_code; int trap_no; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct task_struct* VAR_3 ;
 int FUNC_0 (int ,int,unsigned long,struct task_struct*,int ) ;
 scalar_t__ FUNC_1 (struct pt_regs*,unsigned long) ;
 scalar_t__ FUNC_2 (struct pt_regs*,unsigned long) ;
 scalar_t__ FUNC_3 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_6 (struct pt_regs*,unsigned long,unsigned long,struct task_struct*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct pt_regs *VAR_5, unsigned long VAR_6,
         unsigned long VAR_7, int VAR_8)
{
 struct task_struct *VAR_9 = VAR_3;


 if (VAR_6 & VAR_0) {



  FUNC_4();





  if (FUNC_3(VAR_5, VAR_6, VAR_7))
   return;

  if (FUNC_1(VAR_5, VAR_7))
   return;

  if (FUNC_7(VAR_4))
   FUNC_6(VAR_5, VAR_6, VAR_7, VAR_9);


  VAR_9->thread.cr2 = VAR_7;
  VAR_9->thread.error_code = VAR_6 | (VAR_7 >= VAR_2);
  VAR_9->thread.trap_no = 14;

  FUNC_0(VAR_1, VAR_8, VAR_7, VAR_9, 0);

  return;
 }

 if (FUNC_2(VAR_5, VAR_7))
  return;

 FUNC_5(VAR_5, VAR_6, VAR_7);
}
