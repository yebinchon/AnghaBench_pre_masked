
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int UseHubNameAsRadiusNasId; int UseHubNameAsDhcpUserClassOption; int NoPhysicalIPOnPacketLog; int DetectDormantSessionInterval; int SecureNAT_RandomizeAssignIp; int DenyAllRadiusLoginWithNoVlanAssign; int AssignVLanIdByRadiusAttribute; int FloodingSendQueueBufferQuota; int SuppressClientUpdateNotification; int DropArpInPrivacyFilterMode; int DropBroadcastsInPrivacyFilterMode; int DoNotSaveHeavySecurityLogs; int MaxLoggedPacketsPerMinute; int BroadcastLimiterStrictMode; int DisableCorrectIpOffloadChecksum; int DisableCheckMacOnLocalBridge; int DisableUserModeSecureNAT; int DisableIpRawModeSecureNAT; int DisableKernelModeSecureNAT; int AccessListIncludeFileCacheLifetime; int SecureNAT_MaxIcmpSessionsPerIp; int SecureNAT_MaxDnsSessionsPerIp; int SecureNAT_MaxUdpSessionsPerIp; int SecureNAT_MaxTcpSynSentPerIp; int SecureNAT_MaxTcpSessionsPerIp; int RemoveDefGwOnDhcpForLocalhost; int ApplyIPv4AccessListOnArpPacket; int DisableUdpFilterForLocalBridgeNic; int DisableUdpAcceleration; int DisableHttpParsing; int NoDhcpPacketLogOutsideHub; int DisableAdjustTcpMss; int AdjustTcpMssValue; int RequiredClientId; int FixForDLinkBPDU; int VlanTypeId; int NoManageVlanId; int NoLookBPDUBridgeId; int NoIPv6DefaultRouterInRAWhenIPv6; int FilterBPDU; int NoIPv6PacketLog; int NoIPv4PacketLog; int FilterNonIP; int FilterIPv6; int FilterIPv4; int FilterOSPF; int FilterPPPoE; int ClientMinimumRequiredBuild; int BroadcastStormDetectionThreshold; int NoSpinLockForPacketDelay; int YieldAfterStorePacket; int DisableIPParsing; int ManageOnlyLocalUnicastIPv6; int ManageOnlyPrivateIP; int NoMacAddressLog; int NoIpTable; int NoIPv6AddrPolling; int NoArpPolling; } ;
typedef int RPC_ADMIN_OPTION ;
typedef TYPE_1__ HUB_OPTION ;


 int FUNC_0 (int *,char*,int *) ;

