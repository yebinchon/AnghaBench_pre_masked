
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int DataSize; int Data; scalar_t__ IsControl; } ;
struct TYPE_5__ {int FlushRecvTube; int TubeRecv; int ClientCipherName; int ClientHostName; int TubeSend; int ServerPort; int ServerIp; int ClientPort; int ClientIp; int Cedar; int * PPPThread; } ;
typedef TYPE_1__ SSTP_SERVER ;
typedef TYPE_2__ SSTP_PACKET ;


 int * FUNC_0 (int ,int *,int ,int *,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *,int) ;

void FUNC_2(SSTP_SERVER *VAR_2, SSTP_PACKET *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_3->IsControl)
 {
  return;
 }



 if (VAR_2->PPPThread == ((void*)0))
 {

  VAR_2->PPPThread = FUNC_0(VAR_2->Cedar, &VAR_2->ClientIp, VAR_2->ClientPort, &VAR_2->ServerIp, VAR_2->ServerPort,
   VAR_2->TubeSend, VAR_2->TubeRecv, VAR_1, VAR_0,
   VAR_2->ClientHostName, VAR_2->ClientCipherName, 0);
 }


 FUNC_1(VAR_2->TubeRecv, VAR_3->Data, VAR_3->DataSize, ((void*)0), 1);
 VAR_2->FlushRecvTube = 1;
}
