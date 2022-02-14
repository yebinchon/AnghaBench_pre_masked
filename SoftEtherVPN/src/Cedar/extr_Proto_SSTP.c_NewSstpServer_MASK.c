
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_11__ {int ref; } ;
struct TYPE_10__ {int ref; } ;
struct TYPE_9__ {int Interrupt; void* SendQueue; void* RecvQueue; TYPE_2__* SockEvent; void* ServerPort; int ServerIp; void* ClientPort; int ClientIp; void* Now; int TubeSend; int TubeRecv; TYPE_3__* Cedar; int ClientCipherName; int ClientHostName; void* LastRecvTick; } ;
typedef TYPE_1__ SSTP_SERVER ;
typedef TYPE_2__ SOCK_EVENT ;
typedef int IP ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,int,char*) ;
 void* FUNC_7 () ;
 TYPE_1__* FUNC_8 (int) ;

SSTP_SERVER *FUNC_9(CEDAR *VAR_0, IP *VAR_1, UINT VAR_2, IP *VAR_3,
         UINT VAR_4, SOCK_EVENT *VAR_5,
         char *VAR_6, char *VAR_7)
{
 SSTP_SERVER *VAR_8 = FUNC_8(sizeof(SSTP_SERVER));

 VAR_8->LastRecvTick = FUNC_7();

 FUNC_6(VAR_8->ClientHostName, sizeof(VAR_8->ClientHostName), VAR_6);
 FUNC_6(VAR_8->ClientCipherName, sizeof(VAR_8->ClientCipherName), VAR_7);

 VAR_8->Cedar = VAR_0;
 FUNC_0(VAR_8->Cedar->ref);

 FUNC_4(&VAR_8->TubeSend, &VAR_8->TubeRecv, 0);
 FUNC_5(VAR_8->TubeSend, VAR_5);

 VAR_8->Now = FUNC_7();

 FUNC_1(&VAR_8->ClientIp, VAR_1, sizeof(IP));
 VAR_8->ClientPort = VAR_2;
 FUNC_1(&VAR_8->ServerIp, VAR_3, sizeof(IP));
 VAR_8->ServerPort = VAR_4;

 VAR_8->SockEvent = VAR_5;

 FUNC_0(VAR_8->SockEvent->ref);

 VAR_8->RecvQueue = FUNC_3();
 VAR_8->SendQueue = FUNC_3();

 VAR_8->Interrupt = FUNC_2();

 return VAR_8;
}
