
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int IntParam2; int IntParam1; } ;
struct TYPE_8__ {int * Ipc; TYPE_2__* TubeSend; TYPE_2__* TubeRecv; int Cedar; int FlushList; int DisconnectCauseDirection; int DisconnectCauseCode; } ;
typedef TYPE_1__ PPP_SESSION ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(PPP_SESSION *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->TubeRecv != ((void*)0))
 {

  VAR_0->TubeRecv->IntParam1 = VAR_0->DisconnectCauseCode;
  VAR_0->TubeRecv->IntParam2 = VAR_0->DisconnectCauseDirection;
 }

 FUNC_2(VAR_0->FlushList);

 FUNC_7(VAR_0->TubeRecv);
 FUNC_7(VAR_0->TubeSend);

 FUNC_5(VAR_0->Cedar);

 FUNC_6(VAR_0->TubeRecv);
 FUNC_6(VAR_0->TubeSend);

 FUNC_4(VAR_0, ((void*)0));

 if (VAR_0->Ipc != ((void*)0))
 {
  FUNC_1(VAR_0->Ipc);
 }

 FUNC_3(VAR_0);

 FUNC_0(VAR_0);
}
