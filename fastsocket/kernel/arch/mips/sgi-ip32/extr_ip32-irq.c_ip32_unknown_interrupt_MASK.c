
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int hard_int; int istat; int imask; } ;
struct TYPE_6__ {int control; } ;
struct TYPE_8__ {int istat; int imask; } ;
struct TYPE_7__ {TYPE_3__ ctrl; } ;
struct TYPE_9__ {TYPE_1__ pci; TYPE_2__ perif; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 () ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 FUNC_1("Unknown interrupt occurred!\n");
 FUNC_1("cp0_status: %08x\n", FUNC_3());
 FUNC_1("cp0_cause: %08x\n", FUNC_2());
 FUNC_1("CRIME intr mask: %016lx\n", VAR_0->imask);
 FUNC_1("CRIME intr status: %016lx\n", VAR_0->istat);
 FUNC_1("CRIME hardware intr register: %016lx\n", VAR_0->hard_int);
 FUNC_1("MACE ISA intr mask: %08lx\n", VAR_1->perif.ctrl.imask);
 FUNC_1("MACE ISA intr status: %08lx\n", VAR_1->perif.ctrl.istat);
 FUNC_1("MACE PCI control register: %08x\n", VAR_1->pci.control);

 FUNC_1("Register dump:\n");
 FUNC_4(FUNC_0());

 FUNC_1("Please mail this report to linux-mips@linux-mips.org\n");
 FUNC_1("Spinning...");
 while(1) ;
}
