
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {int DropBroadcastsInPrivacyFilterMode; int DropArpInPrivacyFilterMode; int NoDhcpPacketLogOutsideHub; int RemoveDefGwOnDhcpForLocalhost; scalar_t__ AccessListIncludeFileCacheLifetime; int ManageOnlyPrivateIP; int ManageOnlyLocalUnicastIPv6; int NoMacAddressLog; void* UseHubNameAsRadiusNasId; void* UseHubNameAsDhcpUserClassOption; void* NoPhysicalIPOnPacketLog; void* DetectDormantSessionInterval; void* SecureNAT_RandomizeAssignIp; void* DenyAllRadiusLoginWithNoVlanAssign; void* AssignVLanIdByRadiusAttribute; void* SuppressClientUpdateNotification; void* DisableCorrectIpOffloadChecksum; void* DisableCheckMacOnLocalBridge; void* DisableUserModeSecureNAT; void* DisableIpRawModeSecureNAT; void* DisableKernelModeSecureNAT; void* SecureNAT_MaxIcmpSessionsPerIp; void* SecureNAT_MaxDnsSessionsPerIp; void* SecureNAT_MaxUdpSessionsPerIp; void* SecureNAT_MaxTcpSynSentPerIp; void* SecureNAT_MaxTcpSessionsPerIp; void* ApplyIPv4AccessListOnArpPacket; void* DisableUdpFilterForLocalBridgeNic; void* DisableUdpAcceleration; void* DisableHttpParsing; void* DisableAdjustTcpMss; void* AdjustTcpMssValue; void* NoLookBPDUBridgeId; void* DoNotSaveHeavySecurityLogs; void* FloodingSendQueueBufferQuota; void* MaxLoggedPacketsPerMinute; void* BroadcastLimiterStrictMode; void* FixForDLinkBPDU; int VlanTypeId; void* NoManageVlanId; void* RequiredClientId; void* ClientMinimumRequiredBuild; void* BroadcastStormDetectionThreshold; void* NoSpinLockForPacketDelay; void* YieldAfterStorePacket; void* DisableIPParsing; void* NoIPv6DefaultRouterInRAWhenIPv6; void* NoIPv6PacketLog; void* NoIPv4PacketLog; void* FilterBPDU; void* FilterNonIP; void* FilterIPv6; void* FilterIPv4; void* FilterOSPF; void* FilterPPPoE; void* NoEnum; void* NoIpTable; void* NoIPv6AddrPolling; void* NoArpPolling; void* MaxSession; } ;
typedef TYPE_1__ HUB_OPTION ;
typedef int FOLDER ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*,char*,int) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 void* VAR_1 ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5(FOLDER *VAR_4, HUB_OPTION *VAR_5)
{
 char VAR_6[VAR_3];

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 VAR_5->MaxSession = FUNC_1(VAR_4, "MaxSession");
 VAR_5->NoArpPolling = FUNC_0(VAR_4, "NoArpPolling");
 VAR_5->NoIPv6AddrPolling = FUNC_0(VAR_4, "NoIPv6AddrPolling");
 VAR_5->NoIpTable = FUNC_0(VAR_4, "NoIpTable");
 VAR_5->NoEnum = FUNC_0(VAR_4, "NoEnum");
 VAR_5->FilterPPPoE = FUNC_0(VAR_4, "FilterPPPoE");
 VAR_5->FilterOSPF = FUNC_0(VAR_4, "FilterOSPF");
 VAR_5->FilterIPv4 = FUNC_0(VAR_4, "FilterIPv4");
 VAR_5->FilterIPv6 = FUNC_0(VAR_4, "FilterIPv6");
 VAR_5->FilterNonIP = FUNC_0(VAR_4, "FilterNonIP");
 VAR_5->FilterBPDU = FUNC_0(VAR_4, "FilterBPDU");
 VAR_5->NoIPv4PacketLog = FUNC_0(VAR_4, "NoIPv4PacketLog");
 VAR_5->NoIPv6PacketLog = FUNC_0(VAR_4, "NoIPv6PacketLog");
 VAR_5->NoIPv6DefaultRouterInRAWhenIPv6 = FUNC_0(VAR_4, "NoIPv6DefaultRouterInRAWhenIPv6");
 VAR_5->DisableIPParsing = FUNC_0(VAR_4, "DisableIPParsing");
 VAR_5->YieldAfterStorePacket = FUNC_0(VAR_4, "YieldAfterStorePacket");
 VAR_5->NoSpinLockForPacketDelay = FUNC_0(VAR_4, "NoSpinLockForPacketDelay");
 VAR_5->BroadcastStormDetectionThreshold = FUNC_1(VAR_4, "BroadcastStormDetectionThreshold");
 VAR_5->ClientMinimumRequiredBuild = FUNC_1(VAR_4, "ClientMinimumRequiredBuild");
 VAR_5->RequiredClientId = FUNC_1(VAR_4, "RequiredClientId");
 VAR_5->NoManageVlanId = FUNC_0(VAR_4, "NoManageVlanId");
 VAR_5->VlanTypeId = 0;
 if (FUNC_2(VAR_4, "VlanTypeId", VAR_6, sizeof(VAR_6)))
 {
  VAR_5->VlanTypeId = FUNC_4(VAR_6);
 }
 if (VAR_5->VlanTypeId == 0)
 {
  VAR_5->VlanTypeId = VAR_2;
 }
 VAR_5->FixForDLinkBPDU = FUNC_0(VAR_4, "FixForDLinkBPDU");
 VAR_5->BroadcastLimiterStrictMode = FUNC_0(VAR_4, "BroadcastLimiterStrictMode");
 VAR_5->MaxLoggedPacketsPerMinute = FUNC_1(VAR_4, "MaxLoggedPacketsPerMinute");
 if (FUNC_3(VAR_4, "FloodingSendQueueBufferQuota"))
 {
  VAR_5->FloodingSendQueueBufferQuota = FUNC_1(VAR_4, "FloodingSendQueueBufferQuota");
 }
 else
 {
  VAR_5->FloodingSendQueueBufferQuota = VAR_1;
 }
 VAR_5->DoNotSaveHeavySecurityLogs = FUNC_0(VAR_4, "DoNotSaveHeavySecurityLogs");

 if (FUNC_3(VAR_4, "DropBroadcastsInPrivacyFilterMode"))
 {
  VAR_5->DropBroadcastsInPrivacyFilterMode = FUNC_0(VAR_4, "DropBroadcastsInPrivacyFilterMode");
 }
 else
 {
  VAR_5->DropBroadcastsInPrivacyFilterMode = 1;
 }

 if (FUNC_3(VAR_4, "DropArpInPrivacyFilterMode"))
 {
  VAR_5->DropArpInPrivacyFilterMode = FUNC_0(VAR_4, "DropArpInPrivacyFilterMode");
 }
 else
 {
  VAR_5->DropArpInPrivacyFilterMode = 1;
 }

 VAR_5->NoLookBPDUBridgeId = FUNC_0(VAR_4, "NoLookBPDUBridgeId");
 VAR_5->AdjustTcpMssValue = FUNC_1(VAR_4, "AdjustTcpMssValue");
 VAR_5->DisableAdjustTcpMss = FUNC_0(VAR_4, "DisableAdjustTcpMss");
 if (FUNC_3(VAR_4, "NoDhcpPacketLogOutsideHub"))
 {
  VAR_5->NoDhcpPacketLogOutsideHub = FUNC_0(VAR_4, "NoDhcpPacketLogOutsideHub");
 }
 else
 {
  VAR_5->NoDhcpPacketLogOutsideHub = 1;
 }
 VAR_5->DisableHttpParsing = FUNC_0(VAR_4, "DisableHttpParsing");
 VAR_5->DisableUdpAcceleration = FUNC_0(VAR_4, "DisableUdpAcceleration");
 VAR_5->DisableUdpFilterForLocalBridgeNic = FUNC_0(VAR_4, "DisableUdpFilterForLocalBridgeNic");
 VAR_5->ApplyIPv4AccessListOnArpPacket = FUNC_0(VAR_4, "ApplyIPv4AccessListOnArpPacket");
 if (FUNC_3(VAR_4, "RemoveDefGwOnDhcpForLocalhost"))
 {
  VAR_5->RemoveDefGwOnDhcpForLocalhost = FUNC_0(VAR_4, "RemoveDefGwOnDhcpForLocalhost");
 }
 else
 {
  VAR_5->RemoveDefGwOnDhcpForLocalhost = 1;
 }
 VAR_5->SecureNAT_MaxTcpSessionsPerIp = FUNC_1(VAR_4, "SecureNAT_MaxTcpSessionsPerIp");
 VAR_5->SecureNAT_MaxTcpSynSentPerIp = FUNC_1(VAR_4, "SecureNAT_MaxTcpSynSentPerIp");
 VAR_5->SecureNAT_MaxUdpSessionsPerIp = FUNC_1(VAR_4, "SecureNAT_MaxUdpSessionsPerIp");
 VAR_5->SecureNAT_MaxDnsSessionsPerIp = FUNC_1(VAR_4, "SecureNAT_MaxDnsSessionsPerIp");
 VAR_5->SecureNAT_MaxIcmpSessionsPerIp = FUNC_1(VAR_4, "SecureNAT_MaxIcmpSessionsPerIp");
 VAR_5->AccessListIncludeFileCacheLifetime = FUNC_1(VAR_4, "AccessListIncludeFileCacheLifetime");

 if (VAR_5->AccessListIncludeFileCacheLifetime == 0)
 {
  VAR_5->AccessListIncludeFileCacheLifetime = VAR_0;
 }

 VAR_5->DisableKernelModeSecureNAT = FUNC_0(VAR_4, "DisableKernelModeSecureNAT");
 VAR_5->DisableIpRawModeSecureNAT = FUNC_0(VAR_4, "DisableIpRawModeSecureNAT");
 VAR_5->DisableUserModeSecureNAT = FUNC_0(VAR_4, "DisableUserModeSecureNAT");
 VAR_5->DisableCheckMacOnLocalBridge = FUNC_0(VAR_4, "DisableCheckMacOnLocalBridge");
 VAR_5->DisableCorrectIpOffloadChecksum = FUNC_0(VAR_4, "DisableCorrectIpOffloadChecksum");
 VAR_5->SuppressClientUpdateNotification = FUNC_0(VAR_4, "SuppressClientUpdateNotification");
 VAR_5->AssignVLanIdByRadiusAttribute = FUNC_0(VAR_4, "AssignVLanIdByRadiusAttribute");
 VAR_5->DenyAllRadiusLoginWithNoVlanAssign = FUNC_0(VAR_4, "DenyAllRadiusLoginWithNoVlanAssign");
 VAR_5->SecureNAT_RandomizeAssignIp = FUNC_0(VAR_4, "SecureNAT_RandomizeAssignIp");
 VAR_5->DetectDormantSessionInterval = FUNC_1(VAR_4, "DetectDormantSessionInterval");
 VAR_5->NoPhysicalIPOnPacketLog = FUNC_0(VAR_4, "NoPhysicalIPOnPacketLog");
 VAR_5->UseHubNameAsDhcpUserClassOption = FUNC_0(VAR_4, "UseHubNameAsDhcpUserClassOption");
 VAR_5->UseHubNameAsRadiusNasId = FUNC_0(VAR_4, "UseHubNameAsRadiusNasId");


 if (FUNC_3(VAR_4, "ManageOnlyPrivateIP"))
 {
  VAR_5->ManageOnlyPrivateIP = FUNC_0(VAR_4, "ManageOnlyPrivateIP");
 }
 else
 {
  VAR_5->ManageOnlyPrivateIP = 1;
 }
 if (FUNC_3(VAR_4, "ManageOnlyLocalUnicastIPv6"))
 {
  VAR_5->ManageOnlyLocalUnicastIPv6 = FUNC_0(VAR_4, "ManageOnlyLocalUnicastIPv6");
 }
 else
 {
  VAR_5->ManageOnlyLocalUnicastIPv6 = 1;
 }
 if (FUNC_3(VAR_4, "NoMacAddressLog"))
 {
  VAR_5->NoMacAddressLog = FUNC_0(VAR_4, "NoMacAddressLog");
 }
 else
 {
  VAR_5->NoMacAddressLog = 1;
 }
}
