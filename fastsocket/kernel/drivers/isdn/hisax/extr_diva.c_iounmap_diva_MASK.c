
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pci_cfg; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ diva; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_2)
{
 if ((VAR_2->subtyp == VAR_1) || (VAR_2->subtyp == VAR_0)) {
  if (VAR_2->hw.diva.cfg_reg) {
   FUNC_0((void *)VAR_2->hw.diva.cfg_reg);
   VAR_2->hw.diva.cfg_reg = 0;
  }
  if (VAR_2->hw.diva.pci_cfg) {
   FUNC_0((void *)VAR_2->hw.diva.pci_cfg);
   VAR_2->hw.diva.pci_cfg = 0;
  }
 }

 return;
}
