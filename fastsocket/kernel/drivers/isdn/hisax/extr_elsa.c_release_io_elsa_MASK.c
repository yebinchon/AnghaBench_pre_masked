
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ base; int isac; int ale; scalar_t__ cfg; scalar_t__ ctrl; int tl; } ;
struct TYPE_4__ {TYPE_1__ elsa; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct IsdnCardState*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct IsdnCardState *VAR_7)
{
 int VAR_8 = 8;

 FUNC_2(&VAR_7->hw.elsa.tl);



 if (VAR_7->hw.elsa.ctrl)
  FUNC_0(VAR_7->hw.elsa.ctrl, 0);
 if (VAR_7->subtyp == VAR_3) {
  FUNC_0(VAR_7->hw.elsa.cfg + 0x4c, 0x01);
  FUNC_5(VAR_7->hw.elsa.ale, VAR_7->hw.elsa.isac, VAR_6, 0xff);
  VAR_8 = 2;
  FUNC_4(VAR_7->hw.elsa.cfg, 0x80);
 }
 if (VAR_7->subtyp == VAR_5) {
  FUNC_0(VAR_7->hw.elsa.cfg + 0x4c, 0x03);
  FUNC_5(VAR_7->hw.elsa.ale, VAR_7->hw.elsa.isac, VAR_6, 0xff);
  FUNC_4(VAR_7->hw.elsa.cfg, 0x80);
 }
  if (VAR_7->subtyp == VAR_2) {
  FUNC_5(VAR_7->hw.elsa.ale, VAR_7->hw.elsa.isac, VAR_6, 0xff);
  }
 if ((VAR_7->subtyp == VAR_1) ||
  (VAR_7->subtyp == VAR_4) ||
  (VAR_7->subtyp == VAR_0) ||
  (VAR_7->subtyp == VAR_5)) {
  VAR_8 = 16;



 }
 if (VAR_7->hw.elsa.base)
  FUNC_4(VAR_7->hw.elsa.base, VAR_8);
}
