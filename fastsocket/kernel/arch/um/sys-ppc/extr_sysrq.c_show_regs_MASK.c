
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs_subarch {int xcs; int xss; int esp; int xds; int xes; int * gpr; int ebp; int edi; int esi; int edx; int ecx; int ebx; int eax; int eflags; int eip; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

void FUNC_3(struct pt_regs_subarch *VAR_1)
{
 FUNC_0("\n");
 FUNC_0("show_regs(): insert regs here.\n");
        FUNC_1(VAR_0, &VAR_1->gpr[1]);
}
