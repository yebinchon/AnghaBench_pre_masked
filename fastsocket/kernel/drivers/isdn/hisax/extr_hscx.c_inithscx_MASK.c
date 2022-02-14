
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct IsdnCardState {TYPE_3__* bcs; } ;
struct TYPE_4__ {int hscx; int tsaxr0; int tsaxr1; } ;
struct TYPE_5__ {TYPE_1__ hscx; } ;
struct TYPE_6__ {TYPE_2__ hw; void* BC_Close; void* BC_SetStack; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 void* VAR_1 ;

void
FUNC_1(struct IsdnCardState *VAR_2)
{
 VAR_2->bcs[0].BC_SetStack = VAR_1;
 VAR_2->bcs[1].BC_SetStack = VAR_1;
 VAR_2->bcs[0].BC_Close = VAR_0;
 VAR_2->bcs[1].BC_Close = VAR_0;
 VAR_2->bcs[0].hw.hscx.hscx = 0;
 VAR_2->bcs[1].hw.hscx.hscx = 1;
 VAR_2->bcs[0].hw.hscx.tsaxr0 = 0x2f;
 VAR_2->bcs[0].hw.hscx.tsaxr1 = 3;
 VAR_2->bcs[1].hw.hscx.tsaxr0 = 0x2f;
 VAR_2->bcs[1].hw.hscx.tsaxr1 = 3;
 FUNC_0(VAR_2->bcs, 0, 0);
 FUNC_0(VAR_2->bcs + 1, 0, 0);
}
