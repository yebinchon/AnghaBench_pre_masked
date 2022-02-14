
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ClientX; int * ServerX; int Traffic; int Policy; int VLanId; int TotalRecvSizeReal; int TotalSendSizeReal; int TotalRecvSize; int TotalSendSize; int CurrentConnectionEstablishTime; int FirstConnectionEstablisiedTime; int StartTime; int IsMonitorMode; int IsBridgeMode; int IsUsingUdpAcceleration; int IsUdpAccelerationEnabled; int UnderlayProtocol; int IsRUDPSession; int UseCompress; int UseEncrypt; int NumTcpConnectionsDownload; int NumTcpConnectionsUpload; int NumTcpConnections; int MaxTcpConnections; int QoS; int HalfConnection; int NumConnectionsEstablished; int ServerProductBuild; int ServerProductVer; int ServerPort; int SessionStatus; int Connected; int Active; int SessionKey; int ConnectionName; int SessionName; int CipherName; int ServerProductName; int ServerName; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_CONNECTION_STATUS ;
typedef int PACK ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,char*,int ,int ) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *,char*,int ) ;
 int VAR_0 ;
 int * FUNC_11 (int *,int) ;

void FUNC_12(PACK *VAR_1, RPC_CLIENT_GET_CONNECTION_STATUS *VAR_2)
{
 BUF *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_10(VAR_1, "AccountName", VAR_2->AccountName);

 FUNC_8(VAR_1, "ServerName", VAR_2->ServerName);
 FUNC_8(VAR_1, "ServerProductName", VAR_2->ServerProductName);
 FUNC_8(VAR_1, "CipherName", VAR_2->CipherName);
 FUNC_8(VAR_1, "SessionName", VAR_2->SessionName);
 FUNC_8(VAR_1, "ConnectionName", VAR_2->ConnectionName);

 FUNC_5(VAR_1, "SessionKey", VAR_2->SessionKey, VAR_0);

 FUNC_3(VAR_1, "Active", VAR_2->Active);
 FUNC_3(VAR_1, "Connected", VAR_2->Connected);
 FUNC_6(VAR_1, "SessionStatus", VAR_2->SessionStatus);
 FUNC_6(VAR_1, "ServerPort", VAR_2->ServerPort);
 FUNC_6(VAR_1, "ServerProductVer", VAR_2->ServerProductVer);
 FUNC_6(VAR_1, "ServerProductBuild", VAR_2->ServerProductBuild);
 FUNC_6(VAR_1, "NumConnectionsEstablished", VAR_2->NumConnectionsEstablished);
 FUNC_3(VAR_1, "HalfConnection", VAR_2->HalfConnection);
 FUNC_3(VAR_1, "QoS", VAR_2->QoS);
 FUNC_6(VAR_1, "MaxTcpConnections", VAR_2->MaxTcpConnections);
 FUNC_6(VAR_1, "NumTcpConnections", VAR_2->NumTcpConnections);
 FUNC_6(VAR_1, "NumTcpConnectionsUpload", VAR_2->NumTcpConnectionsUpload);
 FUNC_6(VAR_1, "NumTcpConnectionsDownload", VAR_2->NumTcpConnectionsDownload);
 FUNC_3(VAR_1, "UseEncrypt", VAR_2->UseEncrypt);
 FUNC_3(VAR_1, "UseCompress", VAR_2->UseCompress);
 FUNC_3(VAR_1, "IsRUDPSession", VAR_2->IsRUDPSession);
 FUNC_8(VAR_1, "UnderlayProtocol", VAR_2->UnderlayProtocol);
 FUNC_3(VAR_1, "IsUdpAccelerationEnabled", VAR_2->IsUdpAccelerationEnabled);
 FUNC_3(VAR_1, "IsUsingUdpAcceleration", VAR_2->IsUsingUdpAcceleration);

 FUNC_3(VAR_1, "IsBridgeMode", VAR_2->IsBridgeMode);
 FUNC_3(VAR_1, "IsMonitorMode", VAR_2->IsMonitorMode);

 FUNC_9(VAR_1, "StartTime", VAR_2->StartTime);
 FUNC_9(VAR_1, "FirstConnectionEstablisiedTime", VAR_2->FirstConnectionEstablisiedTime);
 FUNC_9(VAR_1, "CurrentConnectionEstablishTime", VAR_2->CurrentConnectionEstablishTime);
 FUNC_7(VAR_1, "TotalSendSize", VAR_2->TotalSendSize);
 FUNC_7(VAR_1, "TotalRecvSize", VAR_2->TotalRecvSize);
 FUNC_7(VAR_1, "TotalSendSizeReal", VAR_2->TotalSendSizeReal);
 FUNC_7(VAR_1, "TotalRecvSizeReal", VAR_2->TotalRecvSizeReal);

 FUNC_6(VAR_1, "VLanId", VAR_2->VLanId);

 FUNC_1(VAR_1, &VAR_2->Policy);

 FUNC_2(VAR_1, &VAR_2->Traffic);

 if (VAR_2->ServerX != ((void*)0))
 {
  VAR_3 = FUNC_11(VAR_2->ServerX, 0);
  FUNC_4(VAR_1, "ServerX", VAR_3);
  FUNC_0(VAR_3);
 }

 if (VAR_2->ClientX != ((void*)0))
 {
  VAR_3 = FUNC_11(VAR_2->ClientX, 0);
  FUNC_4(VAR_1, "ClientX", VAR_3);
  FUNC_0(VAR_3);
 }
}
