
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ SavePacketLog; scalar_t__ PacketLogSwitchType; scalar_t__ SaveSecurityLog; scalar_t__ SecurityLogSwitchType; int * PacketLogConfig; } ;
struct TYPE_10__ {scalar_t__ Type; int EnableSecureNAT; int SecureNATOption; int AccessList; TYPE_3__* Option; int SecurePassword; int HashedPassword; TYPE_1__ LogSetting; int Name; TYPE_2__* Cedar; } ;
struct TYPE_9__ {scalar_t__ MaxSession; int NoArpPolling; int NoIPv6AddrPolling; int NoIpTable; int NoEnum; int FilterPPPoE; int YieldAfterStorePacket; int NoSpinLockForPacketDelay; scalar_t__ BroadcastStormDetectionThreshold; scalar_t__ MaxLoggedPacketsPerMinute; scalar_t__ FloodingSendQueueBufferQuota; int DoNotSaveHeavySecurityLogs; int DropBroadcastsInPrivacyFilterMode; int DropArpInPrivacyFilterMode; int SuppressClientUpdateNotification; int AssignVLanIdByRadiusAttribute; int DenyAllRadiusLoginWithNoVlanAssign; scalar_t__ ClientMinimumRequiredBuild; int SecureNAT_RandomizeAssignIp; int NoPhysicalIPOnPacketLog; scalar_t__ DetectDormantSessionInterval; int FixForDLinkBPDU; int BroadcastLimiterStrictMode; int NoLookBPDUBridgeId; int NoManageVlanId; scalar_t__ VlanTypeId; int FilterOSPF; int FilterIPv4; int FilterIPv6; int FilterNonIP; int NoIPv4PacketLog; int NoIPv6PacketLog; int FilterBPDU; int NoIPv6DefaultRouterInRAWhenIPv6; int NoMacAddressLog; int ManageOnlyPrivateIP; int ManageOnlyLocalUnicastIPv6; int DisableIPParsing; scalar_t__ AdjustTcpMssValue; int DisableAdjustTcpMss; int NoDhcpPacketLogOutsideHub; int DisableHttpParsing; int DisableUdpAcceleration; int DisableUdpFilterForLocalBridgeNic; int ApplyIPv4AccessListOnArpPacket; int RemoveDefGwOnDhcpForLocalhost; scalar_t__ SecureNAT_MaxTcpSessionsPerIp; scalar_t__ SecureNAT_MaxTcpSynSentPerIp; scalar_t__ SecureNAT_MaxUdpSessionsPerIp; scalar_t__ SecureNAT_MaxDnsSessionsPerIp; scalar_t__ SecureNAT_MaxIcmpSessionsPerIp; scalar_t__ AccessListIncludeFileCacheLifetime; int DisableKernelModeSecureNAT; int DisableIpRawModeSecureNAT; int DisableUserModeSecureNAT; int DisableCheckMacOnLocalBridge; int DisableCorrectIpOffloadChecksum; int UseHubNameAsDhcpUserClassOption; int UseHubNameAsRadiusNasId; } ;
struct TYPE_8__ {int * Server; } ;
typedef int SERVER ;
typedef int PACK ;
typedef TYPE_4__ HUB ;


 scalar_t__ FUNC_0 (TYPE_4__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int *,char*,scalar_t__) ;
 int FUNC_6 (int *,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,char*,int ) ;
 int VAR_2 ;
 int FUNC_8 (int *,int ) ;

