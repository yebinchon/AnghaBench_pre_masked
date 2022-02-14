
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* send; } ;
struct TYPE_7__ {TYPE_1__ hfcD; } ;
struct IsdnCardState {TYPE_5__* bcs; int * BC_Send_Data; TYPE_2__ hw; int setstack_d; } ;
struct TYPE_8__ {void* send; } ;
struct TYPE_9__ {TYPE_3__ hfc; } ;
struct TYPE_10__ {void* BC_Close; void* BC_SetStack; TYPE_4__ hw; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 void* VAR_2 ;
 int VAR_3 ;

void
FUNC_2(struct IsdnCardState *VAR_4)
{
 VAR_4->setstack_d = VAR_3;
 if (!VAR_4->hw.hfcD.send)
  VAR_4->hw.hfcD.send = FUNC_0(16);
 if (!VAR_4->bcs[0].hw.hfc.send)
  VAR_4->bcs[0].hw.hfc.send = FUNC_0(32);
 if (!VAR_4->bcs[1].hw.hfc.send)
  VAR_4->bcs[1].hw.hfc.send = FUNC_0(32);
 VAR_4->BC_Send_Data = &VAR_1;
 VAR_4->bcs[0].BC_SetStack = VAR_2;
 VAR_4->bcs[1].BC_SetStack = VAR_2;
 VAR_4->bcs[0].BC_Close = VAR_0;
 VAR_4->bcs[1].BC_Close = VAR_0;
 FUNC_1(VAR_4->bcs, 0, 0);
 FUNC_1(VAR_4->bcs + 1, 0, 1);
}
