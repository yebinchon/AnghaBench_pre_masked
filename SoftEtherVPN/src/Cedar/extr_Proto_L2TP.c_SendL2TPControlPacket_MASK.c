
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_19__ {int IsControl; int Ns; scalar_t__ Nr; int SessionId; int TunnelId; } ;
struct TYPE_18__ {scalar_t__ NextSendTick; int Ns; int * Buf; } ;
struct TYPE_17__ {scalar_t__ Now; } ;
struct TYPE_16__ {int SendQueue; scalar_t__ LastNr; int NextNs; int TunnelId1; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef TYPE_2__ L2TP_SERVER ;
typedef TYPE_3__ L2TP_QUEUE ;
typedef TYPE_4__ L2TP_PACKET ;
typedef int BUF ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int * FUNC_1 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int) ;

void FUNC_5(L2TP_SERVER *VAR_1, L2TP_TUNNEL *VAR_2, UINT VAR_3, L2TP_PACKET *VAR_4)
{
 BUF *VAR_5;
 L2TP_QUEUE *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_4->IsControl = 1;
 VAR_4->TunnelId = VAR_2->TunnelId1;
 VAR_4->SessionId = VAR_3;

 VAR_4->Ns = VAR_2->NextNs;
 VAR_2->NextNs++;

 VAR_4->Nr = VAR_2->LastNr + 1;

 VAR_5 = FUNC_1(VAR_4, VAR_2);

 VAR_6 = FUNC_4(sizeof(L2TP_QUEUE));
 VAR_6->Buf = VAR_5;
 VAR_6->Ns = VAR_4->Ns;
 VAR_6->NextSendTick = VAR_1->Now + (UINT64)VAR_0;
 FUNC_3(VAR_1, VAR_2, VAR_6);

 FUNC_2(VAR_1, VAR_6->NextSendTick);

 FUNC_0(VAR_2->SendQueue, VAR_6);

}
