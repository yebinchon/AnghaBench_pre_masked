
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* hscx; scalar_t__ isac; } ;
struct TYPE_3__ {TYPE_2__ teles3; } ;
struct IsdnCardState {TYPE_1__ hw; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static inline void
FUNC_1(struct IsdnCardState *VAR_0, int VAR_1)
{
 if (VAR_1 & 1)
  FUNC_0(VAR_0->hw.teles3.isac + 32, 32);
 if (VAR_1 & 2)
  FUNC_0(VAR_0->hw.teles3.hscx[0] + 32, 32);
 if (VAR_1 & 4)
  FUNC_0(VAR_0->hw.teles3.hscx[1] + 32, 32);
}
