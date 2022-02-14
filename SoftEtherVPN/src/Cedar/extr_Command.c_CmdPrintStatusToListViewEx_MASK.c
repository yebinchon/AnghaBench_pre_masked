
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
typedef int vv ;
typedef int tmp ;
typedef int str ;
typedef int UINT64 ;
typedef char* UINT ;
struct TYPE_7__ {int UnicastCount; int UnicastBytes; int BroadcastCount; int BroadcastBytes; } ;
struct TYPE_6__ {int UnicastCount; int UnicastBytes; int BroadcastCount; int BroadcastBytes; } ;
struct TYPE_8__ {TYPE_2__ Recv; TYPE_1__ Send; } ;
struct TYPE_9__ {char* AccountName; int Connected; int SessionStatus; char* ServerName; char* ServerPort; char* ServerProductName; int ServerProductVer; char* ServerProductBuild; scalar_t__ StartTime; scalar_t__ FirstConnectionEstablisiedTime; scalar_t__ CurrentConnectionEstablishTime; char* NumConnectionsEstablished; char* NumTcpConnections; char* NumTcpConnectionsUpload; char* NumTcpConnectionsDownload; char* MaxTcpConnections; int UseEncrypt; char* CipherName; int TotalRecvSize; int TotalSendSize; char* UnderlayProtocol; char* SessionName; char* ConnectionName; TYPE_3__ Traffic; scalar_t__ IsMonitorMode; scalar_t__ IsBridgeMode; int SessionKey; scalar_t__ IsUsingUdpAcceleration; scalar_t__ IsUdpAccelerationEnabled; scalar_t__ TotalSendSizeReal; scalar_t__ TotalRecvSizeReal; scalar_t__ UseCompress; scalar_t__ HalfConnection; scalar_t__ QoS; int VLanId; } ;
typedef TYPE_4__ RPC_CLIENT_GET_CONNECTION_STATUS ;
typedef int CT ;


 int FUNC_0 (char*,int,int ,int) ;






 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*,int,char*,...) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int,char*) ;
 int FUNC_12 (char*,int ) ;
 char* FUNC_13 (char*) ;

