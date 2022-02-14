
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int RecvLookaside; } ;
struct et131x_adapter {TYPE_1__ RxRing; } ;
struct TYPE_6__ {int * Packet; } ;
typedef TYPE_2__ MP_RFD ;


 int FUNC_0 (int ,TYPE_2__*) ;

void FUNC_1(struct et131x_adapter *VAR_0, MP_RFD *VAR_1)
{
 VAR_1->Packet = ((void*)0);
 FUNC_0(VAR_0->RxRing.RecvLookaside, VAR_1);
}
