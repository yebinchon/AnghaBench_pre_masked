
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumSession; TYPE_1__* Sessions; int HubName; } ;
struct TYPE_6__ {void* LastCommTime; void* CreatedTime; void* LastCommDormant; void* IsDormant; void* IsDormantEnabled; int UniqueId; void* VLanId; int RemoteHostname; void* Client_MonitorMode; void* Client_BridgeMode; void* Layer3Mode; void* BridgeMode; void* SecureNATMode; void* LinkMode; void* RemoteSession; void* PacketNum; void* PacketSize; void* CurrentNumTcp; void* MaxNumTcp; int Hostname; int ClientIP; void* Ip; int Username; int Name; } ;
typedef TYPE_1__ RPC_ENUM_SESSION_ITEM ;
typedef TYPE_2__ RPC_ENUM_SESSION ;
typedef int PACK ;


 void* FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,int ,int,size_t) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*,size_t) ;
 void* FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *,char*,int *,size_t) ;
 int FUNC_6 (int *,char*,int ,int) ;
 int FUNC_7 (int *,char*,int ,int,size_t) ;
 int FUNC_8 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_9 (int) ;

void FUNC_10(RPC_ENUM_SESSION *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_0, sizeof(RPC_ENUM_SESSION));
 FUNC_6(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->NumSession = FUNC_2(VAR_1, "Name");
 VAR_0->Sessions = FUNC_9(sizeof(RPC_ENUM_SESSION_ITEM) * VAR_0->NumSession);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumSession;VAR_2++)
 {
  RPC_ENUM_SESSION_ITEM *VAR_3 = &VAR_0->Sessions[VAR_2];

  FUNC_7(VAR_1, "Name", VAR_3->Name, sizeof(VAR_3->Name), VAR_2);
  FUNC_7(VAR_1, "Username", VAR_3->Username, sizeof(VAR_3->Username), VAR_2);
  VAR_3->Ip = FUNC_4(VAR_1, "Ip", VAR_2);
  FUNC_5(VAR_1, "ClientIP", &VAR_3->ClientIP, VAR_2);
  FUNC_7(VAR_1, "Hostname", VAR_3->Hostname, sizeof(VAR_3->Hostname), VAR_2);
  VAR_3->MaxNumTcp = FUNC_4(VAR_1, "MaxNumTcp", VAR_2);
  VAR_3->CurrentNumTcp = FUNC_4(VAR_1, "CurrentNumTcp", VAR_2);
  VAR_3->PacketSize = FUNC_3(VAR_1, "PacketSize", VAR_2);
  VAR_3->PacketNum = FUNC_3(VAR_1, "PacketNum", VAR_2);
  VAR_3->RemoteSession = FUNC_0(VAR_1, "RemoteSession", VAR_2);
  VAR_3->LinkMode = FUNC_0(VAR_1, "LinkMode", VAR_2);
  VAR_3->SecureNATMode = FUNC_0(VAR_1, "SecureNATMode", VAR_2);
  VAR_3->BridgeMode = FUNC_0(VAR_1, "BridgeMode", VAR_2);
  VAR_3->Layer3Mode = FUNC_0(VAR_1, "Layer3Mode", VAR_2);
  VAR_3->Client_BridgeMode = FUNC_0(VAR_1, "Client_BridgeMode", VAR_2);
  VAR_3->Client_MonitorMode = FUNC_0(VAR_1, "Client_MonitorMode", VAR_2);
  FUNC_7(VAR_1, "RemoteHostname", VAR_3->RemoteHostname, sizeof(VAR_3->RemoteHostname), VAR_2);
  VAR_3->VLanId = FUNC_4(VAR_1, "VLanId", VAR_2);
  FUNC_1(VAR_1, "UniqueId", VAR_3->UniqueId, sizeof(VAR_3->UniqueId), VAR_2);
  VAR_3->IsDormantEnabled = FUNC_0(VAR_1, "IsDormantEnabled", VAR_2);
  VAR_3->IsDormant = FUNC_0(VAR_1, "IsDormant", VAR_2);
  VAR_3->LastCommDormant = FUNC_3(VAR_1, "LastCommDormant", VAR_2);
  VAR_3->CreatedTime = FUNC_3(VAR_1, "CreatedTime", VAR_2);
  VAR_3->LastCommTime = FUNC_3(VAR_1, "LastCommTime", VAR_2);
 }
}
