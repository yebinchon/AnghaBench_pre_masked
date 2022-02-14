
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct IsdnCardState {TYPE_2__* bcs; } ;
struct TYPE_6__ {int * send; } ;
struct TYPE_4__ {TYPE_3__ hfc; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct IsdnCardState *VAR_0)
{
 FUNC_0(VAR_0->bcs[0].hw.hfc.send);
 VAR_0->bcs[0].hw.hfc.send = ((void*)0);
 FUNC_0(VAR_0->bcs[1].hw.hfc.send);
 VAR_0->bcs[1].hw.hfc.send = ((void*)0);
}
