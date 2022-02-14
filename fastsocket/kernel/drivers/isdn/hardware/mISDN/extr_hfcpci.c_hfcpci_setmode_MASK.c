
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ protocol; int clkdel; int sctrl; int states; } ;
struct hfc_pci {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hfc_pci*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct hfc_pci *VAR_8)
{
 if (VAR_8->hw.protocol == VAR_6) {
  VAR_8->hw.clkdel = VAR_0;
  VAR_8->hw.sctrl |= VAR_7;
  VAR_8->hw.states = 1;
 } else {
  VAR_8->hw.clkdel = VAR_1;
  VAR_8->hw.sctrl &= ~VAR_7;
  VAR_8->hw.states = 2;
 }
 FUNC_0(VAR_8, VAR_2, VAR_8->hw.clkdel);
 FUNC_0(VAR_8, VAR_5, VAR_3 | VAR_8->hw.states);
 FUNC_1(10);
 FUNC_0(VAR_8, VAR_5, VAR_8->hw.states | 0x40);
 FUNC_0(VAR_8, VAR_4, VAR_8->hw.sctrl);
}
