
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Active; int Connected; int HalfConnection; int QoS; int UseEncrypt; int UseCompress; int IsRUDPSession; int IsUdpAccelerationEnabled; int IsUsingUdpAcceleration; int Traffic; int Policy; void* ClientX; void* ServerX; void* VLanId; void* IsMonitorMode; void* IsBridgeMode; int UnderlayProtocol; void* TotalRecvSizeReal; void* TotalSendSizeReal; void* TotalRecvSize; void* TotalSendSize; void* CurrentConnectionEstablishTime; void* FirstConnectionEstablisiedTime; void* StartTime; void* NumTcpConnectionsDownload; void* NumTcpConnectionsUpload; void* NumTcpConnections; void* MaxTcpConnections; void* NumConnectionsEstablished; void* ServerProductBuild; void* ServerProductVer; void* ServerPort; void* SessionStatus; int SessionKey; int ConnectionName; int SessionName; int CipherName; int ServerProductName; int ServerName; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_CONNECTION_STATUS ;
typedef int PACK ;
typedef int BUF ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 void* FUNC_8 (int *,char*) ;
 void* FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int ,int) ;
 int FUNC_11 (int *,char*,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_12 (TYPE_1__*,int) ;

void FUNC_13(RPC_CLIENT_GET_CONNECTION_STATUS *VAR_1, PACK *VAR_2)
{
 BUF *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_12(VAR_1, sizeof(RPC_CLIENT_GET_CONNECTION_STATUS));

 FUNC_11(VAR_2, "AccountName", VAR_1->AccountName, sizeof(VAR_1->AccountName));

 FUNC_10(VAR_2, "ServerName", VAR_1->ServerName, sizeof(VAR_1->ServerName));
 FUNC_10(VAR_2, "ServerProductName", VAR_1->ServerProductName, sizeof(VAR_1->ServerProductName));
 FUNC_10(VAR_2, "CipherName", VAR_1->CipherName, sizeof(VAR_1->CipherName));
 FUNC_10(VAR_2, "SessionName", VAR_1->SessionName, sizeof(VAR_1->SessionName));
 FUNC_10(VAR_2, "ConnectionName", VAR_1->ConnectionName, sizeof(VAR_1->ConnectionName));

 if (FUNC_7(VAR_2, "SessionKey") == VAR_0)
 {
  FUNC_6(VAR_2, "SessionKey", VAR_1->SessionKey);
 }

 VAR_1->SessionStatus = FUNC_8(VAR_2, "SessionStatus");
 VAR_1->ServerPort = FUNC_8(VAR_2, "ServerPort");
 VAR_1->ServerProductVer = FUNC_8(VAR_2, "ServerProductVer");
 VAR_1->ServerProductBuild = FUNC_8(VAR_2, "ServerProductBuild");
 VAR_1->NumConnectionsEstablished = FUNC_8(VAR_2, "NumConnectionsEstablished");
 VAR_1->MaxTcpConnections = FUNC_8(VAR_2, "MaxTcpConnections");
 VAR_1->NumTcpConnections = FUNC_8(VAR_2, "NumTcpConnections");
 VAR_1->NumTcpConnectionsUpload = FUNC_8(VAR_2, "NumTcpConnectionsUpload");
 VAR_1->NumTcpConnectionsDownload = FUNC_8(VAR_2, "NumTcpConnectionsDownload");

 VAR_1->StartTime = FUNC_9(VAR_2, "StartTime");

 VAR_1->FirstConnectionEstablisiedTime = FUNC_9(VAR_2, "FirstConnectionEstablisiedTime");
 VAR_1->CurrentConnectionEstablishTime = FUNC_9(VAR_2, "CurrentConnectionEstablishTime");
 VAR_1->TotalSendSize = FUNC_9(VAR_2, "TotalSendSize");
 VAR_1->TotalRecvSize = FUNC_9(VAR_2, "TotalRecvSize");
 VAR_1->TotalSendSizeReal = FUNC_9(VAR_2, "TotalSendSizeReal");
 VAR_1->TotalRecvSizeReal = FUNC_9(VAR_2, "TotalRecvSizeReal");

 VAR_1->Active = FUNC_8(VAR_2, "Active") ? 1 : 0;
 VAR_1->Connected = FUNC_8(VAR_2, "Connected") ? 1 : 0;
 VAR_1->HalfConnection = FUNC_8(VAR_2, "HalfConnection") ? 1 : 0;
 VAR_1->QoS = FUNC_8(VAR_2, "QoS") ? 1 : 0;
 VAR_1->UseEncrypt = FUNC_8(VAR_2, "UseEncrypt") ? 1 : 0;
 VAR_1->UseCompress = FUNC_8(VAR_2, "UseCompress") ? 1 : 0;
 VAR_1->IsRUDPSession = FUNC_8(VAR_2, "IsRUDPSession") ? 1 : 0;
 FUNC_10(VAR_2, "UnderlayProtocol", VAR_1->UnderlayProtocol, sizeof(VAR_1->UnderlayProtocol));
 VAR_1->IsUdpAccelerationEnabled = FUNC_8(VAR_2, "IsUdpAccelerationEnabled") ? 1 : 0;
 VAR_1->IsUsingUdpAcceleration = FUNC_8(VAR_2, "IsUsingUdpAcceleration") ? 1 : 0;

 VAR_1->IsBridgeMode = FUNC_4(VAR_2, "IsBridgeMode");
 VAR_1->IsMonitorMode = FUNC_4(VAR_2, "IsMonitorMode");

 VAR_1->VLanId = FUNC_8(VAR_2, "VLanId");

 VAR_3 = FUNC_5(VAR_2, "ServerX");
 if (VAR_3 != ((void*)0))
 {
  VAR_1->ServerX = FUNC_0(VAR_3, 0);
  FUNC_1(VAR_3);
 }

 VAR_3 = FUNC_5(VAR_2, "ClientX");
 if (VAR_3 != ((void*)0))
 {
  VAR_1->ClientX = FUNC_0(VAR_3, 0);
  FUNC_1(VAR_3);
 }

 FUNC_2(&VAR_1->Policy, VAR_2);

 FUNC_3(&VAR_1->Traffic, VAR_2);
}
