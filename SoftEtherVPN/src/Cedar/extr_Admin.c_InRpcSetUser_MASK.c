
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Policy; int Traffic; int NumLogin; int Name; int AuthType; int AuthData; void* ExpireTime; void* UpdatedTime; void* CreatedTime; int Note; int Realname; int GroupName; int HubName; } ;
typedef TYPE_1__ RPC_SET_USER ;
typedef int POLICY ;
typedef int PACK ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ,int) ;
 int FUNC_7 (int *,char*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int) ;

void FUNC_10(RPC_SET_USER *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_0, sizeof(RPC_SET_USER));
 FUNC_6(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 FUNC_6(VAR_1, "Name", VAR_0->Name, sizeof(VAR_0->Name));
 FUNC_6(VAR_1, "GroupName", VAR_0->GroupName, sizeof(VAR_0->GroupName));
 FUNC_7(VAR_1, "Realname", VAR_0->Realname, sizeof(VAR_0->Realname));
 FUNC_7(VAR_1, "Note", VAR_0->Note, sizeof(VAR_0->Note));
 VAR_0->CreatedTime = FUNC_5(VAR_1, "CreatedTime");
 VAR_0->UpdatedTime = FUNC_5(VAR_1, "UpdatedTime");
 VAR_0->ExpireTime = FUNC_5(VAR_1, "ExpireTime");
 VAR_0->AuthData = FUNC_0(VAR_1, &VAR_0->AuthType, VAR_0->Name);
 VAR_0->NumLogin = FUNC_4(VAR_1, "NumLogin");
 FUNC_2(&VAR_0->Traffic, VAR_1);

 if (FUNC_3(VAR_1, "UsePolicy"))
 {
  VAR_0->Policy = FUNC_9(sizeof(POLICY));
  FUNC_1(VAR_0->Policy, VAR_1);
 }
}