void FUNC_1(HUB_OPTION *VAR_0, RPC_ADMIN_OPTION *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1, "NoAddressPollingIPv4", &VAR_0->NoArpPolling);
 FUNC_0(VAR_1, "NoAddressPollingIPv6", &VAR_0->NoIPv6AddrPolling);
 FUNC_0(VAR_1, "NoIpTable", &VAR_0->NoIpTable);
 FUNC_0(VAR_1, "NoMacAddressLog", &VAR_0->NoMacAddressLog);
 FUNC_0(VAR_1, "ManageOnlyPrivateIP", &VAR_0->ManageOnlyPrivateIP);
 FUNC_0(VAR_1, "ManageOnlyLocalUnicastIPv6", &VAR_0->ManageOnlyLocalUnicastIPv6);
 FUNC_0(VAR_1, "DisableIPParsing", &VAR_0->DisableIPParsing);
 FUNC_0(VAR_1, "YieldAfterStorePacket", &VAR_0->YieldAfterStorePacket);
 FUNC_0(VAR_1, "NoSpinLockForPacketDelay", &VAR_0->NoSpinLockForPacketDelay);
 FUNC_0(VAR_1, "BroadcastStormDetectionThreshold", &VAR_0->BroadcastStormDetectionThreshold);
 FUNC_0(VAR_1, "ClientMinimumRequiredBuild", &VAR_0->ClientMinimumRequiredBuild);
 FUNC_0(VAR_1, "FilterPPPoE", &VAR_0->FilterPPPoE);
 FUNC_0(VAR_1, "FilterOSPF", &VAR_0->FilterOSPF);
 FUNC_0(VAR_1, "FilterIPv4", &VAR_0->FilterIPv4);
 FUNC_0(VAR_1, "FilterIPv6", &VAR_0->FilterIPv6);
 FUNC_0(VAR_1, "FilterNonIP", &VAR_0->FilterNonIP);
 FUNC_0(VAR_1, "NoIPv4PacketLog", &VAR_0->NoIPv4PacketLog);
 FUNC_0(VAR_1, "NoIPv6PacketLog", &VAR_0->NoIPv6PacketLog);
 FUNC_0(VAR_1, "FilterBPDU", &VAR_0->FilterBPDU);
 FUNC_0(VAR_1, "NoIPv6DefaultRouterInRAWhenIPv6", &VAR_0->NoIPv6DefaultRouterInRAWhenIPv6);
 FUNC_0(VAR_1, "NoLookBPDUBridgeId", &VAR_0->NoLookBPDUBridgeId);
 FUNC_0(VAR_1, "NoManageVlanId", &VAR_0->NoManageVlanId);
 FUNC_0(VAR_1, "VlanTypeId", &VAR_0->VlanTypeId);
 FUNC_0(VAR_1, "FixForDLinkBPDU", &VAR_0->FixForDLinkBPDU);
 FUNC_0(VAR_1, "RequiredClientId", &VAR_0->RequiredClientId);
 FUNC_0(VAR_1, "AdjustTcpMssValue", &VAR_0->AdjustTcpMssValue);
 FUNC_0(VAR_1, "DisableAdjustTcpMss", &VAR_0->DisableAdjustTcpMss);
 FUNC_0(VAR_1, "NoDhcpPacketLogOutsideHub", &VAR_0->NoDhcpPacketLogOutsideHub);
 FUNC_0(VAR_1, "DisableHttpParsing", &VAR_0->DisableHttpParsing);
 FUNC_0(VAR_1, "DisableUdpAcceleration", &VAR_0->DisableUdpAcceleration);
 FUNC_0(VAR_1, "DisableUdpFilterForLocalBridgeNic", &VAR_0->DisableUdpFilterForLocalBridgeNic);
 FUNC_0(VAR_1, "ApplyIPv4AccessListOnArpPacket", &VAR_0->ApplyIPv4AccessListOnArpPacket);
 FUNC_0(VAR_1, "RemoveDefGwOnDhcpForLocalhost", &VAR_0->RemoveDefGwOnDhcpForLocalhost);
 FUNC_0(VAR_1, "SecureNAT_MaxTcpSessionsPerIp", &VAR_0->SecureNAT_MaxTcpSessionsPerIp);
 FUNC_0(VAR_1, "SecureNAT_MaxTcpSynSentPerIp", &VAR_0->SecureNAT_MaxTcpSynSentPerIp);
 FUNC_0(VAR_1, "SecureNAT_MaxUdpSessionsPerIp", &VAR_0->SecureNAT_MaxUdpSessionsPerIp);
 FUNC_0(VAR_1, "SecureNAT_MaxDnsSessionsPerIp", &VAR_0->SecureNAT_MaxDnsSessionsPerIp);
 FUNC_0(VAR_1, "SecureNAT_MaxIcmpSessionsPerIp", &VAR_0->SecureNAT_MaxIcmpSessionsPerIp);
 FUNC_0(VAR_1, "AccessListIncludeFileCacheLifetime", &VAR_0->AccessListIncludeFileCacheLifetime);
 FUNC_0(VAR_1, "DisableKernelModeSecureNAT", &VAR_0->DisableKernelModeSecureNAT);
 FUNC_0(VAR_1, "DisableIpRawModeSecureNAT", &VAR_0->DisableIpRawModeSecureNAT);
 FUNC_0(VAR_1, "DisableUserModeSecureNAT", &VAR_0->DisableUserModeSecureNAT);
 FUNC_0(VAR_1, "DisableCheckMacOnLocalBridge", &VAR_0->DisableCheckMacOnLocalBridge);
 FUNC_0(VAR_1, "DisableCorrectIpOffloadChecksum", &VAR_0->DisableCorrectIpOffloadChecksum);
 FUNC_0(VAR_1, "BroadcastLimiterStrictMode", &VAR_0->BroadcastLimiterStrictMode);
 FUNC_0(VAR_1, "MaxLoggedPacketsPerMinute", &VAR_0->MaxLoggedPacketsPerMinute);
 FUNC_0(VAR_1, "DoNotSaveHeavySecurityLogs", &VAR_0->DoNotSaveHeavySecurityLogs);
 FUNC_0(VAR_1, "DropBroadcastsInPrivacyFilterMode", &VAR_0->DropBroadcastsInPrivacyFilterMode);
 FUNC_0(VAR_1, "DropArpInPrivacyFilterMode", &VAR_0->DropArpInPrivacyFilterMode);
 FUNC_0(VAR_1, "SuppressClientUpdateNotification", &VAR_0->SuppressClientUpdateNotification);
 FUNC_0(VAR_1, "FloodingSendQueueBufferQuota", &VAR_0->FloodingSendQueueBufferQuota);
 FUNC_0(VAR_1, "AssignVLanIdByRadiusAttribute", &VAR_0->AssignVLanIdByRadiusAttribute);
 FUNC_0(VAR_1, "DenyAllRadiusLoginWithNoVlanAssign", &VAR_0->DenyAllRadiusLoginWithNoVlanAssign);
 FUNC_0(VAR_1, "SecureNAT_RandomizeAssignIp", &VAR_0->SecureNAT_RandomizeAssignIp);
 FUNC_0(VAR_1, "DetectDormantSessionInterval", &VAR_0->DetectDormantSessionInterval);
 FUNC_0(VAR_1, "NoPhysicalIPOnPacketLog", &VAR_0->NoPhysicalIPOnPacketLog);
 FUNC_0(VAR_1, "UseHubNameAsDhcpUserClassOption", &VAR_0->UseHubNameAsDhcpUserClassOption);
 FUNC_0(VAR_1, "UseHubNameAsRadiusNasId", &VAR_0->UseHubNameAsRadiusNasId);
}
