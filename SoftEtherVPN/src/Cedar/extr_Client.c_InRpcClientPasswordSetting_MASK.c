
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IsPasswordPresented; int PasswordRemoteOnly; } ;
typedef TYPE_1__ RPC_CLIENT_PASSWORD_SETTING ;
typedef int PACK ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(RPC_CLIENT_PASSWORD_SETTING *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, sizeof(RPC_CLIENT_PASSWORD_SETTING));

 VAR_0->IsPasswordPresented = FUNC_0(VAR_1, "IsPasswordPresented") == 0 ? 0 : 1;
 VAR_0->PasswordRemoteOnly = FUNC_0(VAR_1, "PasswordRemoteOnly") == 0 ? 0 : 1;
}
