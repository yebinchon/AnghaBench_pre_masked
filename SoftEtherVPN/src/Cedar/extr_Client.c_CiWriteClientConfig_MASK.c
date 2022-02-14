
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int NicDownOnDisconnect; int NoChangeWcmNetworkSettingOnWindows8; int KeepConnectInterval; int AllowRemoteConfig; int KeepConnectProtocol; int KeepConnectPort; int KeepConnectHost; int UseKeepConnect; } ;
typedef int FOLDER ;
typedef TYPE_1__ CLIENT_CONFIG ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(FOLDER *VAR_0, CLIENT_CONFIG *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "UseKeepConnect", VAR_1->UseKeepConnect);
 FUNC_2(VAR_0, "KeepConnectHost", VAR_1->KeepConnectHost);
 FUNC_1(VAR_0, "KeepConnectPort", VAR_1->KeepConnectPort);
 FUNC_1(VAR_0, "KeepConnectProtocol", VAR_1->KeepConnectProtocol);
 FUNC_0(VAR_0, "AllowRemoteConfig", VAR_1->AllowRemoteConfig);
 FUNC_1(VAR_0, "KeepConnectInterval", VAR_1->KeepConnectInterval);
 FUNC_0(VAR_0, "NoChangeWcmNetworkSettingOnWindows8", VAR_1->NoChangeWcmNetworkSettingOnWindows8);
 FUNC_0(VAR_0, "NicDownOnDisconnect", VAR_1->NicDownOnDisconnect);
}
