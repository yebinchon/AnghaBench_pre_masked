
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {TYPE_1__* cspec; scalar_t__ msi_lo; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qib_devdata*,char*,...) ;
 int FUNC_1 (int ,int ,int ,int ,struct qib_devdata*) ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_3)
{
 if (!VAR_3->cspec->irq)
  FUNC_0(VAR_3,
   "irq is 0, BIOS error?  Interrupts won't work\n");
 else {
  int VAR_4 = FUNC_1(VAR_3->cspec->irq, VAR_2,
   VAR_3->msi_lo ? 0 : VAR_0,
   VAR_1, VAR_3);

  if (VAR_4)
   FUNC_0(VAR_3,
    "Couldn't setup %s interrupt (irq=%d): %d\n",
    VAR_3->msi_lo ? "MSI" : "INTx",
    VAR_3->cspec->irq, VAR_4);
 }
}
