
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nsaved; int * bp; } ;
struct TYPE_4__ {TYPE_1__ debug; } ;
struct task_struct {TYPE_2__ thread; } ;


 int FUNC_0 (struct task_struct*,int *) ;
 int FUNC_1 (char*,int) ;

void FUNC_2(struct task_struct *VAR_0)
{
 int VAR_1, VAR_2 = VAR_0->thread.debug.nsaved;

 VAR_0->thread.debug.nsaved = 0;

 if (VAR_2 > 2) {
  FUNC_1("ptrace_cancel_bpt: bogus nsaved: %d!\n", VAR_2);
  VAR_2 = 2;
 }

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->thread.debug.bp[VAR_1]);
}
