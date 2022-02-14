
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int * u_regs; int npc; int pc; } ;
struct irqaction {scalar_t__ handler; int name; } ;
struct TYPE_2__ {struct irqaction* action; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(int VAR_2, void *VAR_3, struct pt_regs * VAR_4)
{
        int VAR_5;
 struct irqaction * VAR_6;
 unsigned int VAR_7;

 VAR_7 = VAR_2 & (VAR_0 - 1);
 VAR_6 = VAR_1[VAR_7].action;

        FUNC_1("IO device interrupt, irq = %d\n", VAR_2);
        FUNC_1("PC = %08lx NPC = %08lx FP=%08lx\n", VAR_4->pc,
      VAR_4->npc, VAR_4->u_regs[14]);
 if (VAR_6) {
  FUNC_1("Expecting: ");
         for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
                 if (VAR_6->handler)
                         FUNC_1("[%s:%d:0x%x] ", VAR_6->name,
           (int) VAR_5, (unsigned int) VAR_6->handler);
 }
        FUNC_1("AIEEE\n");
 FUNC_0("bogus interrupt received");
}
