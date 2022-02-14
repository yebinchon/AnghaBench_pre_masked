
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PasswordRemoteOnly; int IsPasswordPresented; } ;
typedef TYPE_1__ RPC_CLIENT_PASSWORD_SETTING ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;

void FUNC_1(PACK *VAR_0, RPC_CLIENT_PASSWORD_SETTING *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "IsPasswordPresented", VAR_1->IsPasswordPresented);
 FUNC_0(VAR_0, "PasswordRemoteOnly", VAR_1->PasswordRemoteOnly);
}
