
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctrl_reg; int auxd; scalar_t__ auxa; scalar_t__ base; scalar_t__ dmactrl; } ;
struct TYPE_4__ {TYPE_1__ njet; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_4)
{
 VAR_4->hw.njet.ctrl_reg = 0xff;
 FUNC_0(VAR_4->hw.njet.base + VAR_1, VAR_4->hw.njet.ctrl_reg);
 FUNC_1(10);
 VAR_4->hw.njet.ctrl_reg = 0x40;

 FUNC_0(VAR_4->hw.njet.base + VAR_1, VAR_4->hw.njet.ctrl_reg);
 FUNC_1(10);
 VAR_4->hw.njet.auxd = 0xC0;
 VAR_4->hw.njet.dmactrl = 0;
 FUNC_0(VAR_4->hw.njet.auxa, 0);
 FUNC_0(VAR_4->hw.njet.base + VAR_0, ~VAR_3);
 FUNC_0(VAR_4->hw.njet.base + VAR_2, VAR_3);
 FUNC_0(VAR_4->hw.njet.auxa, VAR_4->hw.njet.auxd);
}
