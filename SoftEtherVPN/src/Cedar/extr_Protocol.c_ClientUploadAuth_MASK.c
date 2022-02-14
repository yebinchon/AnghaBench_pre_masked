
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int sign ;
typedef int my_ip ;
struct TYPE_19__ {int bits; int is_compatible_bit; } ;
typedef TYPE_4__ X ;
typedef int UCHAR ;
struct TYPE_22__ {int AuthType; char* Username; TYPE_4__* ClientX; int ClientK; int PlainPassword; int HashedPassword; } ;
struct TYPE_21__ {char* HubName; int MaxConnection; int UseEncrypt; int UseCompress; int HalfConnection; int RequireBridgeRoutingMode; int RequireMonitorMode; int NoUdpAcceleration; scalar_t__ DisableQoS; } ;
struct TYPE_20__ {int UseTicket; scalar_t__ Err; int Protocol; char* ClientStr; int ClientVer; int ClientBuild; int FirstSock; TYPE_3__* Session; TYPE_1__* Cedar; int * Ticket; void* ClientX; int Random; } ;
struct TYPE_18__ {int ForceStopFlag; TYPE_2__* UdpAccel; TYPE_6__* ClientOption; TYPE_7__* ClientAuth; } ;
struct TYPE_17__ {int MyPort; int * MyKey; int MyIp; } ;
struct TYPE_16__ {int ClientId; } ;
typedef int RPC_WINVER ;
typedef int PACK ;
typedef int NODE_INFO ;
typedef int IP ;
typedef TYPE_5__ CONNECTION ;
typedef TYPE_6__ CLIENT_OPTION ;
typedef TYPE_7__ CLIENT_AUTH ;


 int VAR_0 ;





 int FUNC_0 (TYPE_5__*,int *,int ,TYPE_4__**) ;
 void* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 (int *,TYPE_5__*) ;
 int FUNC_16 (int *,char*,int *,int) ;
 int FUNC_17 (int *,char*,int) ;
 int FUNC_18 (int *,char*,int *) ;
 int FUNC_19 (int *,char*,char*) ;
 int * FUNC_20 (char*,char*) ;
 int * FUNC_21 (char*,char*,TYPE_4__*,int *,int) ;
 int * FUNC_22 (char*,char*,int *) ;
 int * FUNC_23 (char*,char*,int ) ;
 int FUNC_24 (int *,int ,int,int ,int) ;
 int VAR_4 ;
 int FUNC_25 (int *,int ,int ) ;
 scalar_t__ FUNC_26 (char*) ;
 int VAR_5 ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 char* FUNC_30 (char*) ;

