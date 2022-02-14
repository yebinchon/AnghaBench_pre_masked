
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; int plx_adr; } ;
struct TYPE_4__ {TYPE_1__ ax; } ;
struct IsdnCardState {scalar_t__ subtyp; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_1)
{
 FUNC_0(VAR_1->hw.ax.base & 0xffffffc0, 128);
 if (VAR_1->subtyp == VAR_0)
  FUNC_0(VAR_1->hw.ax.plx_adr, 64);
}
