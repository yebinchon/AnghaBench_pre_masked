
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumUser; TYPE_1__* Users; int HubName; } ;
struct TYPE_4__ {int Expires; int IsExpiresFilled; int Traffic; int IsTrafficFilled; int DenyAccess; int NumLogin; int LastLoginTime; int AuthType; int Note; int Realname; int GroupName; int Name; } ;
typedef TYPE_1__ RPC_ENUM_USER_ITEM ;
typedef TYPE_2__ RPC_ENUM_USER ;
typedef int PACK ;


 int FUNC_0 (int *,int *,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ,size_t,size_t) ;
 int FUNC_5 (int *,char*,int ,size_t,size_t) ;
 int FUNC_6 (int *,char*,int ,size_t,size_t) ;
 int FUNC_7 (int *,char*) ;

void FUNC_8(PACK *VAR_0, RPC_ENUM_USER *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }
 FUNC_3(VAR_0, "HubName", VAR_1->HubName);

 FUNC_7(VAR_0, "UserList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumUser;VAR_2++)
 {
  RPC_ENUM_USER_ITEM *VAR_3 = &VAR_1->Users[VAR_2];

  FUNC_4(VAR_0, "Name", VAR_3->Name, VAR_2, VAR_1->NumUser);
  FUNC_4(VAR_0, "GroupName", VAR_3->GroupName, VAR_2, VAR_1->NumUser);
  FUNC_6(VAR_0, "Realname", VAR_3->Realname, VAR_2, VAR_1->NumUser);
  FUNC_6(VAR_0, "Note", VAR_3->Note, VAR_2, VAR_1->NumUser);
  FUNC_2(VAR_0, "AuthType", VAR_3->AuthType, VAR_2, VAR_1->NumUser);
  FUNC_5(VAR_0, "LastLoginTime", VAR_3->LastLoginTime, VAR_2, VAR_1->NumUser);
  FUNC_2(VAR_0, "NumLogin", VAR_3->NumLogin, VAR_2, VAR_1->NumUser);
  FUNC_1(VAR_0, "DenyAccess", VAR_3->DenyAccess, VAR_2, VAR_1->NumUser);

  FUNC_1(VAR_0, "IsTrafficFilled", VAR_3->IsTrafficFilled, VAR_2, VAR_1->NumUser);
  FUNC_0(&VAR_3->Traffic, VAR_0, VAR_2, VAR_1->NumUser);

  FUNC_1(VAR_0, "IsExpiresFilled", VAR_3->IsExpiresFilled, VAR_2, VAR_1->NumUser);
  FUNC_5(VAR_0, "Expires", VAR_3->Expires, VAR_2, VAR_1->NumUser);
 }
 FUNC_7(VAR_0, ((void*)0));
}
