
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumMacTable; TYPE_1__* MacTables; int HubName; } ;
struct TYPE_6__ {int RemoteHostname; int RemoteItem; void* UpdatedTime; void* CreatedTime; void* VlanId; int MacAddress; int SessionName; void* Key; } ;
typedef TYPE_1__ RPC_ENUM_MAC_TABLE_ITEM ;
typedef TYPE_2__ RPC_ENUM_MAC_TABLE ;
typedef int PACK ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,int ,int,size_t) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*,size_t) ;
 void* FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *,char*,int ,int) ;
 int FUNC_6 (int *,char*,int ,int,size_t) ;
 int FUNC_7 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_8 (int) ;

void FUNC_9(RPC_ENUM_MAC_TABLE *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_0, sizeof(RPC_ENUM_MAC_TABLE));
 FUNC_5(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->NumMacTable = FUNC_2(VAR_1, "SessionName");
 VAR_0->MacTables = FUNC_8(sizeof(RPC_ENUM_MAC_TABLE_ITEM) * VAR_0->NumMacTable);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumMacTable;VAR_2++)
 {
  RPC_ENUM_MAC_TABLE_ITEM *VAR_3 = &VAR_0->MacTables[VAR_2];

  VAR_3->Key = FUNC_4(VAR_1, "Key", VAR_2);
  FUNC_6(VAR_1, "SessionName", VAR_3->SessionName, sizeof(VAR_3->SessionName), VAR_2);
  FUNC_1(VAR_1, "MacAddress", VAR_3->MacAddress, sizeof(VAR_3->MacAddress), VAR_2);
  VAR_3->VlanId = FUNC_4(VAR_1, "VlanId", VAR_2);
  VAR_3->CreatedTime = FUNC_3(VAR_1, "CreatedTime", VAR_2);
  VAR_3->UpdatedTime = FUNC_3(VAR_1, "UpdatedTime", VAR_2);
  VAR_3->RemoteItem = FUNC_0(VAR_1, "RemoteItem", VAR_2);
  FUNC_6(VAR_1, "RemoteHostname", VAR_3->RemoteHostname, sizeof(VAR_3->RemoteHostname), VAR_2);
 }
}
