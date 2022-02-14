
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int fph; } ;
struct task_struct {TYPE_1__ thread; } ;
struct ia64_psr {int dfh; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 struct ia64_psr* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct task_struct*) ;

void
FUNC_5 (struct task_struct *VAR_1)
{
 struct ia64_psr *VAR_2 = FUNC_2(FUNC_4(VAR_1));

 FUNC_1(VAR_1);
 if (!(VAR_1->thread.flags & VAR_0)) {
  VAR_1->thread.flags |= VAR_0;
  FUNC_3(&VAR_1->thread.fph, 0, sizeof(VAR_1->thread.fph));
 }
 FUNC_0(VAR_1);
 VAR_2->dfh = 1;
}