void FUNC_9(PACK *VAR_3, HUB *VAR_4)
{
 UINT VAR_5;
 UINT VAR_6;
 SERVER *VAR_7;



 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }


 VAR_7 = VAR_4->Cedar->Server;
 if (VAR_7 != ((void*)0))
 {
 }

 FUNC_7(VAR_3, "HubName", VAR_4->Name);
 FUNC_5(VAR_3, "HubType", VAR_4->Type);

 VAR_6 = VAR_4->Option->MaxSession;

 if (FUNC_0(VAR_4, "max_sessions") != 0)
 {
  if (VAR_6 == 0)
  {
   VAR_6 = FUNC_0(VAR_4, "max_sessions");
  }
  else
  {
   UINT VAR_8 = FUNC_0(VAR_4, "max_sessions");
   VAR_6 = FUNC_1(VAR_6, VAR_8);
  }
 }

 FUNC_5(VAR_3, "MaxSession", VAR_6);

 if (FUNC_0(VAR_4, "max_sessions_client_bridge_apply") != 0
  )
 {
  FUNC_5(VAR_3, "MaxSessionClient", FUNC_0(VAR_4, "max_sessions_client"));
  FUNC_5(VAR_3, "MaxSessionBridge", FUNC_0(VAR_4, "max_sessions_bridge"));
  FUNC_3(VAR_3, "MaxSessionClientBridgeApply", 1);
 }
 else
 {
  FUNC_5(VAR_3, "MaxSessionClient", VAR_0);
  FUNC_5(VAR_3, "MaxSessionBridge", VAR_0);
 }

 FUNC_3(VAR_3, "NoArpPolling", VAR_4->Option->NoArpPolling);
 FUNC_3(VAR_3, "NoIPv6AddrPolling", VAR_4->Option->NoIPv6AddrPolling);
 FUNC_3(VAR_3, "NoIpTable", VAR_4->Option->NoIpTable);
 FUNC_3(VAR_3, "NoEnum", VAR_4->Option->NoEnum);
 FUNC_3(VAR_3, "FilterPPPoE", VAR_4->Option->FilterPPPoE);
 FUNC_3(VAR_3, "YieldAfterStorePacket", VAR_4->Option->YieldAfterStorePacket);
 FUNC_3(VAR_3, "NoSpinLockForPacketDelay", VAR_4->Option->NoSpinLockForPacketDelay);
 FUNC_5(VAR_3, "BroadcastStormDetectionThreshold", VAR_4->Option->BroadcastStormDetectionThreshold);
 FUNC_5(VAR_3, "MaxLoggedPacketsPerMinute", VAR_4->Option->MaxLoggedPacketsPerMinute);
 FUNC_5(VAR_3, "FloodingSendQueueBufferQuota", VAR_4->Option->FloodingSendQueueBufferQuota);
 FUNC_3(VAR_3, "DoNotSaveHeavySecurityLogs", VAR_4->Option->DoNotSaveHeavySecurityLogs);
 FUNC_3(VAR_3, "DropBroadcastsInPrivacyFilterMode", VAR_4->Option->DropBroadcastsInPrivacyFilterMode);
 FUNC_3(VAR_3, "DropArpInPrivacyFilterMode", VAR_4->Option->DropArpInPrivacyFilterMode);
 FUNC_3(VAR_3, "SuppressClientUpdateNotification", VAR_4->Option->SuppressClientUpdateNotification);
 FUNC_3(VAR_3, "AssignVLanIdByRadiusAttribute", VAR_4->Option->AssignVLanIdByRadiusAttribute);
 FUNC_3(VAR_3, "DenyAllRadiusLoginWithNoVlanAssign", VAR_4->Option->DenyAllRadiusLoginWithNoVlanAssign);
 FUNC_5(VAR_3, "ClientMinimumRequiredBuild", VAR_4->Option->ClientMinimumRequiredBuild);
 FUNC_3(VAR_3, "SecureNAT_RandomizeAssignIp", VAR_4->Option->SecureNAT_RandomizeAssignIp);
 FUNC_3(VAR_3, "NoPhysicalIPOnPacketLog", VAR_4->Option->NoPhysicalIPOnPacketLog);
 FUNC_5(VAR_3, "DetectDormantSessionInterval", VAR_4->Option->DetectDormantSessionInterval);
 FUNC_3(VAR_3, "FixForDLinkBPDU", VAR_4->Option->FixForDLinkBPDU);
 FUNC_3(VAR_3, "BroadcastLimiterStrictMode", VAR_4->Option->BroadcastLimiterStrictMode);
 FUNC_3(VAR_3, "NoLookBPDUBridgeId", VAR_4->Option->NoLookBPDUBridgeId);
 FUNC_3(VAR_3, "NoManageVlanId", VAR_4->Option->NoManageVlanId);
 FUNC_5(VAR_3, "VlanTypeId", VAR_4->Option->VlanTypeId);
 FUNC_3(VAR_3, "FilterOSPF", VAR_4->Option->FilterOSPF);
 FUNC_3(VAR_3, "FilterIPv4", VAR_4->Option->FilterIPv4);
 FUNC_3(VAR_3, "FilterIPv6", VAR_4->Option->FilterIPv6);
 FUNC_3(VAR_3, "FilterNonIP", VAR_4->Option->FilterNonIP);
 FUNC_3(VAR_3, "NoIPv4PacketLog", VAR_4->Option->NoIPv4PacketLog);
 FUNC_3(VAR_3, "NoIPv6PacketLog", VAR_4->Option->NoIPv6PacketLog);
 FUNC_3(VAR_3, "FilterBPDU", VAR_4->Option->FilterBPDU);
 FUNC_3(VAR_3, "NoIPv6DefaultRouterInRAWhenIPv6", VAR_4->Option->NoIPv6DefaultRouterInRAWhenIPv6);
 FUNC_3(VAR_3, "NoMacAddressLog", VAR_4->Option->NoMacAddressLog);
 FUNC_3(VAR_3, "ManageOnlyPrivateIP", VAR_4->Option->ManageOnlyPrivateIP);
 FUNC_3(VAR_3, "ManageOnlyLocalUnicastIPv6", VAR_4->Option->ManageOnlyLocalUnicastIPv6);
 FUNC_3(VAR_3, "DisableIPParsing", VAR_4->Option->DisableIPParsing);
 FUNC_5(VAR_3, "AdjustTcpMssValue", VAR_4->Option->AdjustTcpMssValue);
 FUNC_3(VAR_3, "DisableAdjustTcpMss", VAR_4->Option->DisableAdjustTcpMss);
 FUNC_3(VAR_3, "NoDhcpPacketLogOutsideHub", VAR_4->Option->NoDhcpPacketLogOutsideHub);
 FUNC_3(VAR_3, "DisableHttpParsing", VAR_4->Option->DisableHttpParsing);
 FUNC_3(VAR_3, "DisableUdpAcceleration", VAR_4->Option->DisableUdpAcceleration);
 FUNC_3(VAR_3, "DisableUdpFilterForLocalBridgeNic", VAR_4->Option->DisableUdpFilterForLocalBridgeNic);
 FUNC_3(VAR_3, "ApplyIPv4AccessListOnArpPacket", VAR_4->Option->ApplyIPv4AccessListOnArpPacket);
 FUNC_3(VAR_3, "RemoveDefGwOnDhcpForLocalhost", VAR_4->Option->RemoveDefGwOnDhcpForLocalhost);

 FUNC_5(VAR_3, "SecureNAT_MaxTcpSessionsPerIp", VAR_4->Option->SecureNAT_MaxTcpSessionsPerIp);
 FUNC_5(VAR_3, "SecureNAT_MaxTcpSynSentPerIp", VAR_4->Option->SecureNAT_MaxTcpSynSentPerIp);
 FUNC_5(VAR_3, "SecureNAT_MaxUdpSessionsPerIp", VAR_4->Option->SecureNAT_MaxUdpSessionsPerIp);
 FUNC_5(VAR_3, "SecureNAT_MaxDnsSessionsPerIp", VAR_4->Option->SecureNAT_MaxDnsSessionsPerIp);
 FUNC_5(VAR_3, "SecureNAT_MaxIcmpSessionsPerIp", VAR_4->Option->SecureNAT_MaxIcmpSessionsPerIp);
 FUNC_5(VAR_3, "AccessListIncludeFileCacheLifetime", VAR_4->Option->AccessListIncludeFileCacheLifetime);
 FUNC_3(VAR_3, "DisableKernelModeSecureNAT", VAR_4->Option->DisableKernelModeSecureNAT);
 FUNC_3(VAR_3, "DisableIpRawModeSecureNAT", VAR_4->Option->DisableIpRawModeSecureNAT);
 FUNC_3(VAR_3, "DisableUserModeSecureNAT", VAR_4->Option->DisableUserModeSecureNAT);
 FUNC_3(VAR_3, "DisableCheckMacOnLocalBridge", VAR_4->Option->DisableCheckMacOnLocalBridge);
 FUNC_3(VAR_3, "DisableCorrectIpOffloadChecksum", VAR_4->Option->DisableCorrectIpOffloadChecksum);

 FUNC_5(VAR_3, "SavePacketLog", VAR_4->LogSetting.SavePacketLog);
 FUNC_5(VAR_3, "PacketLogSwitchType", VAR_4->LogSetting.PacketLogSwitchType);
 for (VAR_5 = 0;VAR_5 < VAR_1;VAR_5++)
 {
  FUNC_6(VAR_3, "PacketLogConfig", VAR_4->LogSetting.PacketLogConfig[VAR_5], VAR_5, VAR_1);
 }
 FUNC_5(VAR_3, "SaveSecurityLog", VAR_4->LogSetting.SaveSecurityLog);
 FUNC_5(VAR_3, "SecurityLogSwitchType", VAR_4->LogSetting.SecurityLogSwitchType);
 FUNC_4(VAR_3, "HashedPassword", VAR_4->HashedPassword, VAR_2);
 FUNC_4(VAR_3, "SecurePassword", VAR_4->SecurePassword, VAR_2);
 FUNC_3(VAR_3, "UseHubNameAsDhcpUserClassOption", VAR_4->Option->UseHubNameAsDhcpUserClassOption);
 FUNC_3(VAR_3, "UseHubNameAsRadiusNasId", VAR_4->Option->UseHubNameAsRadiusNasId);

 FUNC_8(VAR_3, VAR_4->AccessList);

 if (VAR_4->EnableSecureNAT)
 {
  FUNC_3(VAR_3, "EnableSecureNAT", VAR_4->EnableSecureNAT);
  FUNC_2(VAR_3, VAR_4->SecureNATOption);
 }
}
