
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (struct pt_regs*) ;
 int FUNC_5 (struct pt_regs*) ;
 int FUNC_6 (struct pt_regs*) ;
 int FUNC_7 (struct pt_regs*) ;
 int FUNC_8 (struct pt_regs*) ;
 int FUNC_9 (struct pt_regs*) ;
 int FUNC_10 (struct pt_regs*) ;
 int FUNC_11 (struct pt_regs*) ;
 int FUNC_12 (struct pt_regs*) ;
 int FUNC_13 (struct pt_regs*) ;
 int FUNC_14 () ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int *,unsigned long*) ;
 int FUNC_17 () ;

void FUNC_18(struct pt_regs *VAR_0)
{
        FUNC_15("\n");
        FUNC_15("EIP: %04lx:[<%08lx>] CPU: %d %s",
        0xffff & FUNC_0(VAR_0), FUNC_11(VAR_0),
        FUNC_17(), FUNC_14());
        if (FUNC_0(VAR_0) & 3)
                FUNC_15(" ESP: %04lx:%08lx", 0xffff & FUNC_13(VAR_0),
         FUNC_12(VAR_0));
        FUNC_15(" EFLAGS: %08lx\n    %s\n", FUNC_8(VAR_0),
        FUNC_14());
        FUNC_15("EAX: %08lx EBX: %08lx ECX: %08lx EDX: %08lx\n",
                FUNC_2(VAR_0), FUNC_4(VAR_0),
        FUNC_5(VAR_0),
        FUNC_7(VAR_0));
        FUNC_15("ESI: %08lx EDI: %08lx EBP: %08lx",
        FUNC_10(VAR_0), FUNC_6(VAR_0),
        FUNC_3(VAR_0));
        FUNC_15(" DS: %04lx ES: %04lx\n",
        0xffff & FUNC_1(VAR_0),
        0xffff & FUNC_9(VAR_0));

        FUNC_16(((void*)0), (unsigned long *) &VAR_0);
}