void FUNC_14(CT *VAR_1, RPC_CLIENT_GET_CONNECTION_STATUS *VAR_2, bool VAR_3)
{
 wchar_t VAR_4[VAR_0];
 char VAR_5[VAR_0];
 char VAR_6[128];

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_3 == 0)
 {
  FUNC_1(VAR_1, FUNC_13("CM_ST_ACCOUNT_NAME"), VAR_2->AccountName);

  if (VAR_2->Connected == 0)
  {
   wchar_t *VAR_7 = FUNC_13("CM_ST_CONNECTED_FALSE");
   switch (VAR_2->SessionStatus)
   {
   case 132:
    VAR_7 = FUNC_13("CM_ST_CONNECTING");
    break;
   case 129:
    VAR_7 = FUNC_13("CM_ST_NEGOTIATION");
    break;
   case 133:
    VAR_7 = FUNC_13("CM_ST_AUTH");
    break;
   case 131:
    VAR_7 = FUNC_13("CM_ST_ESTABLISHED");
    break;
   case 128:
    VAR_7 = FUNC_13("CM_ST_RETRY");
    break;
   case 130:
    VAR_7 = FUNC_13("CM_ST_IDLE");
    break;
   }
   FUNC_1(VAR_1, FUNC_13("CM_ST_CONNECTED"), VAR_7);
  }
  else
  {
   FUNC_1(VAR_1, FUNC_13("CM_ST_CONNECTED"), FUNC_13("CM_ST_CONNECTED_TRUE"));
  }
 }

 if (VAR_2->Connected)
 {
  if (VAR_2->VLanId == 0)
  {
   FUNC_11(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_NO_VLAN"));
  }
  else
  {
   FUNC_12(VAR_4, VAR_2->VLanId);
  }

  FUNC_1(VAR_1, FUNC_13("CM_ST_VLAN_ID"), VAR_4);

  if (VAR_3 == 0)
  {
   FUNC_6(VAR_4, sizeof(VAR_4), VAR_2->ServerName);
   FUNC_1(VAR_1, FUNC_13("CM_ST_SERVER_NAME"), VAR_4);

   FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_PORT_TCP"), VAR_2->ServerPort);
   FUNC_1(VAR_1, FUNC_13("CM_ST_SERVER_PORT"), VAR_4);
  }

  FUNC_6(VAR_4, sizeof(VAR_4), VAR_2->ServerProductName);
  FUNC_1(VAR_1, FUNC_13("CM_ST_SERVER_P_NAME"), VAR_4);

  FUNC_9(VAR_4, sizeof(VAR_4), L"%u.%02u", VAR_2->ServerProductVer / 100, VAR_2->ServerProductVer % 100);
  FUNC_1(VAR_1, FUNC_13("CM_ST_SERVER_P_VER"), VAR_4);
  FUNC_9(VAR_4, sizeof(VAR_4), L"Build %u", VAR_2->ServerProductBuild);
  FUNC_1(VAR_1, FUNC_13("CM_ST_SERVER_P_BUILD"), VAR_4);
 }

 FUNC_2(VAR_4, sizeof(VAR_4), FUNC_7(VAR_2->StartTime), ((void*)0));
 FUNC_1(VAR_1, FUNC_13("CM_ST_START_TIME"), VAR_4);

 FUNC_2(VAR_4, sizeof(VAR_4), FUNC_7(VAR_2->FirstConnectionEstablisiedTime), ((void*)0));

 FUNC_1(VAR_1, FUNC_13("CM_ST_FIRST_ESTAB_TIME"), VAR_2->FirstConnectionEstablisiedTime == 0 ? FUNC_13("CM_ST_NONE") : VAR_4);

 if (VAR_2->Connected)
 {
  FUNC_2(VAR_4, sizeof(VAR_4), FUNC_7(VAR_2->CurrentConnectionEstablishTime), ((void*)0));
  FUNC_1(VAR_1, FUNC_13("CM_ST_CURR_ESTAB_TIME"), VAR_4);
 }

 if (VAR_3 == 0)
 {
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_NUM_STR"), VAR_2->NumConnectionsEstablished);
  FUNC_1(VAR_1, FUNC_13("CM_ST_NUM_ESTABLISHED"), VAR_4);
 }

 if (VAR_2->Connected)
 {
  FUNC_1(VAR_1, FUNC_13("CM_ST_HALF_CONNECTION"), VAR_2->HalfConnection ? FUNC_13("CM_ST_HALF_TRUE") : FUNC_13("CM_ST_HALF_FALSE"));

  FUNC_1(VAR_1, FUNC_13("CM_ST_QOS"), VAR_2->QoS ? FUNC_13("CM_ST_QOS_TRUE") : FUNC_13("CM_ST_QOS_FALSE"));

  FUNC_9(VAR_4, sizeof(VAR_4), L"%u", VAR_2->NumTcpConnections);
  FUNC_1(VAR_1, FUNC_13("CM_ST_NUM_TCP"), VAR_4);

  if (VAR_2->HalfConnection)
  {
   FUNC_9(VAR_4, sizeof(VAR_4), L"%u", VAR_2->NumTcpConnectionsUpload);
   FUNC_1(VAR_1, FUNC_13("CM_ST_NUM_TCP_UPLOAD"), VAR_4);
   FUNC_9(VAR_4, sizeof(VAR_4), L"%u", VAR_2->NumTcpConnectionsDownload);
   FUNC_1(VAR_1, FUNC_13("CM_ST_NUM_TCP_DOWNLOAD"), VAR_4);
  }

  FUNC_9(VAR_4, sizeof(VAR_4), L"%u", VAR_2->MaxTcpConnections);
  FUNC_1(VAR_1, FUNC_13("CM_ST_MAX_TCP"), VAR_4);

  if (VAR_2->UseEncrypt == 0)
  {
   FUNC_11(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_USE_ENCRYPT_FALSE"));
  }
  else
  {
   if (FUNC_5(VAR_2->CipherName) != 0)
   {
    FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_USE_ENCRYPT_TRUE"), VAR_2->CipherName);
   }
   else
   {
    FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_USE_ENCRYPT_TRUE2"));
   }
  }
  FUNC_1(VAR_1, FUNC_13("CM_ST_USE_ENCRYPT"), VAR_4);

  if (VAR_2->UseCompress)
  {
   UINT VAR_8 = 0;
   if ((VAR_2->TotalRecvSize + VAR_2->TotalSendSize) > 0)
   {
    VAR_8 = (UINT)((UINT64)100 - (UINT64)(VAR_2->TotalRecvSizeReal + VAR_2->TotalSendSizeReal) * (UINT64)100 /
     (VAR_2->TotalRecvSize + VAR_2->TotalSendSize));
    VAR_8 = FUNC_4(VAR_8, 0, 100);
   }

   FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_COMPRESS_TRUE"), VAR_8);
  }
  else
  {
   FUNC_11(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_COMPRESS_FALSE"));
  }
  FUNC_1(VAR_1, FUNC_13("CM_ST_USE_COMPRESS"), VAR_4);

  if (FUNC_3(VAR_2->UnderlayProtocol) == 0)
  {
   FUNC_6(VAR_4, sizeof(VAR_4), VAR_2->UnderlayProtocol);
   FUNC_1(VAR_1, FUNC_13("CM_ST_UNDERLAY_PROTOCOL"), VAR_4);
  }

  FUNC_1(VAR_1, FUNC_13("CM_ST_UDP_ACCEL_ENABLED"), (VAR_2->IsUdpAccelerationEnabled ? FUNC_13("CM_ST_YES") : FUNC_13("CM_ST_NO")));
  FUNC_1(VAR_1, FUNC_13("CM_ST_UDP_ACCEL_USING"), (VAR_2->IsUsingUdpAcceleration ? FUNC_13("CM_ST_YES") : FUNC_13("CM_ST_NO")));

  FUNC_6(VAR_4, sizeof(VAR_4), VAR_2->SessionName);
  FUNC_1(VAR_1, FUNC_13("CM_ST_SESSION_NAME"), VAR_4);

  FUNC_6(VAR_4, sizeof(VAR_4), VAR_2->ConnectionName);
  if (FUNC_10(VAR_4, L"INITING") != 0)
  {
   FUNC_1(VAR_1, FUNC_13("CM_ST_CONNECTION_NAME"), VAR_4);
  }

  FUNC_0(VAR_5, sizeof(VAR_5), VAR_2->SessionKey, sizeof(VAR_2->SessionKey));
  FUNC_6(VAR_4, sizeof(VAR_4), VAR_5);
  FUNC_1(VAR_1, FUNC_13("CM_ST_SESSION_KEY"), VAR_4);

  FUNC_1(VAR_1, FUNC_13("CM_ST_BRIDGE_MODE"), VAR_2->IsBridgeMode ? FUNC_13("CM_ST_YES") : FUNC_13("CM_ST_NO"));

  FUNC_1(VAR_1, FUNC_13("CM_ST_MONITOR_MODE"), VAR_2->IsMonitorMode ? FUNC_13("CM_ST_YES") : FUNC_13("CM_ST_NO"));

  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2->TotalSendSize);
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_SIZE_BYTE_STR"), VAR_6);
  FUNC_1(VAR_1, FUNC_13("CM_ST_SEND_SIZE"), VAR_4);

  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2->TotalRecvSize);
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_SIZE_BYTE_STR"), VAR_6);
  FUNC_1(VAR_1, FUNC_13("CM_ST_RECV_SIZE"), VAR_4);

  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2->Traffic.Send.UnicastCount);
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_NUM_PACKET_STR"), VAR_6);
  FUNC_1(VAR_1, FUNC_13("CM_ST_SEND_UCAST_NUM"), VAR_4);

  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2->Traffic.Send.UnicastBytes);
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_SIZE_BYTE_STR"), VAR_6);
  FUNC_1(VAR_1, FUNC_13("CM_ST_SEND_UCAST_SIZE"), VAR_4);

  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2->Traffic.Send.BroadcastCount);
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_NUM_PACKET_STR"), VAR_6);
  FUNC_1(VAR_1, FUNC_13("CM_ST_SEND_BCAST_NUM"), VAR_4);

  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2->Traffic.Send.BroadcastBytes);
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_SIZE_BYTE_STR"), VAR_6);
  FUNC_1(VAR_1, FUNC_13("CM_ST_SEND_BCAST_SIZE"), VAR_4);

  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2->Traffic.Recv.UnicastCount);
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_NUM_PACKET_STR"), VAR_6);
  FUNC_1(VAR_1, FUNC_13("CM_ST_RECV_UCAST_NUM"), VAR_4);

  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2->Traffic.Recv.UnicastBytes);
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_SIZE_BYTE_STR"), VAR_6);
  FUNC_1(VAR_1, FUNC_13("CM_ST_RECV_UCAST_SIZE"), VAR_4);

  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2->Traffic.Recv.BroadcastCount);
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_NUM_PACKET_STR"), VAR_6);
  FUNC_1(VAR_1, FUNC_13("CM_ST_RECV_BCAST_NUM"), VAR_4);

  FUNC_8(VAR_6, sizeof(VAR_6), VAR_2->Traffic.Recv.BroadcastBytes);
  FUNC_9(VAR_4, sizeof(VAR_4), FUNC_13("CM_ST_SIZE_BYTE_STR"), VAR_6);
  FUNC_1(VAR_1, FUNC_13("CM_ST_RECV_BCAST_SIZE"), VAR_4);
 }
}
