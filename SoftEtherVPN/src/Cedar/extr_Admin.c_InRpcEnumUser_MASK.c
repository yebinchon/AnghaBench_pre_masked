
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumUser; TYPE_1__* Users; int HubName; } ;
struct TYPE_6__ {void* Expires; void* IsExpiresFilled; int Traffic; void* IsTrafficFilled; void* DenyAccess; void* NumLogin; void* LastLoginTime; void* AuthType; int Note; int Realname; int GroupName; int Name; } ;
typedef TYPE_1__ RPC_ENUM_USER_ITEM ;
typedef TYPE_2__ RPC_ENUM_USER ;
typedef int PACK ;


 int FUNC_0 (int *,int *,size_t) ;
 void* FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*,size_t) ;
 void* FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *,char*,int ,int) ;
 int FUNC_6 (int *,char*,int ,int,size_t) ;
 int FUNC_7 (int *,char*,int ,int,size_t) ;
 int FUNC_8 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_9 (int) ;

void FUNC_10(RPC_ENUM_USER *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_0, sizeof(RPC_ENUM_USER));
 FUNC_5(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->NumUser = FUNC_2(VAR_1, "Name");
 VAR_0->Users = FUNC_9(sizeof(RPC_ENUM_USER_ITEM) * VAR_0->NumUser);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumUser;VAR_2++)
 {
  RPC_ENUM_USER_ITEM *VAR_3 = &VAR_0->Users[VAR_2];

  FUNC_6(VAR_1, "Name", VAR_3->Name, sizeof(VAR_3->Name), VAR_2);
  FUNC_6(VAR_1, "GroupName", VAR_3->GroupName, sizeof(VAR_3->GroupName), VAR_2);
  FUNC_7(VAR_1, "Realname", VAR_3->Realname, sizeof(VAR_3->Realname), VAR_2);
  FUNC_7(VAR_1, "Note", VAR_3->Note, sizeof(VAR_3->Note), VAR_2);
  VAR_3->AuthType = FUNC_4(VAR_1, "AuthType", VAR_2);
  VAR_3->LastLoginTime = FUNC_3(VAR_1, "LastLoginTime", VAR_2);
  VAR_3->NumLogin = FUNC_4(VAR_1, "NumLogin", VAR_2);
  VAR_3->DenyAccess = FUNC_1(VAR_1, "DenyAccess", VAR_2);

  VAR_3->IsTrafficFilled = FUNC_1(VAR_1, "IsTrafficFilled", VAR_2);
  FUNC_0(&VAR_3->Traffic, VAR_1, VAR_2);

  VAR_3->IsExpiresFilled = FUNC_1(VAR_1, "IsExpiresFilled", VAR_2);
  VAR_3->Expires = FUNC_3(VAR_1, "Expires", VAR_2);
 }
}
