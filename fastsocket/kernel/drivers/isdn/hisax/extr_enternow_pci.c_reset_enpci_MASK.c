
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctrl_reg; int auxd; scalar_t__ auxa; scalar_t__ base; scalar_t__ dmactrl; } ;
struct TYPE_4__ {TYPE_1__ njet; } ;
struct IsdnCardState {int debug; TYPE_2__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct IsdnCardState*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct IsdnCardState *VAR_5)
{
 if (VAR_5->debug & VAR_0)
  FUNC_0(VAR_5, "enter:now PCI: reset");


 VAR_5->hw.njet.ctrl_reg = 0x07;
 FUNC_2(VAR_5->hw.njet.ctrl_reg, VAR_5->hw.njet.base + VAR_2);
 FUNC_1(20);

 VAR_5->hw.njet.ctrl_reg = 0x30;
 FUNC_2(VAR_5->hw.njet.ctrl_reg, VAR_5->hw.njet.base + VAR_2);

 FUNC_1(20);
 VAR_5->hw.njet.auxd = 0;
 VAR_5->hw.njet.dmactrl = 0;
 FUNC_2(~VAR_4, VAR_5->hw.njet.base + VAR_1);
 FUNC_2(VAR_4, VAR_5->hw.njet.base + VAR_3);
 FUNC_2(VAR_5->hw.njet.auxd, VAR_5->hw.njet.auxa);
}
