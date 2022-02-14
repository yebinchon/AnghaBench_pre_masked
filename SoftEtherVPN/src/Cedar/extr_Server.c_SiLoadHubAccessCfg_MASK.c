
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
typedef int a ;
struct TYPE_4__ {int IsIPv6; char* SrcUsername; char* DestUsername; int CheckSrcMac; int CheckDstMac; char* RedirectUrl; void* Loss; void* Jitter; void* Delay; void* Established; void* CheckTcpState; int DstMacMask; int DstMacAddress; int SrcMacMask; int SrcMacAddress; void* DestPortEnd; void* DestPortStart; void* SrcPortEnd; void* SrcPortStart; void* Protocol; int DestSubnetMask6; int DestIpAddress6; int SrcSubnetMask6; int SrcIpAddress6; void* DestSubnetMask; void* DestIpAddress; void* SrcSubnetMask; void* SrcIpAddress; void* Discard; void* Priority; void* Active; int Note; } ;
typedef int HUB ;
typedef int FOLDER ;
typedef TYPE_1__ ACCESS ;


 int FUNC_0 (int *,TYPE_1__*) ;
 void* FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int) ;
 void* FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*,char*,int) ;
 int FUNC_7 (int *,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_8 (void*,int ,int ) ;
 int VAR_3 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (TYPE_1__*,int) ;

void FUNC_11(HUB *VAR_4, FOLDER *VAR_5)
{
 ACCESS VAR_6;
 char VAR_7[VAR_3];

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 FUNC_10(&VAR_6, sizeof(VAR_6));

 FUNC_7(VAR_5, "Note", VAR_6.Note, sizeof(VAR_6.Note));
 VAR_6.Active = FUNC_1(VAR_5, "Active");
 VAR_6.Priority = FUNC_3(VAR_5, "Priority");
 VAR_6.Discard = FUNC_1(VAR_5, "Discard");
 VAR_6.IsIPv6 = FUNC_1(VAR_5, "IsIPv6");

 if (VAR_6.IsIPv6 == 0)
 {
  VAR_6.SrcIpAddress = FUNC_4(VAR_5, "SrcIpAddress");
  VAR_6.SrcSubnetMask = FUNC_4(VAR_5, "SrcSubnetMask");
  VAR_6.DestIpAddress = FUNC_4(VAR_5, "DestIpAddress");
  VAR_6.DestSubnetMask = FUNC_4(VAR_5, "DestSubnetMask");
 }
 else
 {
  FUNC_5(VAR_5, "SrcIpAddress6", &VAR_6.SrcIpAddress6);
  FUNC_5(VAR_5, "SrcSubnetMask6", &VAR_6.SrcSubnetMask6);
  FUNC_5(VAR_5, "DestIpAddress6", &VAR_6.DestIpAddress6);
  FUNC_5(VAR_5, "DestSubnetMask6", &VAR_6.DestSubnetMask6);
 }

 VAR_6.Protocol = FUNC_3(VAR_5, "Protocol");
 VAR_6.SrcPortStart = FUNC_3(VAR_5, "SrcPortStart");
 VAR_6.SrcPortEnd = FUNC_3(VAR_5, "SrcPortEnd");
 VAR_6.DestPortStart = FUNC_3(VAR_5, "DestPortStart");
 VAR_6.DestPortEnd = FUNC_3(VAR_5, "DestPortEnd");
 FUNC_6(VAR_5, "SrcUsername", VAR_6.SrcUsername, sizeof(VAR_6.SrcUsername));
 FUNC_6(VAR_5, "DestUsername", VAR_6.DestUsername, sizeof(VAR_6.DestUsername));
 VAR_6.CheckSrcMac = FUNC_1(VAR_5, "CheckSrcMac");

 if (FUNC_2(VAR_5, "SrcMacAddress", VAR_6.SrcMacAddress, sizeof(VAR_6.SrcMacAddress)) == 0)
 {
  FUNC_6(VAR_5, "SrcMacAddress", VAR_7, sizeof(VAR_7));
  if (FUNC_9(VAR_6.SrcMacAddress, VAR_7) == 0)
  {
   VAR_6.CheckSrcMac = 0;
  }
 }

 if (FUNC_2(VAR_5, "SrcMacMask", VAR_6.SrcMacMask, sizeof(VAR_6.SrcMacMask)) == 0)
 {
  FUNC_6(VAR_5, "SrcMacMask", VAR_7, sizeof(VAR_7));
  if (FUNC_9(VAR_6.SrcMacMask, VAR_7) == 0)
  {
   VAR_6.CheckSrcMac = 0;
  }
 }

 VAR_6.CheckDstMac = FUNC_1(VAR_5, "CheckDstMac");

 if (FUNC_2(VAR_5, "DstMacAddress", VAR_6.DstMacAddress, sizeof(VAR_6.DstMacAddress)) == 0)
 {
  FUNC_6(VAR_5, "DstMacAddress", VAR_7, sizeof(VAR_7));
  if (FUNC_9(VAR_6.DstMacAddress, VAR_7) == 0)
  {
   VAR_6.CheckDstMac = 0;
  }
 }

 if (FUNC_2(VAR_5, "DstMacMask", VAR_6.DstMacMask, sizeof(VAR_6.DstMacMask)) == 0)
 {
  FUNC_6(VAR_5, "DstMacMask", VAR_7, sizeof(VAR_7));
  if (FUNC_9(VAR_6.DstMacMask, VAR_7) == 0)
  {
   VAR_6.CheckDstMac = 0;
  }
 }

 VAR_6.CheckTcpState = FUNC_1(VAR_5, "CheckTcpState");
 VAR_6.Established = FUNC_1(VAR_5, "Established");
 VAR_6.Delay = FUNC_8(FUNC_3(VAR_5, "Delay"), 0, VAR_0);
 VAR_6.Jitter = FUNC_8(FUNC_3(VAR_5, "Jitter"), 0, VAR_1);
 VAR_6.Loss = FUNC_8(FUNC_3(VAR_5, "Loss"), 0, VAR_2);

 FUNC_6(VAR_5, "RedirectUrl", VAR_6.RedirectUrl, sizeof(VAR_6.RedirectUrl));

 FUNC_0(VAR_4, &VAR_6);
}
