
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int hubname ;
struct TYPE_21__ {char* Name; int lock; TYPE_1__* Policy; int Note; int RealName; } ;
typedef TYPE_3__ USERGROUP ;
struct TYPE_22__ {int lock; TYPE_3__* Group; } ;
typedef TYPE_4__ USER ;
typedef size_t UINT ;
struct TYPE_27__ {TYPE_5__* Server; } ;
struct TYPE_26__ {TYPE_2__* HubDb; } ;
struct TYPE_25__ {char* HubName; size_t NumGroup; TYPE_6__* Groups; } ;
struct TYPE_24__ {char* Name; int DenyAccess; scalar_t__ NumUsers; int Note; int Realname; } ;
struct TYPE_23__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_20__ {int UserList; int GroupList; } ;
struct TYPE_19__ {int Access; } ;
typedef TYPE_5__ SERVER ;
typedef TYPE_6__ RPC_ENUM_GROUP_ITEM ;
typedef TYPE_7__ RPC_ENUM_GROUP ;
typedef TYPE_8__ HUB ;
typedef int CEDAR ;
typedef TYPE_9__ ADMIN ;


 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (TYPE_7__*) ;
 TYPE_8__* FUNC_3 (int *,char*) ;
 void* FUNC_4 (int ,size_t) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_8__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (char*,int,char*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_7__*,int) ;
 TYPE_6__* FUNC_16 (int) ;

UINT FUNC_17(ADMIN *VAR_7, RPC_ENUM_GROUP *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 HUB *VAR_11 = ((void*)0);
 UINT VAR_12 = VAR_3;
 char VAR_13[VAR_4 + 1];

 FUNC_10(VAR_13, sizeof(VAR_13), VAR_8->HubName);

 VAR_0;

 VAR_5;
 if (VAR_9->ServerType == VAR_6)
 {
  return VAR_2;
 }


 FUNC_7(VAR_10);
 {
  VAR_11 = FUNC_3(VAR_10, VAR_8->HubName);
 }
 FUNC_13(VAR_10);

 if (VAR_11 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_0(VAR_11);
 {
  UINT VAR_14, VAR_15;

  FUNC_2(VAR_8);
  FUNC_15(VAR_8, sizeof(RPC_ENUM_GROUP));
  FUNC_10(VAR_8->HubName, sizeof(VAR_8->HubName), VAR_13);

  VAR_8->NumGroup = FUNC_5(VAR_11->HubDb->GroupList);
  VAR_8->Groups = FUNC_16(sizeof(RPC_ENUM_GROUP_ITEM) * VAR_8->NumGroup);

  for (VAR_14 = 0;VAR_14 < VAR_8->NumGroup;VAR_14++)
  {
   RPC_ENUM_GROUP_ITEM *VAR_16 = &VAR_8->Groups[VAR_14];
   USERGROUP *VAR_17 = FUNC_4(VAR_11->HubDb->GroupList, VAR_14);

   FUNC_6(VAR_17->lock);
   {
    FUNC_10(VAR_16->Name, sizeof(VAR_16->Name), VAR_17->Name);
    FUNC_11(VAR_16->Realname, sizeof(VAR_16->Realname), VAR_17->RealName);
    FUNC_11(VAR_16->Note, sizeof(VAR_16->Note), VAR_17->Note);
    if (VAR_17->Policy != ((void*)0))
    {
     if (VAR_17->Policy->Access == 0)
     {
      VAR_16->DenyAccess = 1;
     }
    }
   }
   FUNC_12(VAR_17->lock);

   VAR_16->NumUsers = 0;


   FUNC_8(VAR_11->HubDb->UserList);
   {
    for (VAR_15 = 0;VAR_15 < FUNC_5(VAR_11->HubDb->UserList);VAR_15++)
    {
     USER *VAR_18 = FUNC_4(VAR_11->HubDb->UserList, VAR_15);

     FUNC_6(VAR_18->lock);
     {
      if (VAR_18->Group == VAR_17)
      {
       VAR_16->NumUsers++;
      }
     }
     FUNC_12(VAR_18->lock);
    }
   }
   FUNC_14(VAR_11->HubDb->UserList);
  }
 }
 FUNC_1(VAR_11);

 FUNC_9(VAR_11);

 return VAR_3;
}
