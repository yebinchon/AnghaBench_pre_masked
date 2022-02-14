
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int DestSubnetMask6; int DestIpAddress6; int SrcSubnetMask6; int SrcIpAddress6; void* IsIPv6; int RedirectUrl; void* Loss; void* Jitter; void* Delay; void* Established; void* CheckTcpState; int DstMacMask; int DstMacAddress; void* CheckDstMac; int SrcMacMask; int SrcMacAddress; void* CheckSrcMac; int DestUsername; int SrcUsername; void* DestPortEnd; void* DestPortStart; void* SrcPortEnd; void* SrcPortStart; void* Protocol; void* DestSubnetMask; void* DestIpAddress; void* SrcSubnetMask; void* SrcIpAddress; void* Discard; void* Priority; void* Active; int Note; } ;
typedef int PACK ;
typedef TYPE_1__ ACCESS ;


 void* FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,int,int ) ;
 void* FUNC_2 (int *,char*,int ) ;
 void* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int *,char*,int ,int,int ) ;
 int FUNC_6 (int *,char*,int ,int,int ) ;
 TYPE_1__* FUNC_7 (int) ;

ACCESS *FUNC_8(PACK *VAR_0, UINT VAR_1)
{
 ACCESS *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_7(sizeof(ACCESS));

 FUNC_6(VAR_0, "Note", VAR_2->Note, sizeof(VAR_2->Note), VAR_1);
 VAR_2->Active = FUNC_2(VAR_0, "Active", VAR_1);
 VAR_2->Priority = FUNC_2(VAR_0, "Priority", VAR_1);
 VAR_2->Discard = FUNC_2(VAR_0, "Discard", VAR_1);
 VAR_2->SrcIpAddress = FUNC_3(VAR_0, "SrcIpAddress", VAR_1);
 VAR_2->SrcSubnetMask = FUNC_3(VAR_0, "SrcSubnetMask", VAR_1);
 VAR_2->DestIpAddress = FUNC_3(VAR_0, "DestIpAddress", VAR_1);
 VAR_2->DestSubnetMask = FUNC_3(VAR_0, "DestSubnetMask", VAR_1);
 VAR_2->Protocol = FUNC_2(VAR_0, "Protocol", VAR_1);
 VAR_2->SrcPortStart = FUNC_2(VAR_0, "SrcPortStart", VAR_1);
 VAR_2->SrcPortEnd = FUNC_2(VAR_0, "SrcPortEnd", VAR_1);
 VAR_2->DestPortStart = FUNC_2(VAR_0, "DestPortStart", VAR_1);
 VAR_2->DestPortEnd = FUNC_2(VAR_0, "DestPortEnd", VAR_1);
 FUNC_5(VAR_0, "SrcUsername", VAR_2->SrcUsername, sizeof(VAR_2->SrcUsername), VAR_1);
 FUNC_5(VAR_0, "DestUsername", VAR_2->DestUsername, sizeof(VAR_2->DestUsername), VAR_1);
 VAR_2->CheckSrcMac = FUNC_0(VAR_0, "CheckSrcMac", VAR_1);
 FUNC_1(VAR_0, "SrcMacAddress", VAR_2->SrcMacAddress, sizeof(VAR_2->SrcMacAddress), VAR_1);
 FUNC_1(VAR_0, "SrcMacMask", VAR_2->SrcMacMask, sizeof(VAR_2->SrcMacMask), VAR_1);
 VAR_2->CheckDstMac = FUNC_0(VAR_0, "CheckDstMac", VAR_1);
 FUNC_1(VAR_0, "DstMacAddress", VAR_2->DstMacAddress, sizeof(VAR_2->DstMacAddress), VAR_1);
 FUNC_1(VAR_0, "DstMacMask", VAR_2->DstMacMask, sizeof(VAR_2->DstMacMask), VAR_1);
 VAR_2->CheckTcpState = FUNC_0(VAR_0, "CheckTcpState", VAR_1);
 VAR_2->Established = FUNC_0(VAR_0, "Established", VAR_1);
 VAR_2->Delay = FUNC_2(VAR_0, "Delay", VAR_1);
 VAR_2->Jitter = FUNC_2(VAR_0, "Jitter", VAR_1);
 VAR_2->Loss = FUNC_2(VAR_0, "Loss", VAR_1);
 VAR_2->IsIPv6 = FUNC_0(VAR_0, "IsIPv6", VAR_1);
 FUNC_5(VAR_0, "RedirectUrl", VAR_2->RedirectUrl, sizeof(VAR_2->RedirectUrl), VAR_1);
 if (VAR_2->IsIPv6)
 {
  FUNC_4(VAR_0, "SrcIpAddress6", &VAR_2->SrcIpAddress6, VAR_1);
  FUNC_4(VAR_0, "SrcSubnetMask6", &VAR_2->SrcSubnetMask6, VAR_1);
  FUNC_4(VAR_0, "DestIpAddress6", &VAR_2->DestIpAddress6, VAR_1);
  FUNC_4(VAR_0, "DestSubnetMask6", &VAR_2->DestSubnetMask6, VAR_1);
 }

 return VAR_2;
}
