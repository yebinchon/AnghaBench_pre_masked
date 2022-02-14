
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * evr; scalar_t__ ksp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int xer; int ctr; int link; int ccr; int msr; int nip; int * gpr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long*,int ) ;
 int FUNC_2 (unsigned long*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (unsigned long*,int ,int) ;

void FUNC_4(unsigned long *VAR_2, struct task_struct *VAR_3)
{
 struct pt_regs *VAR_4 = (struct pt_regs *)(VAR_3->thread.ksp +
        VAR_1);
 unsigned long *VAR_5 = VAR_2;
 int VAR_6;

 FUNC_3(VAR_2, 0, VAR_0);


 for (VAR_6 = 0; VAR_6 < 3; VAR_6++)
  FUNC_2(VAR_5, VAR_4->gpr[VAR_6]);


 VAR_5 += 11;


 for (VAR_6 = 14; VAR_6 < 32; VAR_6++)
  FUNC_2(VAR_5, VAR_4->gpr[VAR_6]);
 VAR_5 += 32 * 8 / sizeof(long);


 FUNC_2(VAR_5, VAR_4->nip);
 FUNC_2(VAR_5, VAR_4->msr);
 FUNC_1(VAR_5, VAR_4->ccr);
 FUNC_2(VAR_5, VAR_4->link);
 FUNC_2(VAR_5, VAR_4->ctr);
 FUNC_1(VAR_5, VAR_4->xer);

 FUNC_0((unsigned long)VAR_5 >
        (unsigned long)(((void *)VAR_2) + VAR_0));
}
