
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ plx_adr; } ;
struct TYPE_3__ {TYPE_2__ ax; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct IsdnCardState *VAR_1)
{
 if (VAR_1->subtyp == VAR_0) {
  FUNC_2(VAR_1->hw.ax.plx_adr + 0x50, (FUNC_1(VAR_1->hw.ax.plx_adr + 0x50) & ~4));
  FUNC_0(10);

  FUNC_2(VAR_1->hw.ax.plx_adr + 0x50, (FUNC_1(VAR_1->hw.ax.plx_adr + 0x50) | 4));
  FUNC_0(10);
 }
}
