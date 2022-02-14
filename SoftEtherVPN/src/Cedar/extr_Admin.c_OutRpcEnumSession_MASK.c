
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumSession; TYPE_1__* Sessions; int HubName; } ;
struct TYPE_4__ {int LastCommTime; int CreatedTime; int LastCommDormant; int IsDormant; int IsDormantEnabled; int UniqueId; int VLanId; int Client_MonitorMode; int Client_BridgeMode; int Layer3Mode; int BridgeMode; int SecureNATMode; int LinkMode; int RemoteHostname; int RemoteSession; int PacketNum; int PacketSize; int CurrentNumTcp; int MaxNumTcp; int Hostname; int ClientIP; int Ip; int Username; int Name; } ;
typedef TYPE_1__ RPC_ENUM_SESSION_ITEM ;
typedef TYPE_2__ RPC_ENUM_SESSION ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,int,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ,size_t,size_t) ;
 int FUNC_5 (int *,char*,int *,size_t,size_t) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,int ,size_t,size_t) ;
 int FUNC_8 (int *,char*,int ,size_t,size_t) ;
 int FUNC_9 (int *,char*) ;

void FUNC_10(PACK *VAR_0, RPC_ENUM_SESSION *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }
 FUNC_6(VAR_0, "HubName", VAR_1->HubName);

 FUNC_9(VAR_0, "SessionList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumSession;VAR_2++)
 {
  RPC_ENUM_SESSION_ITEM *VAR_3 = &VAR_1->Sessions[VAR_2];

  FUNC_7(VAR_0, "Name", VAR_3->Name, VAR_2, VAR_1->NumSession);
  FUNC_7(VAR_0, "Username", VAR_3->Username, VAR_2, VAR_1->NumSession);
  FUNC_4(VAR_0, "Ip", VAR_3->Ip, VAR_2, VAR_1->NumSession);
  FUNC_5(VAR_0, "ClientIP", &VAR_3->ClientIP, VAR_2, VAR_1->NumSession);
  FUNC_7(VAR_0, "Hostname", VAR_3->Hostname, VAR_2, VAR_1->NumSession);
  FUNC_3(VAR_0, "MaxNumTcp", VAR_3->MaxNumTcp, VAR_2, VAR_1->NumSession);
  FUNC_3(VAR_0, "CurrentNumTcp", VAR_3->CurrentNumTcp, VAR_2, VAR_1->NumSession);
  FUNC_2(VAR_0, "PacketSize", VAR_3->PacketSize, VAR_2, VAR_1->NumSession);
  FUNC_2(VAR_0, "PacketNum", VAR_3->PacketNum, VAR_2, VAR_1->NumSession);
  FUNC_0(VAR_0, "RemoteSession", VAR_3->RemoteSession, VAR_2, VAR_1->NumSession);
  FUNC_7(VAR_0, "RemoteHostname", VAR_3->RemoteHostname, VAR_2, VAR_1->NumSession);
  FUNC_0(VAR_0, "LinkMode", VAR_3->LinkMode, VAR_2, VAR_1->NumSession);
  FUNC_0(VAR_0, "SecureNATMode", VAR_3->SecureNATMode, VAR_2, VAR_1->NumSession);
  FUNC_0(VAR_0, "BridgeMode", VAR_3->BridgeMode, VAR_2, VAR_1->NumSession);
  FUNC_0(VAR_0, "Layer3Mode", VAR_3->Layer3Mode, VAR_2, VAR_1->NumSession);
  FUNC_0(VAR_0, "Client_BridgeMode", VAR_3->Client_BridgeMode, VAR_2, VAR_1->NumSession);
  FUNC_0(VAR_0, "Client_MonitorMode", VAR_3->Client_MonitorMode, VAR_2, VAR_1->NumSession);
  FUNC_3(VAR_0, "VLanId", VAR_3->VLanId, VAR_2, VAR_1->NumSession);
  FUNC_1(VAR_0, "UniqueId", VAR_3->UniqueId, sizeof(VAR_3->UniqueId), VAR_2, VAR_1->NumSession);
  FUNC_0(VAR_0, "IsDormantEnabled", VAR_3->IsDormantEnabled, VAR_2, VAR_1->NumSession);
  FUNC_0(VAR_0, "IsDormant", VAR_3->IsDormant, VAR_2, VAR_1->NumSession);
  FUNC_8(VAR_0, "LastCommDormant", VAR_3->LastCommDormant, VAR_2, VAR_1->NumSession);
  FUNC_8(VAR_0, "CreatedTime", VAR_3->CreatedTime, VAR_2, VAR_1->NumSession);
  FUNC_8(VAR_0, "LastCommTime", VAR_3->LastCommTime, VAR_2, VAR_1->NumSession);
 }
 FUNC_9(VAR_0, ((void*)0));
}
