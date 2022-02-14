
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_18__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_17__ {int Me; } ;
struct TYPE_16__ {int IpTable; } ;
struct TYPE_15__ {int Key; int HubName; } ;
struct TYPE_14__ {scalar_t__ ServerType; int FarmMemberList; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_DELETE_TABLE ;
typedef int IP_TABLE_ENTRY ;
typedef TYPE_3__ HUB ;
typedef TYPE_4__ FARM_MEMBER ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_4__* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (TYPE_1__*,TYPE_4__*,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;

UINT FUNC_14(ADMIN *VAR_6, RPC_DELETE_TABLE *VAR_7)
{
 SERVER *VAR_8 = VAR_6->Server;
 CEDAR *VAR_9 = VAR_8->Cedar;
 HUB *VAR_10 = ((void*)0);
 UINT VAR_11 = VAR_3;

 VAR_0;

 FUNC_8(VAR_9);
 {
  VAR_10 = FUNC_2(VAR_9, VAR_7->HubName);
 }
 FUNC_12(VAR_9);

 if (VAR_10 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_6->ServerAdmin == 0 && FUNC_3(VAR_10, "no_delete_iptable") != 0)
 {
  FUNC_10(VAR_10);
  return VAR_2;
 }

 FUNC_9(VAR_10->IpTable);
 {
  if (FUNC_4(VAR_10->IpTable, VAR_7->Key))
  {
   IP_TABLE_ENTRY *VAR_12 = FUNC_7(VAR_10->IpTable, VAR_7->Key);
   FUNC_1(VAR_12);
   FUNC_0(VAR_10->IpTable, VAR_12);
  }
  else
  {
   VAR_11 = VAR_4;
  }
 }
 FUNC_13(VAR_10->IpTable);

 if (VAR_11 == VAR_4)
 {
  if (VAR_8->ServerType == VAR_5)
  {
   UINT VAR_13;
   FUNC_9(VAR_8->FarmMemberList);
   {
    for (VAR_13 = 0;VAR_13 < FUNC_6(VAR_8->FarmMemberList);VAR_13++)
    {
     FARM_MEMBER *VAR_14 = FUNC_5(VAR_8->FarmMemberList, VAR_13);
     if (VAR_14->Me == 0)
     {
      FUNC_11(VAR_8, VAR_14, VAR_7->HubName, VAR_7->Key);
      VAR_11 = VAR_3;
     }
    }
   }
   FUNC_13(VAR_8->FarmMemberList);
  }
 }

 FUNC_10(VAR_10);

 return VAR_11;
}
