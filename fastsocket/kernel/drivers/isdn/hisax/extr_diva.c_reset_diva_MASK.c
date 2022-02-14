
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctrl_reg; scalar_t__ ctrl; scalar_t__ pci_cfg; int cfg_reg; int isac; int isac_adr; } ;
struct TYPE_4__ {TYPE_1__ diva; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct IsdnCardState*,int ,int) ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct IsdnCardState *VAR_14)
{
 if (VAR_14->subtyp == VAR_1) {
  FUNC_4(VAR_14->hw.diva.isac_adr, VAR_14->hw.diva.isac, VAR_9, 0x20);
  FUNC_2(10);
  FUNC_4(VAR_14->hw.diva.isac_adr, VAR_14->hw.diva.isac, VAR_9, 0x00);
  FUNC_2(10);
  FUNC_4(VAR_14->hw.diva.isac_adr, VAR_14->hw.diva.isac, VAR_8, 0xc0);
 } else if (VAR_14->subtyp == VAR_2) {
  unsigned int *VAR_15 = (unsigned int *)(VAR_14->hw.diva.pci_cfg +
     VAR_10);
  *VAR_15 = VAR_12 | VAR_11;
  FUNC_2(10);
  *VAR_15 = VAR_11;
  FUNC_2(10);
  FUNC_3(VAR_14->hw.diva.cfg_reg, VAR_8, 0xc0);
 } else if (VAR_14->subtyp == VAR_0) {
  unsigned int *VAR_16 = (unsigned int *)(VAR_14->hw.diva.pci_cfg +
     VAR_10);
  *VAR_16 = VAR_12 | VAR_11;
  FUNC_2(10);
  *VAR_16 = VAR_11 | VAR_13;
  FUNC_2(10);
  FUNC_0(VAR_14, VAR_7, 0xff);
 } else {
  VAR_14->hw.diva.ctrl_reg = 0;
  FUNC_1(VAR_14->hw.diva.ctrl, VAR_14->hw.diva.ctrl_reg);
  FUNC_2(10);
  VAR_14->hw.diva.ctrl_reg |= VAR_6;
  FUNC_1(VAR_14->hw.diva.ctrl, VAR_14->hw.diva.ctrl_reg);
  FUNC_2(10);
  if (VAR_14->subtyp == VAR_3)
   VAR_14->hw.diva.ctrl_reg |= VAR_4;
  else {

   FUNC_1(VAR_14->hw.diva.pci_cfg + 0x69, 9);
   VAR_14->hw.diva.ctrl_reg |= VAR_5;
  }
  FUNC_1(VAR_14->hw.diva.ctrl, VAR_14->hw.diva.ctrl_reg);
 }
}
