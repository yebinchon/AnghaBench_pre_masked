
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int DestSubnetMask6; int DestIpAddress6; int SrcSubnetMask6; int SrcIpAddress6; void* IsIPv6; int RedirectUrl; void* UniqueId; void* Loss; void* Jitter; void* Delay; void* Established; void* CheckTcpState; int DstMacMask; int DstMacAddress; void* CheckDstMac; int SrcMacMask; int SrcMacAddress; void* CheckSrcMac; int DestUsername; int SrcUsername; void* DestPortEnd; void* DestPortStart; void* SrcPortEnd; void* SrcPortStart; void* Protocol; void* DestSubnetMask; void* DestIpAddress; void* SrcSubnetMask; void* SrcIpAddress; void* Discard; void* Priority; void* Active; int Note; void* Id; } ;
typedef int PACK ;
typedef TYPE_1__ ACCESS ;


 void* FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,int,int ) ;
 void* FUNC_2 (int *,char*,int ) ;
 void* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int *,char*,int ,int,int ) ;
 int FUNC_6 (int *,char*,int ,int,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

void FUNC_8(ACCESS *VAR_0, PACK *VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_0, sizeof(ACCESS));
 VAR_0->Id = FUNC_2(VAR_1, "Id", VAR_2);
 FUNC_6(VAR_1, "Note", VAR_0->Note, sizeof(VAR_0->Note), VAR_2);
 VAR_0->Active = FUNC_0(VAR_1, "Active", VAR_2);
 VAR_0->Priority = FUNC_2(VAR_1, "Priority", VAR_2);
 VAR_0->Discard = FUNC_0(VAR_1, "Discard", VAR_2);
 VAR_0->SrcIpAddress = FUNC_3(VAR_1, "SrcIpAddress", VAR_2);
 VAR_0->SrcSubnetMask = FUNC_3(VAR_1, "SrcSubnetMask", VAR_2);
 VAR_0->DestIpAddress = FUNC_3(VAR_1, "DestIpAddress", VAR_2);
 VAR_0->DestSubnetMask = FUNC_3(VAR_1, "DestSubnetMask", VAR_2);
 VAR_0->Protocol = FUNC_2(VAR_1, "Protocol", VAR_2);
 VAR_0->SrcPortStart = FUNC_2(VAR_1, "SrcPortStart", VAR_2);
 VAR_0->SrcPortEnd = FUNC_2(VAR_1, "SrcPortEnd", VAR_2);
 VAR_0->DestPortStart = FUNC_2(VAR_1, "DestPortStart", VAR_2);
 VAR_0->DestPortEnd = FUNC_2(VAR_1, "DestPortEnd", VAR_2);

 FUNC_5(VAR_1, "SrcUsername", VAR_0->SrcUsername, sizeof(VAR_0->SrcUsername), VAR_2);

 FUNC_5(VAR_1, "DestUsername", VAR_0->DestUsername, sizeof(VAR_0->DestUsername), VAR_2);
 VAR_0->CheckSrcMac = FUNC_0(VAR_1, "CheckSrcMac", VAR_2);
 FUNC_1(VAR_1, "SrcMacAddress", VAR_0->SrcMacAddress, sizeof(VAR_0->SrcMacAddress), VAR_2);
 FUNC_1(VAR_1, "SrcMacMask", VAR_0->SrcMacMask, sizeof(VAR_0->SrcMacMask), VAR_2);
 VAR_0->CheckDstMac = FUNC_0(VAR_1, "CheckDstMac", VAR_2);
 FUNC_1(VAR_1, "DstMacAddress", VAR_0->DstMacAddress, sizeof(VAR_0->DstMacAddress), VAR_2);
 FUNC_1(VAR_1, "DstMacMask", VAR_0->DstMacMask, sizeof(VAR_0->DstMacMask), VAR_2);
 VAR_0->CheckTcpState = FUNC_0(VAR_1, "CheckTcpState", VAR_2);
 VAR_0->Established = FUNC_0(VAR_1, "Established", VAR_2);
 VAR_0->Delay = FUNC_2(VAR_1, "Delay", VAR_2);
 VAR_0->Jitter = FUNC_2(VAR_1, "Jitter", VAR_2);
 VAR_0->Loss = FUNC_2(VAR_1, "Loss", VAR_2);
 VAR_0->IsIPv6 = FUNC_0(VAR_1, "IsIPv6", VAR_2);
 VAR_0->UniqueId = FUNC_2(VAR_1, "UniqueId", VAR_2);
 FUNC_5(VAR_1, "RedirectUrl", VAR_0->RedirectUrl, sizeof(VAR_0->RedirectUrl), VAR_2);
 if (VAR_0->IsIPv6)
 {
  FUNC_4(VAR_1, "SrcIpAddress6", &VAR_0->SrcIpAddress6, VAR_2);
  FUNC_4(VAR_1, "SrcSubnetMask6", &VAR_0->SrcSubnetMask6, VAR_2);
  FUNC_4(VAR_1, "DestIpAddress6", &VAR_0->DestIpAddress6, VAR_2);
  FUNC_4(VAR_1, "DestSubnetMask6", &VAR_0->DestSubnetMask6, VAR_2);
 }
}
