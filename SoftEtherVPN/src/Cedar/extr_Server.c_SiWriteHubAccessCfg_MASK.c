
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {int Active; int Discard; int IsIPv6; char* SrcUsername; char* DestUsername; int CheckSrcMac; int CheckDstMac; int CheckTcpState; int Established; char* RedirectUrl; int Loss; int Jitter; int Delay; int DstMacMask; int DstMacAddress; int SrcMacMask; int SrcMacAddress; int DestPortEnd; int DestPortStart; int SrcPortEnd; int SrcPortStart; int Protocol; int DestSubnetMask6; int DestIpAddress6; int SrcSubnetMask6; int SrcIpAddress6; int DestSubnetMask; int DestIpAddress; int SrcSubnetMask; int SrcIpAddress; int Priority; int Note; } ;
typedef int FOLDER ;
typedef TYPE_1__ ACCESS ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_6 (char*,int,int ) ;

void FUNC_7(FOLDER *VAR_1, ACCESS *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_1, "Note", VAR_2->Note);
 FUNC_0(VAR_1, "Active", VAR_2->Active);
 FUNC_1(VAR_1, "Priority", VAR_2->Priority);
 FUNC_0(VAR_1, "Discard", VAR_2->Discard);
 FUNC_0(VAR_1, "IsIPv6", VAR_2->IsIPv6);

 if (VAR_2->IsIPv6 == 0)
 {
  FUNC_2(VAR_1, "SrcIpAddress", VAR_2->SrcIpAddress);
  FUNC_2(VAR_1, "SrcSubnetMask", VAR_2->SrcSubnetMask);
  FUNC_2(VAR_1, "DestIpAddress", VAR_2->DestIpAddress);
  FUNC_2(VAR_1, "DestSubnetMask", VAR_2->DestSubnetMask);
 }
 else
 {
  FUNC_3(VAR_1, "SrcIpAddress6", &VAR_2->SrcIpAddress6);
  FUNC_3(VAR_1, "SrcSubnetMask6", &VAR_2->SrcSubnetMask6);
  FUNC_3(VAR_1, "DestIpAddress6", &VAR_2->DestIpAddress6);
  FUNC_3(VAR_1, "DestSubnetMask6", &VAR_2->DestSubnetMask6);
 }

 FUNC_1(VAR_1, "Protocol", VAR_2->Protocol);
 FUNC_1(VAR_1, "SrcPortStart", VAR_2->SrcPortStart);
 FUNC_1(VAR_1, "SrcPortEnd", VAR_2->SrcPortEnd);
 FUNC_1(VAR_1, "DestPortStart", VAR_2->DestPortStart);
 FUNC_1(VAR_1, "DestPortEnd", VAR_2->DestPortEnd);
 FUNC_4(VAR_1, "SrcUsername", VAR_2->SrcUsername);
 FUNC_4(VAR_1, "DestUsername", VAR_2->DestUsername);
 FUNC_0(VAR_1, "CheckSrcMac", VAR_2->CheckSrcMac);

 if (VAR_2->CheckSrcMac)
 {
  char VAR_3[VAR_0];

  FUNC_6(VAR_3, sizeof(VAR_3), VAR_2->SrcMacAddress);
  FUNC_4(VAR_1, "SrcMacAddress", VAR_3);

  FUNC_6(VAR_3, sizeof(VAR_3), VAR_2->SrcMacMask);
  FUNC_4(VAR_1, "SrcMacMask", VAR_3);
 }

 FUNC_0(VAR_1, "CheckDstMac", VAR_2->CheckDstMac);

 if (VAR_2->CheckDstMac)
 {
  char VAR_4[VAR_0];

  FUNC_6(VAR_4, sizeof(VAR_4), VAR_2->DstMacAddress);
  FUNC_4(VAR_1, "DstMacAddress", VAR_4);

  FUNC_6(VAR_4, sizeof(VAR_4), VAR_2->DstMacMask);
  FUNC_4(VAR_1, "DstMacMask", VAR_4);
 }

 FUNC_0(VAR_1, "CheckTcpState", VAR_2->CheckTcpState);
 FUNC_0(VAR_1, "Established", VAR_2->Established);

 FUNC_4(VAR_1, "RedirectUrl", VAR_2->RedirectUrl);

 FUNC_1(VAR_1, "Delay", VAR_2->Delay);
 FUNC_1(VAR_1, "Jitter", VAR_2->Jitter);
 FUNC_1(VAR_1, "Loss", VAR_2->Loss);
}
