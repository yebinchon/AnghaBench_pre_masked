
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_15__ {int Active; scalar_t__ SessionStatus; int Connected; scalar_t__ NumTcpConnections; int NumConnectionsEstablished; void* FirstConnectionEstablisiedTime; void* StartTime; int IsMonitorMode; int IsBridgeMode; int Traffic; int ServerPort; int ServerName; int ConnectionName; int SessionName; int TotalSendSizeReal; int TotalRecvSizeReal; int TotalRecvSize; int TotalSendSize; int Policy; int * SessionKey; int IsUsingUdpAcceleration; int IsUdpAccelerationEnabled; int UnderlayProtocol; int IsRUDPSession; int UseCompress; int CipherName; scalar_t__ UseEncrypt; int NumTcpConnectionsUpload; int NumTcpConnectionsDownload; scalar_t__ HalfConnection; int QoS; int VLanId; int MaxTcpConnections; void* CurrentConnectionEstablishTime; void* ClientX; void* ServerX; int ServerProductBuild; int ServerProductVer; int ServerProductName; int AccountName; } ;
struct TYPE_14__ {scalar_t__ ClientStatus; int ServerMode; int lock; int NumConnectionsEstablished; int FirstConnectionEstablisiedTime; int CreatedTime; TYPE_3__* Connection; int IsMonitorMode; int IsBridgeMode; int TrafficLock; int Traffic; int Name; int TotalRecvSizeReal; int TotalSendSizeReal; int TotalSendSize; int TotalRecvSize; int Policy; int SessionKey; int IsUsingUdpAcceleration; int UseUdpAcceleration; int UnderlayProtocol; int IsRUDPSession; int UseCompress; scalar_t__ UseEncrypt; int QoS; int VLanId; scalar_t__ HalfConnection; int MaxConnection; int CurrentConnectionEstablishTime; TYPE_1__* ClientOption; } ;
struct TYPE_13__ {int Direction; } ;
struct TYPE_12__ {scalar_t__ Protocol; int lock; int ServerPort; int ServerName; int Name; int CipherName; TYPE_2__* Tcp; int ClientX; int ServerX; int ServerBuild; int ServerVer; int ServerStr; } ;
struct TYPE_11__ {int TcpSockList; } ;
struct TYPE_10__ {int AccountName; } ;
typedef int TRAFFIC ;
typedef TYPE_4__ TCPSOCK ;
typedef TYPE_5__ SESSION ;
typedef TYPE_6__ RPC_CLIENT_GET_CONNECTION_STATUS ;
typedef int POLICY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_4__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,int,int ) ;
 int VAR_3 ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(RPC_CLIENT_GET_CONNECTION_STATUS *VAR_4, SESSION *VAR_5)
{

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_5->lock);
 {

  VAR_4->Active = 1;


  VAR_4->SessionStatus = VAR_5->ClientStatus;


  FUNC_8(VAR_4->AccountName, sizeof(VAR_4->AccountName), VAR_5->ClientOption->AccountName);

  if (VAR_5->ClientStatus == VAR_0 && VAR_5->Connection != ((void*)0))
  {
   FUNC_4(VAR_5->Connection->lock);
   {

    VAR_4->Connected = 1;

    FUNC_6(VAR_4->ServerProductName, sizeof(VAR_4->ServerProductName), VAR_5->Connection->ServerStr);

    VAR_4->ServerProductVer = VAR_5->Connection->ServerVer;

    VAR_4->ServerProductBuild = VAR_5->Connection->ServerBuild;

    VAR_4->ServerX = FUNC_0(VAR_5->Connection->ServerX);

    VAR_4->ClientX = FUNC_0(VAR_5->Connection->ClientX);

    VAR_4->CurrentConnectionEstablishTime = FUNC_7(VAR_5->CurrentConnectionEstablishTime);

    VAR_4->MaxTcpConnections = VAR_5->MaxConnection;

    VAR_4->HalfConnection = VAR_5->HalfConnection;

    VAR_4->VLanId = VAR_5->VLanId;

    VAR_4->QoS = VAR_5->QoS;
    if (VAR_5->Connection->Protocol == VAR_1)
    {
     UINT VAR_6;

     FUNC_5(VAR_5->Connection->Tcp->TcpSockList);
     {
      VAR_4->NumTcpConnections = FUNC_3(VAR_5->Connection->Tcp->TcpSockList);
      if (VAR_4->HalfConnection)
      {
       for (VAR_6 = 0;VAR_6 < VAR_4->NumTcpConnections;VAR_6++)
       {
        TCPSOCK *VAR_7 = FUNC_2(VAR_5->Connection->Tcp->TcpSockList, VAR_6);
        if (VAR_7->Direction & VAR_3)
        {
         VAR_4->NumTcpConnectionsDownload++;
        }
        else
        {
         VAR_4->NumTcpConnectionsUpload++;
        }
       }
      }
     }
     FUNC_10(VAR_5->Connection->Tcp->TcpSockList);
    }

    VAR_4->UseEncrypt = VAR_5->UseEncrypt;
    if (VAR_4->UseEncrypt)
    {
     FUNC_6(VAR_4->CipherName, sizeof(VAR_4->CipherName), VAR_5->Connection->CipherName);
    }

    VAR_4->UseCompress = VAR_5->UseCompress;

    VAR_4->IsRUDPSession = VAR_5->IsRUDPSession;

    FUNC_6(VAR_4->UnderlayProtocol, sizeof(VAR_4->UnderlayProtocol), VAR_5->UnderlayProtocol);

    VAR_4->IsUdpAccelerationEnabled = VAR_5->UseUdpAcceleration;
    VAR_4->IsUsingUdpAcceleration = VAR_5->IsUsingUdpAcceleration;

    FUNC_1(VAR_4->SessionKey, VAR_5->SessionKey, VAR_2);

    FUNC_1(&VAR_4->Policy, VAR_5->Policy, sizeof(POLICY));

    if (VAR_5->ServerMode == 0)
    {
     VAR_4->TotalSendSize = VAR_5->TotalSendSize;
     VAR_4->TotalRecvSize = VAR_5->TotalRecvSize;
     VAR_4->TotalRecvSizeReal = VAR_5->TotalRecvSizeReal;
     VAR_4->TotalSendSizeReal = VAR_5->TotalSendSizeReal;
    }
    else
    {
     VAR_4->TotalSendSize = VAR_5->TotalRecvSize;
     VAR_4->TotalRecvSize = VAR_5->TotalSendSize;
     VAR_4->TotalRecvSizeReal = VAR_5->TotalSendSizeReal;
     VAR_4->TotalSendSizeReal = VAR_5->TotalRecvSizeReal;
    }

    FUNC_6(VAR_4->SessionName, sizeof(VAR_4->SessionName), VAR_5->Name);

    FUNC_6(VAR_4->ConnectionName, sizeof(VAR_4->ConnectionName), VAR_5->Connection->Name);

    FUNC_6(VAR_4->ServerName, sizeof(VAR_4->ServerName), VAR_5->Connection->ServerName);

    VAR_4->ServerPort = VAR_5->Connection->ServerPort;

    FUNC_4(VAR_5->TrafficLock);
    {
     FUNC_1(&VAR_4->Traffic, VAR_5->Traffic, sizeof(TRAFFIC));
    }
    FUNC_9(VAR_5->TrafficLock);

    VAR_4->IsBridgeMode = VAR_5->IsBridgeMode;
    VAR_4->IsMonitorMode = VAR_5->IsMonitorMode;
   }
   FUNC_9(VAR_5->Connection->lock);
  }

  VAR_4->StartTime = FUNC_7(VAR_5->CreatedTime);


  VAR_4->FirstConnectionEstablisiedTime = FUNC_7(VAR_5->FirstConnectionEstablisiedTime);

  VAR_4->NumConnectionsEstablished = VAR_5->NumConnectionsEstablished;
 }
 FUNC_9(VAR_5->lock);
}
