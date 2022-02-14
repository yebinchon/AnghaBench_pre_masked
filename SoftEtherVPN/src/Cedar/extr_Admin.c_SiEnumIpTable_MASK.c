
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
struct TYPE_19__ {int IpTable; } ;
struct TYPE_18__ {int UpdatedTime; int CreatedTime; int DhcpAllocated; int Ip; TYPE_1__* Session; } ;
struct TYPE_17__ {int NumIpTable; TYPE_3__* IpTables; int HubName; } ;
struct TYPE_16__ {int RemoteHostname; void* UpdatedTime; void* CreatedTime; int DhcpAllocated; int IpAddress; int IpV6; int Ip; int SessionName; int Key; } ;
struct TYPE_15__ {int * Cedar; } ;
struct TYPE_14__ {char* Name; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_ENUM_IP_TABLE_ITEM ;
typedef TYPE_4__ RPC_ENUM_IP_TABLE ;
typedef TYPE_5__ IP_TABLE_ENTRY ;
typedef int IP ;
typedef TYPE_6__ HUB ;
typedef int CEDAR ;


 int FUNC_0 (int *,int *,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_6__* FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 TYPE_5__* FUNC_4 (int ,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (int ,int,char*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 TYPE_3__* FUNC_14 (int) ;

UINT FUNC_15(SERVER *VAR_3, char *VAR_4, RPC_ENUM_IP_TABLE *VAR_5)
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
  VAR_8 = FUNC_1(VAR_6, VAR_4);
 }
 FUNC_12(VAR_6);

 if (VAR_8 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_10(VAR_5->HubName, sizeof(VAR_5->HubName), VAR_4);

 FUNC_7(VAR_8->IpTable);
 {
  VAR_5->NumIpTable = FUNC_5(VAR_8->IpTable);
  VAR_5->IpTables = FUNC_14(sizeof(RPC_ENUM_IP_TABLE_ITEM) * VAR_5->NumIpTable);

  for (VAR_7 = 0;VAR_7 < VAR_5->NumIpTable;VAR_7++)
  {
   RPC_ENUM_IP_TABLE_ITEM *VAR_9 = &VAR_5->IpTables[VAR_7];
   IP_TABLE_ENTRY *VAR_10 = FUNC_4(VAR_8->IpTable, VAR_7);

   VAR_9->Key = FUNC_8(VAR_10);
   FUNC_10(VAR_9->SessionName, sizeof(VAR_9->SessionName), VAR_10->Session->Name);
   VAR_9->Ip = FUNC_3(&VAR_10->Ip);
   FUNC_0(&VAR_9->IpV6, &VAR_10->Ip, sizeof(IP));
   FUNC_0(&VAR_9->IpAddress, &VAR_10->Ip, sizeof(IP));
   VAR_9->DhcpAllocated = VAR_10->DhcpAllocated;
   VAR_9->CreatedTime = FUNC_11(VAR_10->CreatedTime);
   VAR_9->UpdatedTime = FUNC_11(VAR_10->UpdatedTime);

   FUNC_2(VAR_9->RemoteHostname, sizeof(VAR_9->RemoteHostname));
  }
 }
 FUNC_13(VAR_8->IpTable);

 FUNC_9(VAR_8);

 return VAR_2;
}
