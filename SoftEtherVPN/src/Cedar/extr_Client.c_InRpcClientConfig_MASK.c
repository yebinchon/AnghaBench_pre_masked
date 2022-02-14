
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int UseKeepConnect; int AllowRemoteConfig; int KeepConnectHost; int NicDownOnDisconnect; scalar_t__ KeepConnectInterval; scalar_t__ KeepConnectProtocol; scalar_t__ KeepConnectPort; } ;
typedef int PACK ;
typedef TYPE_1__ CLIENT_CONFIG ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(CLIENT_CONFIG *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(CLIENT_CONFIG));
 VAR_0->UseKeepConnect = FUNC_1(VAR_1, "UseKeepConnect") == 0 ? 0 : 1;
 VAR_0->KeepConnectPort = FUNC_1(VAR_1, "KeepConnectPort");
 VAR_0->KeepConnectProtocol = FUNC_1(VAR_1, "KeepConnectProtocol");
 VAR_0->KeepConnectInterval = FUNC_1(VAR_1, "KeepConnectInterval");
 VAR_0->AllowRemoteConfig = FUNC_1(VAR_1, "AllowRemoteConfig") == 0 ? 0 : 1;
 VAR_0->NicDownOnDisconnect = FUNC_0(VAR_1, "NicDownOnDisconnect");
 FUNC_2(VAR_1, "KeepConnectHost", VAR_0->KeepConnectHost, sizeof(VAR_0->KeepConnectHost));
}
