
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ expires; } ;
struct TYPE_6__ {int status; TYPE_3__ tl; int ctrl_reg; int ctrl; } ;
struct TYPE_7__ {TYPE_1__ diva; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_4(struct IsdnCardState *VAR_11)
{
 int VAR_12 = 0;

 if ((VAR_11->subtyp == VAR_2) ||
     (VAR_11->subtyp == VAR_3) ||
     (VAR_11->subtyp == VAR_1) )
  return;
 FUNC_2(&VAR_11->hw.diva.tl);
 if (VAR_11->hw.diva.status & VAR_0)
  VAR_11->hw.diva.ctrl_reg |= (VAR_4 == VAR_11->subtyp) ?
   VAR_5 : VAR_7;
 else {
  VAR_11->hw.diva.ctrl_reg ^= (VAR_4 == VAR_11->subtyp) ?
   VAR_5 : VAR_7;
  VAR_12 = 250;
 }
 if (VAR_11->hw.diva.status & 0xf000)
  VAR_11->hw.diva.ctrl_reg |= (VAR_4 == VAR_11->subtyp) ?
   VAR_6 : VAR_8;
 else if (VAR_11->hw.diva.status & 0x0f00) {
  VAR_11->hw.diva.ctrl_reg ^= (VAR_4 == VAR_11->subtyp) ?
   VAR_6 : VAR_8;
  VAR_12 = 500;
 } else
  VAR_11->hw.diva.ctrl_reg &= ~((VAR_4 == VAR_11->subtyp) ?
   VAR_6 : VAR_8);

 FUNC_1(VAR_11->hw.diva.ctrl, VAR_11->hw.diva.ctrl_reg);
 if (VAR_12) {
  FUNC_3(&VAR_11->hw.diva.tl);
  VAR_11->hw.diva.tl.expires = VAR_10 + ((VAR_12 * VAR_9) / 1000);
  FUNC_0(&VAR_11->hw.diva.tl);
 }
}
