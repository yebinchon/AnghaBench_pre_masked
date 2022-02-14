
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zero ;
typedef int UINT ;
struct TYPE_3__ {int SrcIpAddress; int SrcSubnetMask; int DestIpAddress; int DestSubnetMask; int DestSubnetMask6; int DestIpAddress6; int SrcSubnetMask6; int SrcIpAddress6; scalar_t__ IsIPv6; int RedirectUrl; int Loss; int Jitter; int Delay; scalar_t__ Established; scalar_t__ CheckTcpState; int DstMacMask; int DstMacAddress; scalar_t__ CheckDstMac; int SrcMacMask; int SrcMacAddress; scalar_t__ CheckSrcMac; int DestUsername; int SrcUsername; int DestPortEnd; int DestPortStart; int SrcPortEnd; int SrcPortStart; int Protocol; int Discard; int Priority; int Active; int Note; } ;
typedef int PACK ;
typedef int IPV6_ADDR ;
typedef TYPE_1__ ACCESS ;


 int FUNC_0 (int *,char*,scalar_t__,int ,int ) ;
 int FUNC_1 (int *,char*,int ,int,int ,int ) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int,int ,int ) ;
 int FUNC_4 (int *,char*,int *,int ,int ) ;
 int FUNC_5 (int *,char*,int ,int ,int ) ;
 int FUNC_6 (int *,char*,int ,int ,int ) ;
 int FUNC_7 (int *,int) ;

void FUNC_8(PACK *VAR_0, ACCESS *VAR_1, UINT VAR_2, UINT VAR_3)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_0, "Note", VAR_1->Note, VAR_2, VAR_3);
 FUNC_2(VAR_0, "Active", VAR_1->Active, VAR_2, VAR_3);
 FUNC_2(VAR_0, "Priority", VAR_1->Priority, VAR_2, VAR_3);
 FUNC_2(VAR_0, "Discard", VAR_1->Discard, VAR_2, VAR_3);
 if (VAR_1->IsIPv6)
 {
  FUNC_3(VAR_0, "SrcIpAddress", 0xFDFFFFDF, VAR_2, VAR_3);
  FUNC_3(VAR_0, "SrcSubnetMask", 0xFFFFFFFF, VAR_2, VAR_3);
  FUNC_3(VAR_0, "DestIpAddress", 0xFDFFFFDF, VAR_2, VAR_3);
  FUNC_3(VAR_0, "DestSubnetMask", 0xFFFFFFFF, VAR_2, VAR_3);
 }
 else
 {
  FUNC_3(VAR_0, "SrcIpAddress", VAR_1->SrcIpAddress, VAR_2, VAR_3);
  FUNC_3(VAR_0, "SrcSubnetMask", VAR_1->SrcSubnetMask, VAR_2, VAR_3);
  FUNC_3(VAR_0, "DestIpAddress", VAR_1->DestIpAddress, VAR_2, VAR_3);
  FUNC_3(VAR_0, "DestSubnetMask", VAR_1->DestSubnetMask, VAR_2, VAR_3);
 }
 FUNC_2(VAR_0, "Protocol", VAR_1->Protocol, VAR_2, VAR_3);
 FUNC_2(VAR_0, "SrcPortStart", VAR_1->SrcPortStart, VAR_2, VAR_3);
 FUNC_2(VAR_0, "SrcPortEnd", VAR_1->SrcPortEnd, VAR_2, VAR_3);
 FUNC_2(VAR_0, "DestPortStart", VAR_1->DestPortStart, VAR_2, VAR_3);
 FUNC_2(VAR_0, "DestPortEnd", VAR_1->DestPortEnd, VAR_2, VAR_3);
 FUNC_5(VAR_0, "SrcUsername", VAR_1->SrcUsername, VAR_2, VAR_3);
 FUNC_5(VAR_0, "DestUsername", VAR_1->DestUsername, VAR_2, VAR_3);
 FUNC_0(VAR_0, "CheckSrcMac", VAR_1->CheckSrcMac, VAR_2, VAR_3);
 FUNC_1(VAR_0, "SrcMacAddress", VAR_1->SrcMacAddress, sizeof(VAR_1->SrcMacAddress), VAR_2, VAR_3);
 FUNC_1(VAR_0, "SrcMacMask", VAR_1->SrcMacMask, sizeof(VAR_1->SrcMacMask), VAR_2, VAR_3);
 FUNC_0(VAR_0, "CheckDstMac", VAR_1->CheckDstMac, VAR_2, VAR_3);
 FUNC_1(VAR_0, "DstMacAddress", VAR_1->DstMacAddress, sizeof(VAR_1->DstMacAddress), VAR_2, VAR_3);
 FUNC_1(VAR_0, "DstMacMask", VAR_1->DstMacMask, sizeof(VAR_1->DstMacMask), VAR_2, VAR_3);
 FUNC_0(VAR_0, "CheckTcpState", VAR_1->CheckTcpState, VAR_2, VAR_3);
 FUNC_0(VAR_0, "Established", VAR_1->Established, VAR_2, VAR_3);
 FUNC_2(VAR_0, "Delay", VAR_1->Delay, VAR_2, VAR_3);
 FUNC_2(VAR_0, "Jitter", VAR_1->Jitter, VAR_2, VAR_3);
 FUNC_2(VAR_0, "Loss", VAR_1->Loss, VAR_2, VAR_3);
 FUNC_5(VAR_0, "RedirectUrl", VAR_1->RedirectUrl, VAR_2, VAR_3);
 FUNC_0(VAR_0, "IsIPv6", VAR_1->IsIPv6, VAR_2, VAR_3);
 if (VAR_1->IsIPv6)
 {
  FUNC_4(VAR_0, "SrcIpAddress6", &VAR_1->SrcIpAddress6, VAR_2, VAR_3);
  FUNC_4(VAR_0, "SrcSubnetMask6", &VAR_1->SrcSubnetMask6, VAR_2, VAR_3);
  FUNC_4(VAR_0, "DestIpAddress6", &VAR_1->DestIpAddress6, VAR_2, VAR_3);
  FUNC_4(VAR_0, "DestSubnetMask6", &VAR_1->DestSubnetMask6, VAR_2, VAR_3);
 }
 else
 {
  IPV6_ADDR VAR_4;

  FUNC_7(&VAR_4, sizeof(VAR_4));

  FUNC_4(VAR_0, "SrcIpAddress6", &VAR_4, VAR_2, VAR_3);
  FUNC_4(VAR_0, "SrcSubnetMask6", &VAR_4, VAR_2, VAR_3);
  FUNC_4(VAR_0, "DestIpAddress6", &VAR_4, VAR_2, VAR_3);
  FUNC_4(VAR_0, "DestSubnetMask6", &VAR_4, VAR_2, VAR_3);
 }
}
