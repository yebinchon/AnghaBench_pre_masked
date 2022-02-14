
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
 int FUNC_1 (unsigned long*,int ) ;
 int FUNC_2 (unsigned long*,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (unsigned long*,int ,int) ;

void FUNC_4(unsigned long *VAR_2, struct pt_regs *VAR_3)
{
 unsigned long *VAR_4 = VAR_2;
 int VAR_5;

 FUNC_3(VAR_2, 0, VAR_0);

 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
  FUNC_2(VAR_4, VAR_3->gpr[VAR_5]);
 VAR_4 += 32 * 8 / sizeof(long);


 FUNC_2(VAR_4, VAR_3->nip);
 FUNC_2(VAR_4, VAR_3->msr);
 FUNC_1(VAR_4, VAR_3->ccr);
 FUNC_2(VAR_4, VAR_3->link);
 FUNC_2(VAR_4, VAR_3->ctr);
 FUNC_1(VAR_4, VAR_3->xer);

 FUNC_0((unsigned long)VAR_4 >
        (unsigned long)(((void *)VAR_2) + VAR_0));
}
