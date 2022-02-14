
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* NicDownOnDisconnect; void* NoChangeWcmNetworkSettingOnWindows8; int KeepConnectInterval; void* AllowRemoteConfig; void* KeepConnectProtocol; void* KeepConnectPort; int KeepConnectHost; void* UseKeepConnect; } ;
typedef int FOLDER ;
typedef TYPE_1__ CLIENT_CONFIG ;


 void* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (void*,int ,int ) ;

void FUNC_4(CLIENT_CONFIG *VAR_2, FOLDER *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_2->UseKeepConnect = FUNC_0(VAR_3, "UseKeepConnect");
 FUNC_2(VAR_3, "KeepConnectHost", VAR_2->KeepConnectHost, sizeof(VAR_2->KeepConnectHost));
 VAR_2->KeepConnectPort = FUNC_1(VAR_3, "KeepConnectPort");
 VAR_2->KeepConnectProtocol = FUNC_1(VAR_3, "KeepConnectProtocol");
 VAR_2->AllowRemoteConfig = FUNC_0(VAR_3, "AllowRemoteConfig");
 VAR_2->KeepConnectInterval = FUNC_3(FUNC_1(VAR_3, "KeepConnectInterval"), VAR_1, VAR_0);
 VAR_2->NoChangeWcmNetworkSettingOnWindows8 = FUNC_0(VAR_3, "NoChangeWcmNetworkSettingOnWindows8");
 VAR_2->NicDownOnDisconnect = FUNC_0(VAR_3, "NicDownOnDisconnect");
}
