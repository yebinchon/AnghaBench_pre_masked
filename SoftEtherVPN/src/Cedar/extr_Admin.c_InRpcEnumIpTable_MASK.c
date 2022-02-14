
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumIpTable; TYPE_1__* IpTables; int HubName; } ;
struct TYPE_6__ {int RemoteHostname; void* RemoteItem; void* UpdatedTime; void* CreatedTime; void* DhcpAllocated; int IpAddress; int Ip; int IpV6; int SessionName; int Key; } ;
typedef TYPE_1__ RPC_ENUM_IP_TABLE_ITEM ;
typedef TYPE_2__ RPC_ENUM_IP_TABLE ;
typedef int PACK ;


 void* FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (int *,char*,int *,size_t) ;
 int FUNC_7 (int *,char*,int ,int) ;
 int FUNC_8 (int *,char*,int ,int,size_t) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_11 (int) ;

void FUNC_12(RPC_ENUM_IP_TABLE *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_10(VAR_0, sizeof(RPC_ENUM_IP_TABLE));
 FUNC_7(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->NumIpTable = FUNC_1(VAR_1, "SessionName");
 VAR_0->IpTables = FUNC_11(sizeof(RPC_ENUM_IP_TABLE_ITEM) * VAR_0->NumIpTable);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumIpTable;VAR_2++)
 {
  RPC_ENUM_IP_TABLE_ITEM *VAR_3 = &VAR_0->IpTables[VAR_2];

  VAR_3->Key = FUNC_3(VAR_1, "Key", VAR_2);
  FUNC_8(VAR_1, "SessionName", VAR_3->SessionName, sizeof(VAR_3->SessionName), VAR_2);
  VAR_3->Ip = FUNC_5(VAR_1, "Ip", VAR_2);
  if (FUNC_6(VAR_1, "IpV6", &VAR_3->IpV6, VAR_2) == 0)
  {
   FUNC_9(&VAR_3->IpV6, VAR_3->Ip);
  }
  FUNC_4(VAR_1, "IpAddress", &VAR_3->IpAddress);
  VAR_3->DhcpAllocated = FUNC_0(VAR_1, "DhcpAllocated", VAR_2);
  VAR_3->CreatedTime = FUNC_2(VAR_1, "CreatedTime", VAR_2);
  VAR_3->UpdatedTime = FUNC_2(VAR_1, "UpdatedTime", VAR_2);
  VAR_3->RemoteItem = FUNC_0(VAR_1, "RemoteItem", VAR_2);
  FUNC_8(VAR_1, "RemoteHostname", VAR_3->RemoteHostname, sizeof(VAR_3->RemoteHostname), VAR_2);
 }
}