bool FUNC_31(CONNECTION *VAR_6)
{
 PACK *VAR_7 = ((void*)0);
 CLIENT_AUTH *VAR_8;
 CLIENT_OPTION *VAR_9;
 X *VAR_10;
 bool VAR_11;
 NODE_INFO VAR_12;
 UCHAR VAR_13[VAR_4];
 UCHAR VAR_14[4096 / 8];
 UCHAR VAR_15[VAR_4];
 RPC_WINVER VAR_16;

 if (VAR_6 == ((void*)0))
 {
  return 0;
 }

 FUNC_27(VAR_14, sizeof(VAR_14));

 VAR_8 = VAR_6->Session->ClientAuth;
 VAR_9 = VAR_6->Session->ClientOption;

 if (VAR_6->UseTicket == 0)
 {
  switch (VAR_8->AuthType)
  {
  case 132:

   VAR_7 = FUNC_20(VAR_9->HubName, VAR_8->Username);
   break;

  case 130:

   FUNC_25(VAR_13, VAR_8->HashedPassword, VAR_6->Random);
   VAR_7 = FUNC_22(VAR_9->HubName, VAR_8->Username, VAR_13);
   break;

  case 129:

   VAR_7 = FUNC_23(VAR_9->HubName, VAR_8->Username, VAR_8->PlainPassword);
   break;

  case 131:

   if (VAR_8->ClientX != ((void*)0) && VAR_8->ClientX->is_compatible_bit &&
    VAR_8->ClientX->bits != 0 && (VAR_8->ClientX->bits / 8) <= sizeof(VAR_14))
   {
    if (FUNC_24(VAR_14, VAR_6->Random, VAR_4, VAR_8->ClientK, VAR_8->ClientX->bits))
    {
     VAR_7 = FUNC_21(VAR_9->HubName, VAR_8->Username, VAR_8->ClientX, VAR_14, VAR_8->ClientX->bits / 8);
     VAR_6->ClientX = FUNC_1(VAR_8->ClientX);
    }
   }
   break;

  case 128:

   if (FUNC_0(VAR_6, VAR_14, VAR_6->Random, &VAR_10))
   {
    VAR_7 = FUNC_21(VAR_9->HubName, VAR_8->Username, VAR_10, VAR_14, VAR_10->bits / 8);
    VAR_6->ClientX = FUNC_1(VAR_10);
    FUNC_5(VAR_10);
   }
   else
   {
    VAR_6->Err = VAR_3;
    VAR_6->Session->ForceStopFlag = 1;
   }
   break;
  }
 }
 else
 {

  VAR_7 = FUNC_11();
  FUNC_19(VAR_7, "method", "login");
  FUNC_19(VAR_7, "hubname", VAR_9->HubName);
  FUNC_19(VAR_7, "username", VAR_8->Username);
  FUNC_17(VAR_7, "authtype", VAR_0);
  FUNC_16(VAR_7, "ticket", VAR_6->Ticket, VAR_4);
 }

 if (VAR_7 == ((void*)0))
 {

  if (VAR_6->Err != VAR_3)
  {
   VAR_6->Err = VAR_2;
  }
  return 0;
 }

 FUNC_15(VAR_7, VAR_6);


 FUNC_17(VAR_7, "protocol", VAR_6->Protocol);


 FUNC_19(VAR_7, "hello", VAR_6->ClientStr);
 FUNC_17(VAR_7, "version", VAR_6->ClientVer);
 FUNC_17(VAR_7, "build", VAR_6->ClientBuild);
 FUNC_17(VAR_7, "client_id", VAR_6->Cedar->ClientId);


 FUNC_17(VAR_7, "max_connection", VAR_9->MaxConnection);

 FUNC_17(VAR_7, "use_encrypt", VAR_9->UseEncrypt == 0 ? 0 : 1);

 FUNC_17(VAR_7, "use_compress", VAR_9->UseCompress == 0 ? 0 : 1);

 FUNC_17(VAR_7, "half_connection", VAR_9->HalfConnection == 0 ? 0 : 1);


 FUNC_14(VAR_7, "require_bridge_routing_mode", VAR_9->RequireBridgeRoutingMode);


 FUNC_14(VAR_7, "require_monitor_mode", VAR_9->RequireMonitorMode);


 FUNC_14(VAR_7, "qos", VAR_9->DisableQoS ? 0 : 1);


 FUNC_14(VAR_7, "support_bulk_on_rudp", 1);
 FUNC_14(VAR_7, "support_hmac_on_bulk_of_rudp", 1);


 FUNC_14(VAR_7, "support_udp_recovery", 1);


 FUNC_6(VAR_15);
 FUNC_16(VAR_7, "unique_id", VAR_15, VAR_4);


 if (VAR_9->NoUdpAcceleration == 0 && VAR_6->Session->UdpAccel != ((void*)0))
 {
  IP VAR_17;

  FUNC_27(&VAR_17, sizeof(VAR_17));

  FUNC_14(VAR_7, "use_udp_acceleration", 1);

  FUNC_2(&VAR_17, &VAR_6->Session->UdpAccel->MyIp, sizeof(IP));
  if (FUNC_10(&VAR_17))
  {
   if (FUNC_9(&VAR_17))
   {
    FUNC_28(&VAR_17);
   }
   else
   {
    FUNC_29(&VAR_17);
   }
  }

  FUNC_18(VAR_7, "udp_acceleration_client_ip", &VAR_17);
  FUNC_17(VAR_7, "udp_acceleration_client_port", VAR_6->Session->UdpAccel->MyPort);
  FUNC_16(VAR_7, "udp_acceleration_client_key", VAR_6->Session->UdpAccel->MyKey, VAR_5);
  FUNC_14(VAR_7, "support_hmac_on_udp_acceleration", 1);
  FUNC_14(VAR_7, "support_udp_accel_fast_disconnect_detect", 1);
 }


 {
  char *VAR_18 = FUNC_30("BRANDED_C_TO_S");
  if(FUNC_26(VAR_18) > 0)
  {
   FUNC_19(VAR_7, "branded_ctos", VAR_18);
  }
 }


 FUNC_3(&VAR_12, VAR_6);
 FUNC_12(VAR_7, &VAR_12);


 FUNC_7(&VAR_16);
 FUNC_13(VAR_7, &VAR_16);

 VAR_11 = FUNC_8(VAR_6->FirstSock, VAR_7);
 if (VAR_11 == 0)
 {
  VAR_6->Err = VAR_1;
 }

 FUNC_4(VAR_7);

 return VAR_11;
}
