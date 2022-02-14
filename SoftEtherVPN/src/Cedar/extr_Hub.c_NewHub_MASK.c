
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int tmp ;
typedef int safe_hub_name ;
typedef int packet_logger_name ;
typedef int VH_OPTION ;
typedef int UCHAR ;
struct TYPE_17__ {scalar_t__ Bridge; TYPE_2__* Server; int ref; } ;
struct TYPE_14__ {int SavePacketLog; int SaveSecurityLog; void* SecurityLogSwitchType; void* PacketLogSwitchType; int * PacketLogConfig; } ;
struct TYPE_16__ {int EnableSecureNAT; int FarmMember; int WatchDogStarted; int Name; TYPE_4__* Cedar; int HubMacAddr; TYPE_11__* Option; TYPE_1__ LogSetting; void* SecurityLogger; void* PacketLogger; int UserList; void* TicketList; int RadiusServerPort; void* RadiusOptionLock; int HubIpV6; int HubIp; void* SecureNATOption; int * SecureNAT; int HubSignature; void* OldTraffic; void* Traffic; void* LinkList; void* MonitorList; void* IpTable; int MacHashTable; void* NumSessionsBridge; void* NumSessionsClient; void* NumSessions; void* SessionCounter; void* SessionList; int HubDb; void* TrafficLock; scalar_t__ NumLogin; void* LastLoginTime; void* LastCommTime; void* AdminOptionList; int Type; int ref; void* lock_online; void* lock; int SecurePassword; int HashedPassword; } ;
struct TYPE_15__ {scalar_t__ ServerType; } ;
struct TYPE_13__ {scalar_t__ VlanTypeId; int DropBroadcastsInPrivacyFilterMode; int DropArpInPrivacyFilterMode; int NoArpPolling; int NoIpTable; } ;
typedef int IP ;
typedef int HUB_OPTION ;
typedef TYPE_3__ HUB ;
typedef TYPE_4__ CEDAR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (TYPE_11__*,int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int ,int ,char*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (TYPE_3__*) ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (char*,int,int ) ;
 int FUNC_14 (int ) ;
 void* FUNC_15 () ;
 int FUNC_16 (int ,int ,int,int) ;
 int FUNC_17 () ;
 void* FUNC_18 (int *) ;
 void* FUNC_19 () ;
 void* FUNC_20 (char*,int ,void*) ;
 int FUNC_21 () ;
 void* FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (void*,int) ;
 int FUNC_25 (int *,void*) ;
 size_t VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int FUNC_26 (int ,int) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_27 (TYPE_4__*,char*,int ,...) ;
 int FUNC_28 (TYPE_3__*) ;
 int FUNC_29 (int ,char*,int ) ;
 int FUNC_30 (TYPE_3__*) ;
 void* FUNC_31 () ;
 void* FUNC_32 (int) ;

HUB *FUNC_33(CEDAR *VAR_23, char *VAR_24, HUB_OPTION *VAR_25)
{
 HUB *VAR_26;
 char VAR_27[VAR_15];
 char VAR_28[VAR_15];
 char VAR_29[VAR_14 + 1];
 UCHAR VAR_30[VAR_22];
 IP VAR_31;

 if (VAR_23 == ((void*)0) || VAR_25 == ((void*)0) || VAR_24 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_26 = FUNC_32(sizeof(HUB));
 FUNC_29(VAR_26->HashedPassword, "", 0);
 FUNC_10(VAR_26->SecurePassword, VAR_0, "");
 VAR_26->lock = FUNC_19();
 VAR_26->lock_online = FUNC_19();
 VAR_26->ref = FUNC_21();
 VAR_26->Cedar = VAR_23;
 FUNC_1(VAR_26->Cedar->ref);
 VAR_26->Type = VAR_11;

 FUNC_2(VAR_29, sizeof(VAR_29), VAR_24);
 VAR_26->Name = FUNC_4(VAR_29);


 VAR_26->AdminOptionList = FUNC_18(VAR_1);
 FUNC_0(VAR_26, 1);

 VAR_26->LastCommTime = FUNC_31();
 VAR_26->LastLoginTime = FUNC_31();
 VAR_26->NumLogin = 0;

 VAR_26->TrafficLock = FUNC_19();

 VAR_26->HubDb = FUNC_17();

 VAR_26->SessionList = FUNC_18(((void*)0));
 VAR_26->SessionCounter = FUNC_15();
 VAR_26->NumSessions = FUNC_15();
 VAR_26->NumSessionsClient = FUNC_15();
 VAR_26->NumSessionsBridge = FUNC_15();
 VAR_26->MacHashTable = FUNC_16(VAR_4, VAR_3, 8, 0);
 VAR_26->IpTable = FUNC_18(VAR_2);
 VAR_26->MonitorList = FUNC_18(((void*)0));
 VAR_26->LinkList = FUNC_18(((void*)0));

 VAR_26->Traffic = FUNC_22();
 VAR_26->OldTraffic = FUNC_22();

 VAR_26->Option = FUNC_32(sizeof(HUB_OPTION));
 FUNC_3(VAR_26->Option, VAR_25, sizeof(HUB_OPTION));

 if (VAR_26->Option->VlanTypeId == 0)
 {
  VAR_26->Option->VlanTypeId = VAR_13;
 }

 VAR_26->Option->DropBroadcastsInPrivacyFilterMode = 1;
 VAR_26->Option->DropArpInPrivacyFilterMode = 1;

 FUNC_26(VAR_26->HubSignature, sizeof(VAR_26->HubSignature));


 VAR_26->EnableSecureNAT = 0;
 VAR_26->SecureNAT = ((void*)0);
 VAR_26->SecureNATOption = FUNC_32(sizeof(VH_OPTION));
 FUNC_25(((void*)0), VAR_26->SecureNATOption);

 if (VAR_26->Cedar != ((void*)0) && VAR_26->Cedar->Server != ((void*)0) && VAR_26->Cedar->Server->ServerType == VAR_20)
 {
  FUNC_24(VAR_26->SecureNATOption, 1);
 }


 FUNC_9(VAR_30);
 FUNC_7(VAR_26->HubMacAddr, VAR_26->Name);
 FUNC_6(&VAR_26->HubIp, VAR_26->Name);


 FUNC_8(&VAR_31, VAR_26->HubMacAddr);
 FUNC_11(&VAR_26->HubIpV6, &VAR_31);

 VAR_26->RadiusOptionLock = FUNC_19();
 VAR_26->RadiusServerPort = VAR_19;

 VAR_26->TicketList = FUNC_18(((void*)0));

 FUNC_12(VAR_26);


 VAR_26->UserList = FUNC_23();


 VAR_26->LogSetting.SavePacketLog = VAR_26->LogSetting.SaveSecurityLog = 1;
 VAR_26->LogSetting.PacketLogConfig[VAR_18] =
  VAR_26->LogSetting.PacketLogConfig[VAR_16] = VAR_17;
 VAR_26->LogSetting.SecurityLogSwitchType = VAR_12;
 VAR_26->LogSetting.PacketLogSwitchType = VAR_12;

 FUNC_14(VAR_8);
 FUNC_14(VAR_5);


 FUNC_5(VAR_27, sizeof(VAR_27), VAR_6, VAR_26->Name);
 VAR_26->PacketLogger = FUNC_20(VAR_27, VAR_7, VAR_26->LogSetting.PacketLogSwitchType);


 FUNC_5(VAR_28, sizeof(VAR_28), VAR_9, VAR_26->Name);
 VAR_26->SecurityLogger = FUNC_20(VAR_28, VAR_10, VAR_26->LogSetting.SecurityLogSwitchType);

 if (VAR_26->Cedar->Server != ((void*)0) && VAR_26->Cedar->Server->ServerType == VAR_21)
 {
  VAR_26->FarmMember = 1;
 }


 FUNC_28(VAR_26);

 if (VAR_26->Cedar->Bridge)
 {
  VAR_26->Option->NoArpPolling = 1;
 }

 if (VAR_26->Option->NoArpPolling == 0 && VAR_26->Option->NoIpTable == 0)
 {
  FUNC_30(VAR_26);
  VAR_26->WatchDogStarted = 1;
 }

 FUNC_27(VAR_26->Cedar, "LS_HUB_START", VAR_26->Name);

 FUNC_13(VAR_28, sizeof(VAR_28), VAR_26->HubMacAddr);
 FUNC_27(VAR_26->Cedar, "LS_HUB_MAC", VAR_26->Name, VAR_28);

 return VAR_26;
}
