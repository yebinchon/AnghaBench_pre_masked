
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int isac; int adr; } ;
struct TYPE_4__ {TYPE_1__ asus; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct IsdnCardState *VAR_8)
{
 if (VAR_8->subtyp == VAR_0)
  FUNC_2(VAR_8->hw.asus.adr, VAR_8->hw.asus.isac, VAR_7, 0x20);
 else
  FUNC_0(VAR_8->hw.asus.adr, VAR_1);
 FUNC_1(10);
 if (VAR_8->subtyp == VAR_0)
  FUNC_2(VAR_8->hw.asus.adr, VAR_8->hw.asus.isac, VAR_7, 0x0);
 else
  FUNC_0(VAR_8->hw.asus.adr, 0);
 FUNC_1(10);
 if (VAR_8->subtyp == VAR_0) {
  FUNC_2(VAR_8->hw.asus.adr, VAR_8->hw.asus.isac, VAR_4, 0x0);
  FUNC_2(VAR_8->hw.asus.adr, VAR_8->hw.asus.isac, VAR_2, 0xff);
  FUNC_2(VAR_8->hw.asus.adr, VAR_8->hw.asus.isac, VAR_3, 0x0);
  FUNC_2(VAR_8->hw.asus.adr, VAR_8->hw.asus.isac, VAR_5, 0xc0);
  FUNC_2(VAR_8->hw.asus.adr, VAR_8->hw.asus.isac, VAR_6, 0x12);
 }
}
