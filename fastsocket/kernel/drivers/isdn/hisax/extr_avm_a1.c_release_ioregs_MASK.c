
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* hscxfifo; scalar_t__* hscx; scalar_t__ isacfifo; scalar_t__ isac; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ avm; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static inline void
FUNC_1(struct IsdnCardState *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->hw.avm.cfg_reg, 8);
 if (VAR_1 & 1)
  FUNC_0(VAR_0->hw.avm.isac + 32, 32);
 if (VAR_1 & 2)
  FUNC_0(VAR_0->hw.avm.isacfifo, 1);
 if (VAR_1 & 4)
  FUNC_0(VAR_0->hw.avm.hscx[0] + 32, 32);
 if (VAR_1 & 8)
  FUNC_0(VAR_0->hw.avm.hscxfifo[0], 1);
 if (VAR_1 & 0x10)
  FUNC_0(VAR_0->hw.avm.hscx[1] + 32, 32);
 if (VAR_1 & 0x20)
  FUNC_0(VAR_0->hw.avm.hscxfifo[1], 1);
}
