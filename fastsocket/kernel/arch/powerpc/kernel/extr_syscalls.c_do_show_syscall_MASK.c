
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int * gpr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,struct pt_regs*,int ,int ) ;
 int FUNC_1 () ;

void FUNC_2(unsigned long VAR_1, unsigned long VAR_2, unsigned long VAR_3,
       unsigned long VAR_4, unsigned long VAR_5, unsigned long VAR_6,
       struct pt_regs *VAR_7)
{
 FUNC_0("syscall %ld(%lx, %lx, %lx, %lx, %lx, %lx) regs=%p current=%p"
        " cpu=%d\n", VAR_7->gpr[0], VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_0, FUNC_1());
}
