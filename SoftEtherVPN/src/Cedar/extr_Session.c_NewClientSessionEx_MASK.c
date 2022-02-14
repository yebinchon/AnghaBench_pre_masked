
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_16__ {TYPE_2__* Session; } ;
typedef TYPE_1__ VH ;
struct TYPE_19__ {scalar_t__ AuthType; int RetryInterval; int DeviceName; int UseCompress; int UseEncrypt; int MaxConnection; int * SecureSignProc; } ;
struct TYPE_18__ {scalar_t__ Id; scalar_t__ Param; } ;
struct TYPE_17__ {int ServerMode; int RetryInterval; int ClientModeAndUseVLan; int IsVPNClientAndVLAN_Win32; int VirtualHost; int LinkModeClient; int SecureNATMode; int BridgeMode; int* NicDownOnDisconnect; TYPE_12__* ClientOption; TYPE_12__* ClientAuth; int * Account; int ref; TYPE_3__* PacketAdapter; int * Link; int UseCompress; int UseEncrypt; int MaxConnection; int CancelList; int Cancel1; void* OldTraffic; void* TrafficLock; int HaltEvent; void* Traffic; int LastCommTime; int CreatedTime; int Name; int * Cedar; void* lock; int LoggingRecordCount; } ;
struct TYPE_15__ {int DisableQoS; int MaxConnection; int HalfConnection; scalar_t__ AuthType; scalar_t__ NumRetry; int DeviceName; int * ClientK; int * ClientX; scalar_t__ NoRoutingTracking; int AdditionalConnectionInterval; } ;
struct TYPE_14__ {int OsType; } ;
typedef int THREAD ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ PACKET_ADAPTER ;
typedef int LINK ;
typedef TYPE_4__ CLIENT_OPTION ;
typedef TYPE_4__ CLIENT_AUTH ;
typedef int CEDAR ;
typedef int ACCOUNT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_12__*,TYPE_4__*,int) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_11__* FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (int,int ,int) ;
 int FUNC_8 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 void* FUNC_14 () ;
 int FUNC_15 () ;
 int * FUNC_16 (int ,void*) ;
 void* FUNC_17 () ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_19 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 () ;
 int FUNC_23 (int *) ;
 TYPE_2__* FUNC_24 (int) ;

SESSION *FUNC_25(CEDAR *VAR_9, CLIENT_OPTION *VAR_10, CLIENT_AUTH *VAR_11, PACKET_ADAPTER *VAR_12, ACCOUNT *VAR_13, bool *VAR_14)
{
 SESSION *VAR_15;
 THREAD *VAR_16;

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || VAR_12 == ((void*)0) ||
  (VAR_11->AuthType == VAR_1 && VAR_11->SecureSignProc == ((void*)0)))
 {
  return ((void*)0);
 }


 VAR_15 = FUNC_24(sizeof(SESSION));

 VAR_15->LoggingRecordCount = FUNC_12();

 VAR_15->lock = FUNC_14();
 VAR_15->ref = FUNC_15();
 VAR_15->Cedar = VAR_9;
 VAR_15->ServerMode = 0;
 VAR_15->Name = FUNC_4("CLIENT_SESSION");
 VAR_15->CreatedTime = VAR_15->LastCommTime = FUNC_22();
 VAR_15->Traffic = FUNC_17();
 VAR_15->HaltEvent = FUNC_13();
 VAR_15->PacketAdapter = VAR_12;
 VAR_15->TrafficLock = FUNC_14();
 VAR_15->OldTraffic = FUNC_17();
 VAR_15->Cancel1 = FUNC_10();
 VAR_15->CancelList = FUNC_11();


 VAR_15->ClientOption = FUNC_9(sizeof(CLIENT_OPTION));
 FUNC_3(VAR_15->ClientOption, VAR_10, sizeof(CLIENT_OPTION));

 if (FUNC_5(VAR_3))
 {
  VAR_15->ClientOption->DisableQoS = 1;
  VAR_15->ClientOption->MaxConnection = 1;
  VAR_15->ClientOption->HalfConnection = 0;
 }

 VAR_15->MaxConnection = VAR_10->MaxConnection;
 VAR_15->UseEncrypt = VAR_10->UseEncrypt;
 VAR_15->UseCompress = VAR_10->UseCompress;


 VAR_15->RetryInterval = FUNC_7(VAR_10->RetryInterval, 0, 4000000) * 1000;
 VAR_15->RetryInterval = FUNC_7(VAR_15->RetryInterval, VAR_6, VAR_5);


 VAR_15->ClientOption->AdditionalConnectionInterval = FUNC_8(VAR_15->ClientOption->AdditionalConnectionInterval, 1);


 VAR_15->ClientModeAndUseVLan = (FUNC_21(VAR_15->ClientOption->DeviceName) == 0) ? 0 : 1;

 if (VAR_15->ClientOption->NoRoutingTracking)
 {
  VAR_15->ClientModeAndUseVLan = 0;
 }

 if (VAR_12->Id == VAR_7)
 {
  VAR_15->IsVPNClientAndVLAN_Win32 = 1;
 }

 if (FUNC_21(VAR_10->DeviceName) == 0)
 {

  VAR_15->ClientModeAndUseVLan = 0;
  VAR_15->VirtualHost = 1;
 }

 if (FUNC_18(FUNC_6()->OsType))
 {

  VAR_15->ClientOption->HalfConnection = 0;
 }


 VAR_15->ClientAuth = FUNC_9(sizeof(CLIENT_AUTH));
 FUNC_3(VAR_15->ClientAuth, VAR_11, sizeof(CLIENT_AUTH));


 if (VAR_15->ClientAuth->ClientX != ((void*)0))
 {
  VAR_15->ClientAuth->ClientX = FUNC_2(VAR_15->ClientAuth->ClientX);
 }
 if (VAR_15->ClientAuth->ClientK != ((void*)0))
 {
  VAR_15->ClientAuth->ClientK = FUNC_1(VAR_15->ClientAuth->ClientK);
 }

 if (FUNC_20(VAR_15->ClientOption->DeviceName, VAR_4) == 0)
 {

  VAR_15->LinkModeClient = 1;
  VAR_15->Link = (LINK *)VAR_15->PacketAdapter->Param;
 }

 if (FUNC_20(VAR_15->ClientOption->DeviceName, VAR_8) == 0)
 {

  VAR_15->SecureNATMode = 1;
 }

 if (FUNC_20(VAR_15->ClientOption->DeviceName, VAR_0) == 0)
 {

  VAR_15->BridgeMode = 1;
 }

 if (VAR_15->VirtualHost)
 {
  VH *VAR_17 = (VH *)VAR_15->PacketAdapter->Param;


  VAR_17->Session = VAR_15;
  FUNC_0(VAR_15->ref);
 }

 VAR_15->Account = VAR_13;

 if (VAR_15->ClientAuth->AuthType == VAR_1)
 {

  VAR_15->ClientOption->NumRetry = 0;
 }

 VAR_15->NicDownOnDisconnect = VAR_14;


 VAR_16 = FUNC_16(VAR_2, (void *)VAR_15);
 FUNC_23(VAR_16);
 FUNC_19(VAR_16);

 return VAR_15;
}
