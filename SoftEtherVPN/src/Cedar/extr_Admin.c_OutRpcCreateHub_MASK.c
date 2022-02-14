
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int HubType; int HubOption; int AdminPasswordPlainText; int Online; int SecurePassword; int HashedPassword; int HubName; } ;
typedef TYPE_1__ RPC_CREATE_HUB ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;

void FUNC_5(PACK *VAR_0, RPC_CREATE_HUB *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, "HubName", VAR_1->HubName);
 FUNC_2(VAR_0, "HashedPassword", VAR_1->HashedPassword, sizeof(VAR_1->HashedPassword));
 FUNC_2(VAR_0, "SecurePassword", VAR_1->SecurePassword, sizeof(VAR_1->SecurePassword));
 FUNC_1(VAR_0, "Online", VAR_1->Online);
 FUNC_4(VAR_0, "AdminPasswordPlainText", VAR_1->AdminPasswordPlainText);
 FUNC_0(VAR_0, &VAR_1->HubOption);
 FUNC_3(VAR_0, "HubType", VAR_1->HubType);
}
