
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int MaxConnection; int UseEncrypt; int UseCompress; int HalfConnection; int Timeout; int IsAzureSession; int SessionKey32; int VLanId; int UdpAccelFastDisconnectDetect; int EnableHMacOnBulkOfRUDP; int EnableUdpRecovery; TYPE_5__* Connection; scalar_t__ EnableBulkOnRUDP; TYPE_2__* UdpAccel; TYPE_1__* Hub; int IpcMacAddress; scalar_t__ InProcMode; scalar_t__ NoSendSignature; int UdpSendKey; int UdpRecvKey; int Policy; int SessionKey; scalar_t__ QoS; int Name; } ;
struct TYPE_14__ {int Reverse_MyServerGlobalIp; TYPE_4__* BulkSendKey; TYPE_3__* BulkRecvKey; } ;
struct TYPE_13__ {scalar_t__ Protocol; TYPE_6__* FirstSock; int Name; } ;
struct TYPE_12__ {int Data; } ;
struct TYPE_11__ {int Data; } ;
struct TYPE_10__ {int MyPort; int MyCookie; int YourCookie; int UseHMac; int PlainTextMode; int MyKey; int MyIp; } ;
struct TYPE_9__ {int Name; } ;
typedef TYPE_6__ SOCK ;
typedef TYPE_7__ SESSION ;
typedef int PACK ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

PACK *FUNC_8(SESSION *VAR_3)
{
 PACK *VAR_4;

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_0();


 FUNC_6(VAR_4, "session_name", VAR_3->Name);


 FUNC_6(VAR_4, "connection_name", VAR_3->Connection->Name);


 FUNC_3(VAR_4, "max_connection", VAR_3->MaxConnection);
 FUNC_3(VAR_4, "use_encrypt", VAR_3->UseEncrypt == 0 ? 0 : 1);
 FUNC_3(VAR_4, "use_compress", VAR_3->UseCompress == 0 ? 0 : 1);
 FUNC_3(VAR_4, "half_connection", VAR_3->HalfConnection == 0 ? 0 : 1);
 FUNC_3(VAR_4, "timeout", VAR_3->Timeout);
 FUNC_3(VAR_4, "qos", VAR_3->QoS ? 1 : 0);
 FUNC_3(VAR_4, "is_azure_session", VAR_3->IsAzureSession);


 FUNC_2(VAR_4, "session_key", VAR_3->SessionKey, VAR_1);
 FUNC_3(VAR_4, "session_key_32", VAR_3->SessionKey32);


 FUNC_5(VAR_4, VAR_3->Policy);


 FUNC_3(VAR_4, "vlan_id", VAR_3->VLanId);

 if (VAR_3->Connection->Protocol == VAR_0)
 {

  FUNC_7(VAR_3->UdpSendKey, sizeof(VAR_3->UdpSendKey));
  FUNC_7(VAR_3->UdpRecvKey, sizeof(VAR_3->UdpRecvKey));


  FUNC_2(VAR_4, "udp_send_key", VAR_3->UdpRecvKey, sizeof(VAR_3->UdpRecvKey));
  FUNC_2(VAR_4, "udp_recv_key", VAR_3->UdpSendKey, sizeof(VAR_3->UdpSendKey));
 }


 if (VAR_3->NoSendSignature)
 {
  FUNC_1(VAR_4, "no_send_signature", 1);
 }

 if (VAR_3->InProcMode)
 {

  FUNC_2(VAR_4, "IpcMacAddress", VAR_3->IpcMacAddress, 6);


  FUNC_6(VAR_4, "IpcHubName", VAR_3->Hub->Name);
 }

 if (VAR_3->UdpAccel != ((void*)0))
 {

  FUNC_1(VAR_4, "use_udp_acceleration", 1);
  FUNC_4(VAR_4, "udp_acceleration_server_ip", &VAR_3->UdpAccel->MyIp);
  FUNC_3(VAR_4, "udp_acceleration_server_port", VAR_3->UdpAccel->MyPort);
  FUNC_2(VAR_4, "udp_acceleration_server_key", VAR_3->UdpAccel->MyKey, VAR_2);
  FUNC_3(VAR_4, "udp_acceleration_server_cookie", VAR_3->UdpAccel->MyCookie);
  FUNC_3(VAR_4, "udp_acceleration_client_cookie", VAR_3->UdpAccel->YourCookie);
  FUNC_1(VAR_4, "udp_acceleration_use_encryption", !VAR_3->UdpAccel->PlainTextMode);
  FUNC_1(VAR_4, "use_hmac_on_udp_acceleration", VAR_3->UdpAccel->UseHMac);
  FUNC_1(VAR_4, "udp_accel_fast_disconnect_detect", VAR_3->UdpAccelFastDisconnectDetect);
 }

 if (VAR_3->EnableBulkOnRUDP)
 {

  FUNC_1(VAR_4, "enable_bulk_on_rudp", 1);
  FUNC_1(VAR_4, "enable_hmac_on_bulk_of_rudp", VAR_3->EnableHMacOnBulkOfRUDP);

  FUNC_2(VAR_4, "bulk_on_rudp_send_key", VAR_3->Connection->FirstSock->BulkRecvKey->Data, VAR_1);
  FUNC_2(VAR_4, "bulk_on_rudp_recv_key", VAR_3->Connection->FirstSock->BulkSendKey->Data, VAR_1);
 }

 if (VAR_3->IsAzureSession)
 {
  if (VAR_3->Connection != ((void*)0) && VAR_3->Connection->FirstSock != ((void*)0))
  {
   SOCK *VAR_5 = VAR_3->Connection->FirstSock;

   FUNC_4(VAR_4, "azure_real_server_global_ip", &VAR_5->Reverse_MyServerGlobalIp);
  }
 }

 FUNC_1(VAR_4, "enable_udp_recovery", VAR_3->EnableUdpRecovery);

 return VAR_4;
}
