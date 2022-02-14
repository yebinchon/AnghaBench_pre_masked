
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int xer; int ctr; int link; int ccr; int msr; int nip; int * gpr; } ;
struct TYPE_3__ {int * evr; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (int ,unsigned long*) ;
 TYPE_2__* VAR_1 ;

void FUNC_3(unsigned long *VAR_2, struct pt_regs *VAR_3)
{
 unsigned long *VAR_4 = VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
  FUNC_2(VAR_3->gpr[VAR_5], VAR_4);
 VAR_4 += 32 * 8 / sizeof(int);


 FUNC_2(VAR_3->nip, VAR_4);
 FUNC_2(VAR_3->msr, VAR_4);
 FUNC_1(VAR_3->ccr, VAR_4);
 FUNC_2(VAR_3->link, VAR_4);
 FUNC_2(VAR_3->ctr, VAR_4);
 FUNC_1(VAR_3->xer, VAR_4);

 FUNC_0((unsigned long)VAR_4 >
        (unsigned long)(((void *)VAR_2) + VAR_0));
}
