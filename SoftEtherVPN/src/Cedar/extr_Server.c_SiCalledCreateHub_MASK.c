
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int o ;
typedef int name ;
typedef int log ;
typedef int VH_OPTION ;
typedef int UINT ;
struct TYPE_18__ {int Type; int FarmMember_MaxSessionClientBridgeApply; int Offline; int SecureNATOption; int HashedPassword; int SecurePassword; void* FarmMember_MaxSessionBridge; void* FarmMember_MaxSessionClient; scalar_t__ CreatedTime; scalar_t__ LastLoginTime; scalar_t__ LastCommTime; } ;
struct TYPE_17__ {int SavePacketLog; int PacketLogSwitchType; int SaveSecurityLog; int SecurityLogSwitchType; int PacketLogConfig; void* MaxSession; } ;
struct TYPE_16__ {int Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int PACK ;
typedef TYPE_2__ HUB_OPTION ;
typedef TYPE_2__ HUB_LOG ;
typedef TYPE_4__ HUB ;
typedef int ACCESS ;


 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int *) ;
 void* VAR_0 ;
 int FUNC_6 (int*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_7 (int ,char*,TYPE_2__*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*,int ,int ) ;
 void* FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *,char*,char*,int) ;
 int FUNC_13 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_14 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *,int) ;
 int FUNC_18 (TYPE_2__*,int) ;

void FUNC_19(SERVER *VAR_4, PACK *VAR_5)
{
 char VAR_6[VAR_1];
 UINT VAR_7;
 HUB_OPTION VAR_8;
 HUB_LOG VAR_9;
 bool VAR_10;
 UINT VAR_11;
 UINT VAR_12[VAR_2];
 bool VAR_13;
 UINT VAR_14;
 UINT VAR_15;
 HUB *VAR_16;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 FUNC_12(VAR_5, "HubName", VAR_6, sizeof(VAR_6));
 VAR_7 = FUNC_10(VAR_5, "HubType");
 FUNC_18(&VAR_8, sizeof(VAR_8));
 VAR_8.MaxSession = FUNC_10(VAR_5, "MaxSession");
 VAR_10 = FUNC_10(VAR_5, "SavePacketLog");
 VAR_11 = FUNC_10(VAR_5, "PacketLogSwitchType");
 for (VAR_15 = 0;VAR_15 < VAR_2;VAR_15++)
 {
  VAR_12[VAR_15] = FUNC_11(VAR_5, "PacketLogConfig", VAR_15);
 }
 VAR_13 = FUNC_10(VAR_5, "SaveSecurityLog");
 VAR_14 = FUNC_10(VAR_5, "SecurityLogSwitchType");

 FUNC_18(&VAR_9, sizeof(VAR_9));
 VAR_9.SavePacketLog = VAR_10;
 VAR_9.PacketLogSwitchType = VAR_11;
 FUNC_2(VAR_9.PacketLogConfig, VAR_12, sizeof(VAR_9.PacketLogConfig));
 VAR_9.SaveSecurityLog = VAR_13;
 VAR_9.SecurityLogSwitchType = VAR_14;

 VAR_16 = FUNC_7(VAR_4->Cedar, VAR_6, &VAR_8);
 VAR_16->LastCommTime = VAR_16->LastLoginTime = VAR_16->CreatedTime = 0;
 FUNC_14(VAR_16, &VAR_9);
 VAR_16->Type = VAR_7;
 VAR_16->FarmMember_MaxSessionClient = FUNC_10(VAR_5, "MaxSessionClient");
 VAR_16->FarmMember_MaxSessionBridge = FUNC_10(VAR_5, "MaxSessionBridge");
 VAR_16->FarmMember_MaxSessionClientBridgeApply = FUNC_8(VAR_5, "MaxSessionClientBridgeApply");

 if (VAR_16->FarmMember_MaxSessionClientBridgeApply == 0)
 {
  VAR_16->FarmMember_MaxSessionClient = VAR_0;
  VAR_16->FarmMember_MaxSessionBridge = VAR_0;
 }

 FUNC_9(VAR_5, "SecurePassword", VAR_16->SecurePassword, VAR_3);
 FUNC_9(VAR_5, "HashedPassword", VAR_16->HashedPassword, VAR_3);

 for (VAR_15 = 0;VAR_15 < FUNC_16(VAR_5);VAR_15++)
 {
  ACCESS *VAR_17 = FUNC_17(VAR_5, VAR_15);
  FUNC_0(VAR_16, VAR_17);
  FUNC_5(VAR_17);
 }

 if (FUNC_8(VAR_5, "EnableSecureNAT"))
 {
  VH_OPTION VAR_18;

  FUNC_6(&VAR_18, VAR_5);

  FUNC_2(VAR_16->SecureNATOption, &VAR_18, sizeof(VH_OPTION));
  FUNC_4(VAR_16, 1);

  FUNC_3("SiCalledCreateHub: SecureNAT Created.\n");
 }

 FUNC_1(VAR_4->Cedar, VAR_16);
 VAR_16->Offline = 1;
 FUNC_15(VAR_16);

 FUNC_13(VAR_16);
}
