
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_12__ {int CryptName; int Cedar; int SockEvent; } ;
struct TYPE_11__ {int HasThread; int TubeRecv; int TubeSend; int Thread; int SessionId2; int SessionId1; } ;
struct TYPE_10__ {int HostName; int ServerPort; int ServerIp; int ClientPort; int ClientIp; int VendorName; int TunnelId2; int TunnelId1; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef TYPE_2__ L2TP_SESSION ;
typedef TYPE_3__ L2TP_SERVER ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int *,int ,int *,int ,int ,int ,int ,char*,int ,int ,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int,int ) ;

void FUNC_8(L2TP_SERVER *VAR_4, L2TP_TUNNEL *VAR_5, L2TP_SESSION *VAR_6)
{

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }

 if (VAR_6->HasThread == 0)
 {
  char VAR_7[VAR_3];

  FUNC_1("Thread Created for Session %u/%u on Tunnel %u/%u\n",
   VAR_6->SessionId1, VAR_6->SessionId2, VAR_5->TunnelId1, VAR_5->TunnelId2);

  VAR_6->HasThread = 1;

  FUNC_5(&VAR_6->TubeSend, &VAR_6->TubeRecv, 0);
  FUNC_6(VAR_6->TubeSend, VAR_4->SockEvent);

  if (FUNC_3(VAR_5->VendorName) == 0)
  {
   FUNC_2(VAR_7, sizeof(VAR_7), VAR_1, VAR_5->VendorName);
  }
  else
  {
   FUNC_7(VAR_7, sizeof(VAR_7), VAR_0);
  }


  VAR_6->Thread = FUNC_4(VAR_4->Cedar, &VAR_5->ClientIp, VAR_5->ClientPort, &VAR_5->ServerIp, VAR_5->ServerPort,
   VAR_6->TubeSend, VAR_6->TubeRecv, VAR_2, VAR_7, VAR_5->HostName, VAR_4->CryptName,
   FUNC_0(VAR_4, VAR_5, VAR_6));
 }
}
