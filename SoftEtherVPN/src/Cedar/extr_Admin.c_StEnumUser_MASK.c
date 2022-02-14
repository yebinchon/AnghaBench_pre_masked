
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int hubname ;
struct TYPE_20__ {char* Name; char* GroupName; int lock; int ExpireTime; int Traffic; TYPE_1__* Policy; int NumLogin; int LastLoginTime; int AuthType; int Note; int RealName; } ;
typedef TYPE_3__ USER ;
typedef int UINT ;
struct TYPE_25__ {TYPE_4__* Server; } ;
struct TYPE_24__ {TYPE_2__* HubDb; } ;
struct TYPE_23__ {char* HubName; int NumUser; TYPE_5__* Users; } ;
struct TYPE_22__ {char* Name; char* GroupName; int DenyAccess; int IsTrafficFilled; int IsExpiresFilled; int Expires; int Traffic; int NumLogin; int LastLoginTime; int AuthType; int Note; int Realname; } ;
struct TYPE_21__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_19__ {int UserList; } ;
struct TYPE_18__ {scalar_t__ Access; } ;
typedef int TRAFFIC ;
typedef TYPE_4__ SERVER ;
typedef TYPE_5__ RPC_ENUM_USER_ITEM ;
typedef TYPE_6__ RPC_ENUM_USER ;
typedef TYPE_7__ HUB ;
typedef int CEDAR ;
typedef TYPE_8__ ADMIN ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_7__* FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_7__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (char*,int,char*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_6__*,int) ;
 TYPE_5__* FUNC_16 (int) ;

UINT FUNC_17(ADMIN *VAR_7, RPC_ENUM_USER *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 HUB *VAR_11 = ((void*)0);
 UINT VAR_12 = VAR_3;
 char VAR_13[VAR_4 + 1];
 UINT VAR_14, VAR_15;

 VAR_0;
 VAR_5;
 if (VAR_9->ServerType == VAR_6)
 {
  return VAR_2;
 }

 FUNC_7(VAR_10);
 {
  VAR_11 = FUNC_2(VAR_10, VAR_8->HubName);
 }
 FUNC_13(VAR_10);

 if (VAR_11 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_1(VAR_8);

 FUNC_10(VAR_13, sizeof(VAR_13), VAR_8->HubName);

 FUNC_15(VAR_8, sizeof(RPC_ENUM_USER));
 FUNC_10(VAR_8->HubName, sizeof(VAR_8->HubName), VAR_13);

 FUNC_8(VAR_11->HubDb->UserList);
 {
  VAR_15 = FUNC_5(VAR_11->HubDb->UserList);

  VAR_8->NumUser = VAR_15;
  VAR_8->Users = FUNC_16(sizeof(RPC_ENUM_USER_ITEM) * VAR_15);

  for (VAR_14 = 0;VAR_14 < VAR_15;VAR_14++)
  {
   USER *VAR_16 = FUNC_4(VAR_11->HubDb->UserList, VAR_14);

   FUNC_6(VAR_16->lock);
   {
    RPC_ENUM_USER_ITEM *VAR_17 = &VAR_8->Users[VAR_14];

    FUNC_10(VAR_17->Name, sizeof(VAR_17->Name), VAR_16->Name);
    FUNC_10(VAR_17->GroupName, sizeof(VAR_17->GroupName), VAR_16->GroupName);
    FUNC_11(VAR_17->Realname, sizeof(VAR_17->Realname), VAR_16->RealName);
    FUNC_11(VAR_17->Note, sizeof(VAR_17->Note), VAR_16->Note);
    VAR_17->AuthType = VAR_16->AuthType;
    VAR_17->LastLoginTime = VAR_16->LastLoginTime;
    VAR_17->NumLogin = VAR_16->NumLogin;

    if (VAR_16->Policy != ((void*)0))
    {
     VAR_17->DenyAccess = VAR_16->Policy->Access ? 0 : 1;
    }

    FUNC_0(&VAR_17->Traffic, VAR_16->Traffic, sizeof(TRAFFIC));
    VAR_17->IsTrafficFilled = 1;

    VAR_17->Expires = VAR_16->ExpireTime;
    VAR_17->IsExpiresFilled = 1;
   }
   FUNC_12(VAR_16->lock);
  }
 }
 FUNC_14(VAR_11->HubDb->UserList);

 FUNC_9(VAR_11);

 FUNC_3(VAR_9);

 return VAR_3;
}
