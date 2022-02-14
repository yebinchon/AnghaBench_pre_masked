
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cfg_reg; scalar_t__* hscx; } ;
struct TYPE_4__ {TYPE_1__ teles3; } ;
struct IsdnCardState {scalar_t__ typ; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct IsdnCardState*,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_2)
{
 if (VAR_2->typ == VAR_1) {
  FUNC_1(VAR_2->hw.teles3.hscx[1], 96);
 } else {
  if (VAR_2->hw.teles3.cfg_reg) {
   if (VAR_2->typ == VAR_0) {
    FUNC_1(VAR_2->hw.teles3.cfg_reg, 1);
   } else {
    FUNC_1(VAR_2->hw.teles3.cfg_reg, 8);
   }
  }
  FUNC_0(VAR_2, 0x7);
 }
}
