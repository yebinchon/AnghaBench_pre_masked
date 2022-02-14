
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ plx_adr; } ;
struct TYPE_3__ {TYPE_2__ ax; } ;
struct IsdnCardState {scalar_t__ typ; TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_1, unsigned VAR_2)
{
 if (VAR_1->typ == VAR_0) {
  if (VAR_2)
   FUNC_1(VAR_1->hw.ax.plx_adr + 0x4C, (FUNC_0(VAR_1->hw.ax.plx_adr + 0x4C) | 0x41));
  else
   FUNC_1(VAR_1->hw.ax.plx_adr + 0x4C, (FUNC_0(VAR_1->hw.ax.plx_adr + 0x4C) & ~0x41));
 }
}
