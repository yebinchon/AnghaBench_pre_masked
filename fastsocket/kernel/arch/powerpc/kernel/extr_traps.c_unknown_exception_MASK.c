
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int trap; int msr; int nip; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pt_regs*,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;

void FUNC_2(struct pt_regs *VAR_1)
{
 FUNC_1("Bad trap at PC: %lx, SR: %lx, vector=%lx\n",
        VAR_1->nip, VAR_1->msr, VAR_1->trap);

 FUNC_0(VAR_0, VAR_1, 0, 0);
}
