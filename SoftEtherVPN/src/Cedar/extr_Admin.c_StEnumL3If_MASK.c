
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int name ;
typedef size_t UINT ;
struct TYPE_20__ {TYPE_1__* Server; } ;
struct TYPE_19__ {char* HubName; int SubnetMask; int IpAddress; } ;
struct TYPE_18__ {char* Name; int lock; int IfList; } ;
struct TYPE_17__ {char* Name; int NumItem; TYPE_2__* Items; } ;
struct TYPE_16__ {char* Name; char* HubName; int SubnetMask; int IpAddress; } ;
struct TYPE_15__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_L3IF ;
typedef TYPE_3__ RPC_ENUM_L3IF ;
typedef TYPE_4__ L3SW ;
typedef TYPE_5__ L3IF ;
typedef int CEDAR ;
typedef TYPE_6__ ADMIN ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_4__* FUNC_1 (int *,char*) ;
 TYPE_5__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_9 (int) ;

UINT FUNC_10(ADMIN *VAR_4, RPC_ENUM_L3IF *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 UINT VAR_8 = VAR_1;
 L3SW *VAR_9;
 char VAR_10[VAR_2 + 1];

 VAR_3;

 FUNC_6(VAR_10, sizeof(VAR_10), VAR_5->Name);

 FUNC_0(VAR_5);
 FUNC_8(VAR_5, sizeof(RPC_ENUM_L3IF));

 FUNC_6(VAR_5->Name, sizeof(VAR_5->Name), VAR_10);

 VAR_9 = FUNC_1(VAR_7, VAR_5->Name);

 if (VAR_9 == ((void*)0))
 {
  VAR_8 = VAR_0;
 }
 else
 {
  FUNC_4(VAR_9->lock);
  {
   UINT VAR_11;

   VAR_5->NumItem = FUNC_3(VAR_9->IfList);
   VAR_5->Items = FUNC_9(sizeof(RPC_L3IF) * VAR_5->NumItem);

   for (VAR_11 = 0;VAR_11 < VAR_5->NumItem;VAR_11++)
   {
    L3IF *VAR_12 = FUNC_2(VAR_9->IfList, VAR_11);
    RPC_L3IF *VAR_13 = &VAR_5->Items[VAR_11];

    FUNC_6(VAR_13->Name, sizeof(VAR_13->Name), VAR_9->Name);
    FUNC_6(VAR_13->HubName, sizeof(VAR_13->HubName), VAR_12->HubName);
    VAR_13->IpAddress = VAR_12->IpAddress;
    VAR_13->SubnetMask = VAR_12->SubnetMask;
   }
  }
  FUNC_7(VAR_9->lock);

  FUNC_5(VAR_9);
 }

 return VAR_8;
}
