
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int bpt_nsaved; int * bpt_insn; int * bpt_addr; } ;


 int FUNC_0 (char*,int) ;
 TYPE_1__* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*,int ,int ) ;

int
FUNC_3(struct task_struct * VAR_0)
{
 int VAR_1, VAR_2 = FUNC_1(VAR_0)->bpt_nsaved;

 FUNC_1(VAR_0)->bpt_nsaved = 0;

 if (VAR_2 > 2) {
  FUNC_0("ptrace_cancel_bpt: bogus nsaved: %d!\n", VAR_2);
  VAR_2 = 2;
 }

 for (VAR_1 = 0; VAR_1 < VAR_2; ++VAR_1) {
  FUNC_2(VAR_0, FUNC_1(VAR_0)->bpt_addr[VAR_1],
     FUNC_1(VAR_0)->bpt_insn[VAR_1]);
 }
 return (VAR_2 != 0);
}
