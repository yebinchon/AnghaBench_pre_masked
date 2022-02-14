
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_19__ {int MacHashTable; } ;
struct TYPE_18__ {int VlanId; int UpdatedTime; int CreatedTime; int MacAddress; TYPE_1__* Session; } ;
struct TYPE_17__ {int NumMacTable; TYPE_3__* MacTables; int HubName; } ;
struct TYPE_16__ {int RemoteHostname; int VlanId; void* UpdatedTime; void* CreatedTime; int MacAddress; int SessionName; int Key; } ;
struct TYPE_15__ {int * Cedar; } ;
struct TYPE_14__ {char* Name; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_ENUM_MAC_TABLE_ITEM ;
typedef TYPE_4__ RPC_ENUM_MAC_TABLE ;
typedef TYPE_5__ MAC_TABLE_ENTRY ;
typedef TYPE_6__ HUB ;
typedef int CEDAR ;


 int FUNC_0 (int ,int ,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_5__**) ;
 TYPE_6__* FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int ,int,char*) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 TYPE_3__* FUNC_13 (int) ;

UINT FUNC_14(SERVER *VAR_3, char *VAR_4, RPC_ENUM_MAC_TABLE *VAR_5)
{
 CEDAR *VAR_6;
 UINT VAR_7;
 HUB *VAR_8 = ((void*)0);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return VAR_1;
 }

 VAR_6 = VAR_3->Cedar;

 FUNC_6(VAR_6);
 {
  VAR_8 = FUNC_2(VAR_6, VAR_4);
 }
 FUNC_12(VAR_6);

 if (VAR_8 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_9(VAR_5->HubName, sizeof(VAR_5->HubName), VAR_4);

 FUNC_5(VAR_8->MacHashTable);
 {
  MAC_TABLE_ENTRY **VAR_9 = (MAC_TABLE_ENTRY **)FUNC_4(VAR_8->MacHashTable, &VAR_5->NumMacTable);
  VAR_5->MacTables = FUNC_13(sizeof(RPC_ENUM_MAC_TABLE_ITEM) * VAR_5->NumMacTable);

  for (VAR_7 = 0;VAR_7 < VAR_5->NumMacTable;VAR_7++)
  {
   RPC_ENUM_MAC_TABLE_ITEM *VAR_10 = &VAR_5->MacTables[VAR_7];
   MAC_TABLE_ENTRY *VAR_11 = VAR_9[VAR_7];

   VAR_10->Key = FUNC_7(VAR_11);
   FUNC_9(VAR_10->SessionName, sizeof(VAR_10->SessionName), VAR_11->Session->Name);
   FUNC_0(VAR_10->MacAddress, VAR_11->MacAddress, sizeof(VAR_10->MacAddress));
   VAR_10->CreatedTime = FUNC_10(VAR_11->CreatedTime);
   VAR_10->UpdatedTime = FUNC_10(VAR_11->UpdatedTime);
   VAR_10->VlanId = VAR_11->VlanId;

   FUNC_3(VAR_10->RemoteHostname, sizeof(VAR_10->RemoteHostname));
  }

  FUNC_1(VAR_9);
 }
 FUNC_11(VAR_8->MacHashTable);

 FUNC_8(VAR_8);

 return VAR_2;
}
