
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ipac; int cfg_reg; int * hscx; } ;
struct TYPE_4__ {TYPE_1__ gazel; } ;
struct IsdnCardState {int subtyp; TYPE_2__ hw; } ;






 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_0)
{
 unsigned int VAR_1;

 switch (VAR_0->subtyp) {
  case 131:
   for (VAR_1 = 0x0000; VAR_1 < 0xC000; VAR_1 += 0x1000)
    FUNC_0(VAR_1 + VAR_0->hw.gazel.hscx[0], 16);
   FUNC_0(0xC000 + VAR_0->hw.gazel.hscx[0], 1);
   break;

  case 130:
   FUNC_0(VAR_0->hw.gazel.hscx[0], 0x100);
   FUNC_0(VAR_0->hw.gazel.cfg_reg, 0x80);
   break;

  case 128:
   FUNC_0(VAR_0->hw.gazel.ipac, 0x8);
   FUNC_0(VAR_0->hw.gazel.cfg_reg, 0x80);
   break;

  case 129:
   FUNC_0(VAR_0->hw.gazel.ipac, 8);
   break;
 }
}
