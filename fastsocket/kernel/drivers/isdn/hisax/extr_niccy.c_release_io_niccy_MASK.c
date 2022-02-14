
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ isac_ale; scalar_t__ isac; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ niccy; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct IsdnCardState *VAR_3)
{
 if (VAR_3->subtyp == VAR_0) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_3->hw.niccy.cfg_reg + VAR_1);
  VAR_4 &= VAR_2;
  FUNC_1(VAR_4, VAR_3->hw.niccy.cfg_reg + VAR_1);
  FUNC_2(VAR_3->hw.niccy.cfg_reg, 0x40);
  FUNC_2(VAR_3->hw.niccy.isac, 4);
 } else {
  FUNC_2(VAR_3->hw.niccy.isac, 2);
  FUNC_2(VAR_3->hw.niccy.isac_ale, 2);
 }
}
