
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int pid; } ;
struct TYPE_2__ {int sr; int pc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct task_struct*,int ) ;
 TYPE_1__* FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_2)
{
 FUNC_0("ptrace_single_step: pid=%u, PC=0x%08lx, SR=0x%08lx\n",
   VAR_2->pid, FUNC_2(VAR_2)->pc, FUNC_2(VAR_2)->sr);
 FUNC_1(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_1);
}
