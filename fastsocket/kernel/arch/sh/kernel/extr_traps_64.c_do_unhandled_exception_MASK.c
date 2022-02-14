
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long error_code; int trap_no; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (char*,struct pt_regs*,unsigned long) ;
 int FUNC_1 (int,struct task_struct*) ;
 int FUNC_2 (char*,int,int,struct pt_regs*) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_4(int VAR_0, int VAR_1, char *VAR_2, char *VAR_3,
  unsigned long VAR_4, struct pt_regs *VAR_5, struct task_struct *VAR_6)
{
 FUNC_2(VAR_3, VAR_0, VAR_1, VAR_5);
 VAR_6->thread.error_code = VAR_4;
 VAR_6->thread.trap_no = VAR_0;

 if (FUNC_3(VAR_5))
  FUNC_1(VAR_1, VAR_6);

 FUNC_0(VAR_2, VAR_5, VAR_4);
}
