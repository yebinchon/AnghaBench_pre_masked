
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumIpTable; TYPE_1__* IpTables; int HubName; } ;
struct TYPE_4__ {int RemoteHostname; int RemoteItem; int UpdatedTime; int CreatedTime; int DhcpAllocated; int IpAddress; int IpV6; int Ip; int SessionName; int Key; } ;
typedef TYPE_1__ RPC_ENUM_IP_TABLE_ITEM ;
typedef TYPE_2__ RPC_ENUM_IP_TABLE ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int *,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ,size_t,size_t) ;
 int FUNC_6 (int *,char*,int ,size_t,size_t) ;
 int FUNC_7 (int *,char*) ;

void FUNC_8(PACK *VAR_0, RPC_ENUM_IP_TABLE *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, "HubName", VAR_1->HubName);

 FUNC_7(VAR_0, "IpTable");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumIpTable;VAR_2++)
 {
  RPC_ENUM_IP_TABLE_ITEM *VAR_3 = &VAR_1->IpTables[VAR_2];

  FUNC_1(VAR_0, "Key", VAR_3->Key, VAR_2, VAR_1->NumIpTable);
  FUNC_5(VAR_0, "SessionName", VAR_3->SessionName, VAR_2, VAR_1->NumIpTable);
  FUNC_2(VAR_0, "Ip", VAR_3->Ip, VAR_2, VAR_1->NumIpTable);
  FUNC_3(VAR_0, "IpV6", &VAR_3->IpV6, VAR_2, VAR_1->NumIpTable);
  FUNC_3(VAR_0, "IpAddress", &VAR_3->IpAddress, VAR_2, VAR_1->NumIpTable);
  FUNC_0(VAR_0, "DhcpAllocated", VAR_3->DhcpAllocated, VAR_2, VAR_1->NumIpTable);
  FUNC_6(VAR_0, "CreatedTime", VAR_3->CreatedTime, VAR_2, VAR_1->NumIpTable);
  FUNC_6(VAR_0, "UpdatedTime", VAR_3->UpdatedTime, VAR_2, VAR_1->NumIpTable);
  FUNC_0(VAR_0, "RemoteItem", VAR_3->RemoteItem, VAR_2, VAR_1->NumIpTable);
  FUNC_5(VAR_0, "RemoteHostname", VAR_3->RemoteHostname, VAR_2, VAR_1->NumIpTable);
 }
 FUNC_7(VAR_0, ((void*)0));
}
