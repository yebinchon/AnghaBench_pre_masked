
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {scalar_t__ UseHubNameAsRadiusNasId; scalar_t__ UseHubNameAsDhcpUserClassOption; scalar_t__ DisableCorrectIpOffloadChecksum; scalar_t__ DisableCheckMacOnLocalBridge; scalar_t__ DisableUserModeSecureNAT; scalar_t__ DisableIpRawModeSecureNAT; scalar_t__ DisableKernelModeSecureNAT; int AccessListIncludeFileCacheLifetime; int SecureNAT_MaxIcmpSessionsPerIp; int SecureNAT_MaxDnsSessionsPerIp; int SecureNAT_MaxUdpSessionsPerIp; int SecureNAT_MaxTcpSynSentPerIp; int SecureNAT_MaxTcpSessionsPerIp; scalar_t__ RemoveDefGwOnDhcpForLocalhost; scalar_t__ ApplyIPv4AccessListOnArpPacket; scalar_t__ DisableUdpFilterForLocalBridgeNic; scalar_t__ DisableUdpAcceleration; scalar_t__ DisableHttpParsing; scalar_t__ NoDhcpPacketLogOutsideHub; scalar_t__ DisableAdjustTcpMss; int AdjustTcpMssValue; scalar_t__ NoLookBPDUBridgeId; int DetectDormantSessionInterval; scalar_t__ NoPhysicalIPOnPacketLog; scalar_t__ SecureNAT_RandomizeAssignIp; scalar_t__ DenyAllRadiusLoginWithNoVlanAssign; scalar_t__ AssignVLanIdByRadiusAttribute; scalar_t__ SuppressClientUpdateNotification; scalar_t__ DropArpInPrivacyFilterMode; scalar_t__ DropBroadcastsInPrivacyFilterMode; scalar_t__ DoNotSaveHeavySecurityLogs; int FloodingSendQueueBufferQuota; int MaxLoggedPacketsPerMinute; scalar_t__ BroadcastLimiterStrictMode; scalar_t__ FixForDLinkBPDU; int VlanTypeId; scalar_t__ NoManageVlanId; int RequiredClientId; int ClientMinimumRequiredBuild; int BroadcastStormDetectionThreshold; scalar_t__ NoSpinLockForPacketDelay; scalar_t__ YieldAfterStorePacket; scalar_t__ DisableIPParsing; scalar_t__ ManageOnlyLocalUnicastIPv6; scalar_t__ ManageOnlyPrivateIP; scalar_t__ NoMacAddressLog; scalar_t__ NoIPv6DefaultRouterInRAWhenIPv6; scalar_t__ FilterBPDU; scalar_t__ NoIPv6PacketLog; scalar_t__ NoIPv4PacketLog; scalar_t__ FilterNonIP; scalar_t__ FilterIPv6; scalar_t__ FilterIPv4; scalar_t__ FilterOSPF; scalar_t__ FilterPPPoE; scalar_t__ NoEnum; scalar_t__ NoIpTable; scalar_t__ NoIPv6AddrPolling; scalar_t__ NoArpPolling; int MaxSession; } ;
typedef TYPE_1__ HUB_OPTION ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*,int,char*,int ) ;
 int VAR_0 ;

