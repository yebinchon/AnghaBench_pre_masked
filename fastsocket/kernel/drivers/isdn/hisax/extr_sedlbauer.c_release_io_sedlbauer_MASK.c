
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bus; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ sedl; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_2)
{
 int VAR_3 = 8;

 if (VAR_2->subtyp == VAR_1) {
  VAR_3 = 16;
 } else if (VAR_2->hw.sedl.bus == VAR_0) {
  VAR_3 = 256;
 }
 if (VAR_2->hw.sedl.cfg_reg)
  FUNC_0(VAR_2->hw.sedl.cfg_reg, VAR_3);
}
