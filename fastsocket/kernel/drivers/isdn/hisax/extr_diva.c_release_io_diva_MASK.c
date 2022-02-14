
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {scalar_t__ cfg_reg; int ctrl; int tl; scalar_t__ pci_cfg; } ;
struct TYPE_4__ {TYPE_1__ diva; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4(struct IsdnCardState *VAR_4)
{
 int VAR_5;

 if ((VAR_4->subtyp == VAR_2) ||
     (VAR_4->subtyp == VAR_0) ) {
  u_int *VAR_6 = (unsigned int *)VAR_4->hw.diva.pci_cfg;

  *VAR_6 = 0;
  *VAR_6 = 2;
  if (VAR_4->hw.diva.cfg_reg)
   FUNC_2((void *)VAR_4->hw.diva.cfg_reg);
  if (VAR_4->hw.diva.pci_cfg)
   FUNC_2((void *)VAR_4->hw.diva.pci_cfg);
  return;
 } else if (VAR_4->subtyp != VAR_1) {
  FUNC_1(&VAR_4->hw.diva.tl);
  if (VAR_4->hw.diva.cfg_reg)
   FUNC_0(VAR_4->hw.diva.ctrl, 0);
 }
 if ((VAR_4->subtyp == VAR_3) || (VAR_4->subtyp == VAR_1))
  VAR_5 = 8;
 else
  VAR_5 = 32;
 if (VAR_4->hw.diva.cfg_reg) {
  FUNC_3(VAR_4->hw.diva.cfg_reg, VAR_5);
 }
}
