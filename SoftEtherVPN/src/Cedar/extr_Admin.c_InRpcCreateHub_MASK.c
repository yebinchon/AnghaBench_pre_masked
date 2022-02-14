
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HubType; int HubOption; int Online; int AdminPasswordPlainText; int SecurePassword; int HashedPassword; int HubName; } ;
typedef TYPE_1__ RPC_CREATE_HUB ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;

void FUNC_6(RPC_CREATE_HUB *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, sizeof(RPC_CREATE_HUB));
 FUNC_4(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 FUNC_2(VAR_1, "HashedPassword", VAR_0->HashedPassword, sizeof(VAR_0->HashedPassword));
 FUNC_2(VAR_1, "SecurePassword", VAR_0->SecurePassword, sizeof(VAR_0->SecurePassword));
 FUNC_4(VAR_1, "AdminPasswordPlainText", VAR_0->AdminPasswordPlainText, sizeof(VAR_0->AdminPasswordPlainText));
 VAR_0->Online = FUNC_1(VAR_1, "Online");
 FUNC_0(&VAR_0->HubOption, VAR_1);
 VAR_0->HubType = FUNC_3(VAR_1, "HubType");
}
