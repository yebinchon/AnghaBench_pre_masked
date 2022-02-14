
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef scalar_t__ UINT64 ;
typedef size_t UINT ;
struct TYPE_28__ {TYPE_10__* SessionList; TYPE_1__* Option; } ;
struct TYPE_27__ {int NumSession; TYPE_7__* Sessions; } ;
struct TYPE_26__ {int IsDormantEnabled; int IsDormant; int RemoteHostname; scalar_t__ LastCommDormant; int UniqueId; int Client_MonitorMode; int Client_BridgeMode; int PacketNum; int PacketSize; int CurrentNumTcp; int VLanId; int Layer3Mode; int BridgeMode; int SecureNATMode; int LinkMode; void* LastCommTime; void* CreatedTime; int MaxNumTcp; int Hostname; int ClientIP; int Ip; int Username; int Name; } ;
struct TYPE_25__ {int Cedar; } ;
struct TYPE_23__ {int UniqueId; } ;
struct TYPE_24__ {scalar_t__ LastCommTimeForDormant; int lock; scalar_t__ NormalClient; TYPE_4__ NodeInfo; int IsMonitorMode; int IsBridgeMode; int TrafficLock; int Traffic; TYPE_3__* Connection; int VLanId; int L3SwitchMode; int BridgeMode; int SecureNATMode; int LinkModeServer; int LastCommTime; int CreatedTime; int MaxConnection; int Username; int Name; } ;
struct TYPE_22__ {TYPE_2__* Tcp; int ClientHostname; int ClientIp; } ;
struct TYPE_21__ {TYPE_10__* TcpSockList; } ;
struct TYPE_20__ {scalar_t__ DetectDormantSessionInterval; } ;
struct TYPE_19__ {int num_item; } ;
typedef TYPE_5__ SESSION ;
typedef TYPE_6__ SERVER ;
typedef TYPE_7__ RPC_ENUM_SESSION_ITEM ;
typedef TYPE_8__ RPC_ENUM_SESSION ;
typedef TYPE_9__ HUB ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int *) ;
 TYPE_9__* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 TYPE_5__* FUNC_7 (TYPE_10__*,size_t) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_10__*) ;
 int FUNC_12 (TYPE_9__*) ;
 int FUNC_13 (int ,int,int ) ;
 scalar_t__ FUNC_14 () ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_10__*) ;
 void* FUNC_19 (int) ;

void FUNC_20(SERVER *VAR_0, char *VAR_1, RPC_ENUM_SESSION *VAR_2)
{
 HUB *VAR_3;
 UINT64 VAR_4 = FUNC_14();
 UINT64 VAR_5 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_10(VAR_0->Cedar);
 VAR_3 = FUNC_2(VAR_0->Cedar, VAR_1);
 FUNC_17(VAR_0->Cedar);

 if (VAR_3 == ((void*)0))
 {
  VAR_2->NumSession = 0;
  VAR_2->Sessions = FUNC_19(0);
  return;
 }

 if (VAR_3->Option != ((void*)0))
 {
  VAR_5 = VAR_3->Option->DetectDormantSessionInterval * (UINT64)1000;
 }

 FUNC_11(VAR_3->SessionList);
 {
  UINT VAR_6;
  VAR_2->NumSession = FUNC_8(VAR_3->SessionList);
  VAR_2->Sessions = FUNC_19(sizeof(RPC_ENUM_SESSION_ITEM) * VAR_2->NumSession);

  for (VAR_6 = 0;VAR_6 < VAR_2->NumSession;VAR_6++)
  {
   SESSION *VAR_7 = FUNC_7(VAR_3->SessionList, VAR_6);
   RPC_ENUM_SESSION_ITEM *VAR_8 = &VAR_2->Sessions[VAR_6];
   FUNC_9(VAR_7->lock);
   {
    FUNC_13(VAR_8->Name, sizeof(VAR_8->Name), VAR_7->Name);
    FUNC_13(VAR_8->Username, sizeof(VAR_8->Username), VAR_7->Username);
    VAR_8->Ip = FUNC_6(&VAR_7->Connection->ClientIp);
    FUNC_1(&VAR_8->ClientIP, &VAR_7->Connection->ClientIp);
    FUNC_13(VAR_8->Hostname, sizeof(VAR_8->Hostname), VAR_7->Connection->ClientHostname);
    VAR_8->MaxNumTcp = VAR_7->MaxConnection;
    VAR_8->CreatedTime = FUNC_15(VAR_7->CreatedTime);
    VAR_8->LastCommTime = FUNC_15(VAR_7->LastCommTime);
    VAR_8->LinkMode = VAR_7->LinkModeServer;
    VAR_8->SecureNATMode = VAR_7->SecureNATMode;
    VAR_8->BridgeMode = VAR_7->BridgeMode;
    VAR_8->Layer3Mode = VAR_7->L3SwitchMode;
    VAR_8->VLanId = VAR_7->VLanId;
    FUNC_11(VAR_7->Connection->Tcp->TcpSockList);
    {
     VAR_8->CurrentNumTcp = VAR_7->Connection->Tcp->TcpSockList->num_item;
    }
    FUNC_18(VAR_7->Connection->Tcp->TcpSockList);
    FUNC_9(VAR_7->TrafficLock);
    {
     VAR_8->PacketSize = FUNC_5(VAR_7->Traffic);
     VAR_8->PacketNum = FUNC_4(VAR_7->Traffic);
    }
    FUNC_16(VAR_7->TrafficLock);
    VAR_8->Client_BridgeMode = VAR_7->IsBridgeMode;
    VAR_8->Client_MonitorMode = VAR_7->IsMonitorMode;
    FUNC_0(VAR_8->UniqueId, VAR_7->NodeInfo.UniqueId, 16);

    if (VAR_7->NormalClient)
    {
     VAR_8->IsDormantEnabled = (VAR_5 == 0 ? 0 : 1);
     if (VAR_8->IsDormantEnabled)
     {
      if (VAR_7->LastCommTimeForDormant == 0)
      {
       VAR_8->LastCommDormant = (UINT64)0x7FFFFFFF;
      }
      else
      {
       VAR_8->LastCommDormant = VAR_4 - VAR_7->LastCommTimeForDormant;
      }
      if (VAR_7->LastCommTimeForDormant == 0)
      {
       VAR_8->IsDormant = 1;
      }
      else
      {
       if ((VAR_7->LastCommTimeForDormant + VAR_5) < VAR_4)
       {
        VAR_8->IsDormant = 1;
       }
      }
     }
    }
   }
   FUNC_16(VAR_7->lock);

   FUNC_3(VAR_8->RemoteHostname, sizeof(VAR_8->RemoteHostname));
  }
 }
 FUNC_18(VAR_3->SessionList);

 FUNC_12(VAR_3);
}
