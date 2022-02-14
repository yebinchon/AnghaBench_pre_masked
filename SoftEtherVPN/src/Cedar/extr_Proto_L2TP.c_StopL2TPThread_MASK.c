
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* IkeServer; int ThreadList; } ;
struct TYPE_10__ {int HasThread; int SessionId2; int SessionId1; int * TubeSend; int * TubeRecv; int * Thread; int * EtherIP; scalar_t__ IsV3; } ;
struct TYPE_9__ {int TunnelId2; int TunnelId1; } ;
struct TYPE_8__ {int ThreadList; } ;
typedef int THREAD ;
typedef TYPE_2__ L2TP_TUNNEL ;
typedef TYPE_3__ L2TP_SESSION ;
typedef TYPE_4__ L2TP_SERVER ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(L2TP_SERVER *VAR_0, L2TP_TUNNEL *VAR_1, L2TP_SESSION *VAR_2)
{
 THREAD *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->IsV3)
 {

  if (VAR_2->EtherIP != ((void*)0))
  {

   FUNC_2(VAR_2->EtherIP);
   VAR_2->EtherIP = ((void*)0);
  }
  return;
 }

 if (VAR_2->HasThread == 0)
 {
  return;
 }
 VAR_3 = VAR_2->Thread;
 VAR_2->Thread = ((void*)0);
 VAR_2->HasThread = 0;


 FUNC_5(VAR_2->TubeRecv);
 FUNC_5(VAR_2->TubeSend);


 FUNC_4(VAR_2->TubeRecv);
 FUNC_4(VAR_2->TubeSend);

 VAR_2->TubeRecv = ((void*)0);
 VAR_2->TubeSend = ((void*)0);


 if (VAR_0->IkeServer == ((void*)0))
 {
  FUNC_0(VAR_0->ThreadList, VAR_3);
 }
 else
 {
  FUNC_0(VAR_0->IkeServer->ThreadList, VAR_3);
 }

 FUNC_1("Thread Stopped for Session %u/%u on Tunnel %u/%u\n",
  VAR_2->SessionId1, VAR_2->SessionId2, VAR_1->TunnelId1, VAR_1->TunnelId2);


 FUNC_3(VAR_3);
}
