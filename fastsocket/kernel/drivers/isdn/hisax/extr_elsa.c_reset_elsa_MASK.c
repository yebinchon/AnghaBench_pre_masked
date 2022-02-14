
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctrl_reg; scalar_t__ cfg; int isac; int ale; scalar_t__ trig; scalar_t__ timer; scalar_t__ ctrl; } ;
struct TYPE_4__ {TYPE_1__ elsa; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct IsdnCardState *VAR_10)
{
 if (VAR_10->hw.elsa.timer) {

  FUNC_1(VAR_10->hw.elsa.timer, 0);
  while (FUNC_0(VAR_10));
  VAR_10->hw.elsa.ctrl_reg |= 0x50;
  VAR_10->hw.elsa.ctrl_reg &= ~VAR_0;
  FUNC_1(VAR_10->hw.elsa.ctrl, VAR_10->hw.elsa.ctrl_reg);

  FUNC_1(VAR_10->hw.elsa.timer, 0);
  while (FUNC_0(VAR_10));
  VAR_10->hw.elsa.ctrl_reg |= VAR_0;
  FUNC_1(VAR_10->hw.elsa.ctrl, VAR_10->hw.elsa.ctrl_reg);

  FUNC_1(VAR_10->hw.elsa.timer, 0);
  while (FUNC_0(VAR_10));
  if (VAR_10->hw.elsa.trig)
   FUNC_1(VAR_10->hw.elsa.trig, 0xff);
 }
 if ((VAR_10->subtyp == VAR_2) || (VAR_10->subtyp == VAR_3) || (VAR_10->subtyp == VAR_1)) {
  FUNC_3(VAR_10->hw.elsa.ale, VAR_10->hw.elsa.isac, VAR_9, 0x20);
  FUNC_2(10);
  FUNC_3(VAR_10->hw.elsa.ale, VAR_10->hw.elsa.isac, VAR_9, 0x00);
  FUNC_3(VAR_10->hw.elsa.ale, VAR_10->hw.elsa.isac, VAR_7, 0xc0);
  FUNC_2(10);
  if (VAR_10->subtyp != VAR_1) {
   FUNC_3(VAR_10->hw.elsa.ale, VAR_10->hw.elsa.isac, VAR_4, 0x0);
   FUNC_3(VAR_10->hw.elsa.ale, VAR_10->hw.elsa.isac, VAR_5, 0x3c);
  } else {
   FUNC_3(VAR_10->hw.elsa.ale, VAR_10->hw.elsa.isac, VAR_8, 0x10);
   FUNC_3(VAR_10->hw.elsa.ale, VAR_10->hw.elsa.isac, VAR_4, 0x4);
   FUNC_3(VAR_10->hw.elsa.ale, VAR_10->hw.elsa.isac, VAR_5, 0xf8);
  }
  FUNC_3(VAR_10->hw.elsa.ale, VAR_10->hw.elsa.isac, VAR_6, 0xff);
  if (VAR_10->subtyp == VAR_2)
   FUNC_1(VAR_10->hw.elsa.cfg + 0x4c, 0x41);
  else if (VAR_10->subtyp == VAR_3)
   FUNC_1(VAR_10->hw.elsa.cfg + 0x4c, 0x43);
 }
}
