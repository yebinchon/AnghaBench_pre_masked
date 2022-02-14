
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {scalar_t__ expires; } ;
struct TYPE_6__ {int status; int ctrl_reg; TYPE_3__ tl; int ctrl; int isac; int ale; } ;
struct TYPE_7__ {TYPE_1__ elsa; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct IsdnCardState *VAR_13)
{
 int VAR_14 = 0;

 if (VAR_13->subtyp == VAR_5 || VAR_13->subtyp == VAR_6)
  return;
 FUNC_2(&VAR_13->hw.elsa.tl);
 if (VAR_13->hw.elsa.status & VAR_0)
  VAR_13->hw.elsa.ctrl_reg |= VAR_9;
 else if (VAR_13->hw.elsa.status & VAR_1)
  VAR_13->hw.elsa.ctrl_reg &= ~VAR_9;
 else {
  VAR_13->hw.elsa.ctrl_reg ^= VAR_9;
  VAR_14 = 250;
 }
 if (VAR_13->hw.elsa.status & 0xf000)
  VAR_13->hw.elsa.ctrl_reg |= VAR_4;
 else if (VAR_13->hw.elsa.status & 0x0f00) {
  VAR_13->hw.elsa.ctrl_reg ^= VAR_4;
  VAR_14 = 500;
 } else
  VAR_13->hw.elsa.ctrl_reg &= ~VAR_4;

 if ((VAR_13->subtyp == VAR_7) ||
  (VAR_13->subtyp == VAR_8)) {
  u_char VAR_15 = 0xff;
  if (VAR_13->hw.elsa.ctrl_reg & VAR_4)
   VAR_15 ^= VAR_2;
  if (VAR_13->hw.elsa.ctrl_reg & VAR_9)
   VAR_15 ^= VAR_3;
  FUNC_4(VAR_13->hw.elsa.ale, VAR_13->hw.elsa.isac, VAR_11, VAR_15);
 } else
  FUNC_1(VAR_13->hw.elsa.ctrl, VAR_13->hw.elsa.ctrl_reg);
 if (VAR_14) {
  FUNC_3(&VAR_13->hw.elsa.tl);
  VAR_13->hw.elsa.tl.expires = VAR_12 + ((VAR_14 * VAR_10) / 1000);
  FUNC_0(&VAR_13->hw.elsa.tl);
 }
}
