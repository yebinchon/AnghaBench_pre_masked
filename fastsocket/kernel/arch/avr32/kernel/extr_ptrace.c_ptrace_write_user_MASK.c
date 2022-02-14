
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user {int dummy; } ;
struct task_struct {int pid; int comm; } ;
struct pt_regs {int dummy; } ;
typedef int regs ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (char*,unsigned long,...) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_1, unsigned long VAR_2,
        unsigned long VAR_3)
{
 unsigned long *VAR_4;

 FUNC_1("ptrace_write_user(%s[%u], %#lx, %#lx)\n",
   VAR_1->comm, VAR_1->pid, VAR_2, VAR_3);

 if (VAR_2 & 3 || VAR_2 >= sizeof(struct user)) {
  FUNC_1("  invalid offset 0x%08lx\n", VAR_2);
  return -VAR_0;
 }

 if (VAR_2 >= sizeof(struct pt_regs))
  return 0;

 VAR_4 = (unsigned long *)FUNC_0(VAR_1);
 VAR_4[VAR_2 / sizeof(VAR_4[0])] = VAR_3;

 return 0;
}