void FUNC_4(FOLDER *VAR_1, HUB_OPTION *VAR_2)
{
 char VAR_3[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_1, "MaxSession", VAR_2->MaxSession);
 FUNC_0(VAR_1, "NoArpPolling", VAR_2->NoArpPolling);
 FUNC_0(VAR_1, "NoIPv6AddrPolling", VAR_2->NoIPv6AddrPolling);
 FUNC_0(VAR_1, "NoIpTable", VAR_2->NoIpTable);
 FUNC_0(VAR_1, "NoEnum", VAR_2->NoEnum);
 FUNC_0(VAR_1, "FilterPPPoE", VAR_2->FilterPPPoE);
 FUNC_0(VAR_1, "FilterOSPF", VAR_2->FilterOSPF);
 FUNC_0(VAR_1, "FilterIPv4", VAR_2->FilterIPv4);
 FUNC_0(VAR_1, "FilterIPv6", VAR_2->FilterIPv6);
 FUNC_0(VAR_1, "FilterNonIP", VAR_2->FilterNonIP);
 FUNC_0(VAR_1, "NoIPv4PacketLog", VAR_2->NoIPv4PacketLog);
 FUNC_0(VAR_1, "NoIPv6PacketLog", VAR_2->NoIPv6PacketLog);
 FUNC_0(VAR_1, "FilterBPDU", VAR_2->FilterBPDU);
 FUNC_0(VAR_1, "NoIPv6DefaultRouterInRAWhenIPv6", VAR_2->NoIPv6DefaultRouterInRAWhenIPv6);
 FUNC_0(VAR_1, "NoMacAddressLog", VAR_2->NoMacAddressLog);
 FUNC_0(VAR_1, "ManageOnlyPrivateIP", VAR_2->ManageOnlyPrivateIP);
 FUNC_0(VAR_1, "ManageOnlyLocalUnicastIPv6", VAR_2->ManageOnlyLocalUnicastIPv6);
 FUNC_0(VAR_1, "DisableIPParsing", VAR_2->DisableIPParsing);
 FUNC_0(VAR_1, "YieldAfterStorePacket", VAR_2->YieldAfterStorePacket);
 FUNC_0(VAR_1, "NoSpinLockForPacketDelay", VAR_2->NoSpinLockForPacketDelay);
 FUNC_1(VAR_1, "BroadcastStormDetectionThreshold", VAR_2->BroadcastStormDetectionThreshold);
 FUNC_1(VAR_1, "ClientMinimumRequiredBuild", VAR_2->ClientMinimumRequiredBuild);
 FUNC_1(VAR_1, "RequiredClientId", VAR_2->RequiredClientId);
 FUNC_0(VAR_1, "NoManageVlanId", VAR_2->NoManageVlanId);
 FUNC_3(VAR_3, sizeof(VAR_3), "0x%x", VAR_2->VlanTypeId);
 FUNC_2(VAR_1, "VlanTypeId", VAR_3);
 if (VAR_2->FixForDLinkBPDU)
 {
  FUNC_0(VAR_1, "FixForDLinkBPDU", VAR_2->FixForDLinkBPDU);
 }
 FUNC_0(VAR_1, "BroadcastLimiterStrictMode", VAR_2->BroadcastLimiterStrictMode);
 FUNC_1(VAR_1, "MaxLoggedPacketsPerMinute", VAR_2->MaxLoggedPacketsPerMinute);
 FUNC_1(VAR_1, "FloodingSendQueueBufferQuota", VAR_2->FloodingSendQueueBufferQuota);
 FUNC_0(VAR_1, "DoNotSaveHeavySecurityLogs", VAR_2->DoNotSaveHeavySecurityLogs);
 FUNC_0(VAR_1, "DropBroadcastsInPrivacyFilterMode", VAR_2->DropBroadcastsInPrivacyFilterMode);
 FUNC_0(VAR_1, "DropArpInPrivacyFilterMode", VAR_2->DropArpInPrivacyFilterMode);
 FUNC_0(VAR_1, "SuppressClientUpdateNotification", VAR_2->SuppressClientUpdateNotification);
 FUNC_0(VAR_1, "AssignVLanIdByRadiusAttribute", VAR_2->AssignVLanIdByRadiusAttribute);
 FUNC_0(VAR_1, "DenyAllRadiusLoginWithNoVlanAssign", VAR_2->DenyAllRadiusLoginWithNoVlanAssign);
 FUNC_0(VAR_1, "SecureNAT_RandomizeAssignIp", VAR_2->SecureNAT_RandomizeAssignIp);
 FUNC_0(VAR_1, "NoPhysicalIPOnPacketLog", VAR_2->NoPhysicalIPOnPacketLog);
 FUNC_1(VAR_1, "DetectDormantSessionInterval", VAR_2->DetectDormantSessionInterval);
 FUNC_0(VAR_1, "NoLookBPDUBridgeId", VAR_2->NoLookBPDUBridgeId);
 FUNC_1(VAR_1, "AdjustTcpMssValue", VAR_2->AdjustTcpMssValue);
 FUNC_0(VAR_1, "DisableAdjustTcpMss", VAR_2->DisableAdjustTcpMss);
 FUNC_0(VAR_1, "NoDhcpPacketLogOutsideHub", VAR_2->NoDhcpPacketLogOutsideHub);
 FUNC_0(VAR_1, "DisableHttpParsing", VAR_2->DisableHttpParsing);
 FUNC_0(VAR_1, "DisableUdpAcceleration", VAR_2->DisableUdpAcceleration);
 FUNC_0(VAR_1, "DisableUdpFilterForLocalBridgeNic", VAR_2->DisableUdpFilterForLocalBridgeNic);
 FUNC_0(VAR_1, "ApplyIPv4AccessListOnArpPacket", VAR_2->ApplyIPv4AccessListOnArpPacket);
 FUNC_0(VAR_1, "RemoveDefGwOnDhcpForLocalhost", VAR_2->RemoveDefGwOnDhcpForLocalhost);
 FUNC_1(VAR_1, "SecureNAT_MaxTcpSessionsPerIp", VAR_2->SecureNAT_MaxTcpSessionsPerIp);
 FUNC_1(VAR_1, "SecureNAT_MaxTcpSynSentPerIp", VAR_2->SecureNAT_MaxTcpSynSentPerIp);
 FUNC_1(VAR_1, "SecureNAT_MaxUdpSessionsPerIp", VAR_2->SecureNAT_MaxUdpSessionsPerIp);
 FUNC_1(VAR_1, "SecureNAT_MaxDnsSessionsPerIp", VAR_2->SecureNAT_MaxDnsSessionsPerIp);
 FUNC_1(VAR_1, "SecureNAT_MaxIcmpSessionsPerIp", VAR_2->SecureNAT_MaxIcmpSessionsPerIp);
 FUNC_1(VAR_1, "AccessListIncludeFileCacheLifetime", VAR_2->AccessListIncludeFileCacheLifetime);
 FUNC_0(VAR_1, "DisableKernelModeSecureNAT", VAR_2->DisableKernelModeSecureNAT);
 FUNC_0(VAR_1, "DisableIpRawModeSecureNAT", VAR_2->DisableIpRawModeSecureNAT);
 FUNC_0(VAR_1, "DisableUserModeSecureNAT", VAR_2->DisableUserModeSecureNAT);
 FUNC_0(VAR_1, "DisableCheckMacOnLocalBridge", VAR_2->DisableCheckMacOnLocalBridge);
 FUNC_0(VAR_1, "DisableCorrectIpOffloadChecksum", VAR_2->DisableCorrectIpOffloadChecksum);
 FUNC_0(VAR_1, "UseHubNameAsDhcpUserClassOption", VAR_2->UseHubNameAsDhcpUserClassOption);
 FUNC_0(VAR_1, "UseHubNameAsRadiusNasId", VAR_2->UseHubNameAsRadiusNasId);
}
