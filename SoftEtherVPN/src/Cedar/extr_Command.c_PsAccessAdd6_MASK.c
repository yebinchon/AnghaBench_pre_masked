
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int mask ;
typedef int ip ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_24__ {int IsIPv6; int Active; int Discard; int Established; int CheckTcpState; int DestPortEnd; int DestPortStart; int SrcPortEnd; int SrcPortStart; int Protocol; int DestSubnetMask6; int DestIpAddress6; int SrcSubnetMask6; int SrcIpAddress6; int DstMacMask; int DstMacAddress; int CheckDstMac; int SrcMacMask; int SrcMacAddress; int CheckSrcMac; int DestUsername; int SrcUsername; int Priority; int Note; } ;
struct TYPE_23__ {char* member_0; int member_1; unsigned long member_2; } ;
struct TYPE_22__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_21__ {char* member_0; TYPE_6__* member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_20__ {int Rpc; int * HubName; int CapsList; } ;
struct TYPE_19__ {int HubName; TYPE_7__ Access; } ;
typedef TYPE_1__ RPC_ADD_ACCESS ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_1__ IP ;
typedef TYPE_5__ CONSOLE ;
typedef TYPE_6__ CMD_EVAL_MIN_MAX ;
typedef TYPE_7__ ACCESS ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int * FUNC_7 (TYPE_5__*,char*,int *,TYPE_3__*,int) ;
 int FUNC_8 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (int *,int *,int ,int ) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *) ;
 scalar_t__ FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int ,int,int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int,int ) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (TYPE_5__*,int ) ;
 int FUNC_21 (TYPE_5__*,int ) ;

UINT FUNC_22(CONSOLE *VAR_11, char *VAR_12, wchar_t *VAR_13, void *VAR_14)
{
 LIST *VAR_15;
 PS *VAR_16 = (PS *)VAR_14;
 UINT VAR_17 = 0;
 RPC_ADD_ACCESS VAR_18;
 ACCESS *VAR_19;
 IP VAR_20, VAR_21;

 CMD_EVAL_MIN_MAX VAR_22 =
 {
  "CMD_AccessAdd6_Eval_PRIORITY", 1, 4294967295UL,
 };
 PARAM VAR_23[] =
 {

  {"[pass|discard]", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_TYPE"), *VAR_3, ((void*)0)},
  {"MEMO", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_MEMO"), ((void*)0), ((void*)0)},
  {"PRIORITY", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_PRIORITY"), *VAR_2, &VAR_22},
  {"SRCUSERNAME", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_SRCUSERNAME"), ((void*)0), ((void*)0)},
  {"DESTUSERNAME", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_DESTUSERNAME"), ((void*)0), ((void*)0)},
  {"SRCMAC", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_SRCMAC"), *VAR_1, ((void*)0)},
  {"DESTMAC", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_DESTMAC"), *VAR_1, ((void*)0)},
  {"SRCIP", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_SRCIP"), *VAR_0, ((void*)0)},
  {"DESTIP", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_DESTIP"), *VAR_0, ((void*)0)},
  {"PROTOCOL", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_PROTOCOL"), *VAR_5, ((void*)0)},
  {"SRCPORT", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_SRCPORT"), *VAR_4, ((void*)0)},
  {"DESTPORT", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_DESTPORT"), *VAR_4, ((void*)0)},
  {"TCPSTATE", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_TCPSTATE"), *VAR_6, ((void*)0)},
 };


 if (VAR_16->HubName == ((void*)0))
 {
  VAR_11->Write(VAR_11, FUNC_19("CMD_Hub_Not_Selected"));
  return VAR_8;
 }


 if (FUNC_2(VAR_16->CapsList, "b_support_ex_acl") == 0)
 {
  VAR_11->Write(VAR_11, FUNC_18(VAR_9));
  return VAR_9;
 }

 VAR_15 = FUNC_7(VAR_11, VAR_12, VAR_13, VAR_23, sizeof(VAR_23) / sizeof(VAR_23[0]));
 if (VAR_15 == ((void*)0))
 {
  return VAR_8;
 }

 FUNC_17(&VAR_18, sizeof(VAR_18));
 VAR_19 = &VAR_18.Access;

 VAR_19->IsIPv6 = 1;

 FUNC_13(VAR_18.HubName, sizeof(VAR_18.HubName), VAR_16->HubName);
 FUNC_16(VAR_19->Note, sizeof(VAR_19->Note), FUNC_5(VAR_15, "MEMO"));
 VAR_19->Active = 1;
 VAR_19->Priority = FUNC_3(VAR_15, "PRIORITY");
 VAR_19->Discard = FUNC_14(FUNC_4(VAR_15, "[pass|discard]")) ? 0 : 1;
 FUNC_13(VAR_19->SrcUsername, sizeof(VAR_19->SrcUsername), FUNC_4(VAR_15, "SRCUSERNAME"));
 FUNC_13(VAR_19->DestUsername, sizeof(VAR_19->DestUsername), FUNC_4(VAR_15, "DESTUSERNAME"));
 FUNC_9(FUNC_4(VAR_15, "SRCMAC"), &VAR_19->CheckSrcMac, VAR_19->SrcMacAddress, VAR_19->SrcMacMask);
 FUNC_9(FUNC_4(VAR_15, "DESTMAC"), &VAR_19->CheckDstMac, VAR_19->DstMacAddress, VAR_19->DstMacMask);

 FUNC_17(&VAR_20, sizeof(VAR_20));
 FUNC_17(&VAR_21, sizeof(VAR_21));

 FUNC_8(FUNC_4(VAR_15, "SRCIP"), &VAR_20, &VAR_21);
 FUNC_6(&VAR_19->SrcIpAddress6, &VAR_20);
 FUNC_6(&VAR_19->SrcSubnetMask6, &VAR_21);

 FUNC_8(FUNC_4(VAR_15, "DESTIP"), &VAR_20, &VAR_21);
 FUNC_6(&VAR_19->DestIpAddress6, &VAR_20);
 FUNC_6(&VAR_19->DestSubnetMask6, &VAR_21);

 VAR_19->Protocol = FUNC_15(FUNC_4(VAR_15, "PROTOCOL"));
 FUNC_10(FUNC_4(VAR_15, "SRCPORT"), &VAR_19->SrcPortStart, &VAR_19->SrcPortEnd);
 FUNC_10(FUNC_4(VAR_15, "DESTPORT"), &VAR_19->DestPortStart, &VAR_19->DestPortEnd);
 FUNC_11(FUNC_4(VAR_15, "TCPSTATE"), &VAR_19->CheckTcpState, &VAR_19->Established);


 VAR_17 = FUNC_12(VAR_16->Rpc, &VAR_18);

 if (VAR_17 != VAR_10)
 {

  FUNC_0(VAR_11, VAR_17);
  FUNC_1(VAR_15);
  return VAR_17;
 }

 FUNC_1(VAR_15);

 return 0;
}
