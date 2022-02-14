
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
struct TYPE_24__ {int IsIPv6; int Active; int Discard; int RedirectUrl; void* Loss; void* Jitter; void* Delay; int Established; int CheckTcpState; int DestPortEnd; int DestPortStart; int SrcPortEnd; int SrcPortStart; int Protocol; int DestSubnetMask6; int DestIpAddress6; int SrcSubnetMask6; int SrcIpAddress6; int DstMacMask; int DstMacAddress; int CheckDstMac; int SrcMacMask; int SrcMacAddress; int CheckSrcMac; int DestUsername; int SrcUsername; void* Priority; int Note; } ;
struct TYPE_23__ {char* member_0; int member_1; unsigned long member_2; } ;
struct TYPE_22__ {int (* Write ) (TYPE_5__*,int *) ;} ;
struct TYPE_21__ {char* member_0; TYPE_6__* member_4; int * member_3; int * member_2; int * member_1; } ;
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
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
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
 int * FUNC_18 (scalar_t__) ;
 int * FUNC_19 (char*) ;
 int FUNC_20 (TYPE_5__*,int *) ;
 int FUNC_21 (TYPE_5__*,int *) ;

UINT FUNC_22(CONSOLE *VAR_14, char *VAR_15, wchar_t *VAR_16, void *VAR_17)
{
 LIST *VAR_18;
 PS *VAR_19 = (PS *)VAR_17;
 UINT VAR_20 = 0;
 RPC_ADD_ACCESS VAR_21;
 ACCESS *VAR_22;
 IP VAR_23, VAR_24;

 CMD_EVAL_MIN_MAX VAR_25 =
 {
  "CMD_AccessAdd6_Eval_PRIORITY", 1, 4294967295UL,
 };
 CMD_EVAL_MIN_MAX VAR_26 =
 {
  "CMD_AccessAddEx6_Eval_DELAY", 0, VAR_11,
 };
 CMD_EVAL_MIN_MAX VAR_27 =
 {
  "CMD_AccessAddEx6_Eval_JITTER", 0, VAR_12,
 };
 CMD_EVAL_MIN_MAX VAR_28 =
 {
  "CMD_AccessAddEx6_Eval_LOSS", 0, VAR_13,
 };
 PARAM VAR_29[] =
 {

  {"[pass|discard]", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_TYPE"), VAR_3, ((void*)0)},
  {"MEMO", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_MEMO"), ((void*)0), ((void*)0)},
  {"PRIORITY", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_PRIORITY"), VAR_2, &VAR_25},
  {"SRCUSERNAME", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_SRCUSERNAME"), ((void*)0), ((void*)0)},
  {"DESTUSERNAME", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_DESTUSERNAME"), ((void*)0), ((void*)0)},
  {"SRCMAC", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_SRCMAC"), VAR_1, ((void*)0)},
  {"DESTMAC", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_DESTMAC"), VAR_1, ((void*)0)},
  {"SRCIP", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_SRCIP"), VAR_0, ((void*)0)},
  {"DESTIP", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_DESTIP"), VAR_0, ((void*)0)},
  {"PROTOCOL", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_PROTOCOL"), VAR_5, ((void*)0)},
  {"SRCPORT", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_SRCPORT"), VAR_4, ((void*)0)},
  {"DESTPORT", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_DESTPORT"), VAR_4, ((void*)0)},
  {"TCPSTATE", VAR_7, FUNC_19("CMD_AccessAdd6_Prompt_TCPSTATE"), VAR_6, ((void*)0)},
  {"DELAY", VAR_7, FUNC_19("CMD_AccessAddEx6_Prompt_DELAY"), VAR_2, &VAR_26},
  {"JITTER", VAR_7, FUNC_19("CMD_AccessAddEx6_Prompt_JITTER"), VAR_2, &VAR_27},
  {"LOSS", VAR_7, FUNC_19("CMD_AccessAddEx6_Prompt_LOSS"), VAR_2, &VAR_28},
  {"REDIRECTURL", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };


 if (VAR_19->HubName == ((void*)0))
 {
  VAR_14->Write(VAR_14, FUNC_19("CMD_Hub_Not_Selected"));
  return VAR_8;
 }


 if (FUNC_2(VAR_19->CapsList, "b_support_ex_acl") == 0)
 {
  VAR_14->Write(VAR_14, FUNC_18(VAR_9));
  return VAR_9;
 }

 VAR_18 = FUNC_7(VAR_14, VAR_15, VAR_16, VAR_29, sizeof(VAR_29) / sizeof(VAR_29[0]));
 if (VAR_18 == ((void*)0))
 {
  return VAR_8;
 }

 FUNC_17(&VAR_21, sizeof(VAR_21));
 VAR_22 = &VAR_21.Access;

 VAR_22->IsIPv6 = 1;

 FUNC_13(VAR_21.HubName, sizeof(VAR_21.HubName), VAR_19->HubName);
 FUNC_16(VAR_22->Note, sizeof(VAR_22->Note), FUNC_5(VAR_18, "MEMO"));
 VAR_22->Active = 1;
 VAR_22->Priority = FUNC_3(VAR_18, "PRIORITY");
 VAR_22->Discard = FUNC_14(FUNC_4(VAR_18, "[pass|discard]")) ? 0 : 1;
 FUNC_13(VAR_22->SrcUsername, sizeof(VAR_22->SrcUsername), FUNC_4(VAR_18, "SRCUSERNAME"));
 FUNC_13(VAR_22->DestUsername, sizeof(VAR_22->DestUsername), FUNC_4(VAR_18, "DESTUSERNAME"));
 FUNC_9(FUNC_4(VAR_18, "SRCMAC"), &VAR_22->CheckSrcMac, VAR_22->SrcMacAddress, VAR_22->SrcMacMask);
 FUNC_9(FUNC_4(VAR_18, "DESTMAC"), &VAR_22->CheckDstMac, VAR_22->DstMacAddress, VAR_22->DstMacMask);

 FUNC_17(&VAR_23, sizeof(VAR_23));
 FUNC_17(&VAR_24, sizeof(VAR_24));

 FUNC_8(FUNC_4(VAR_18, "SRCIP"), &VAR_23, &VAR_24);
 FUNC_6(&VAR_22->SrcIpAddress6, &VAR_23);
 FUNC_6(&VAR_22->SrcSubnetMask6, &VAR_24);

 FUNC_8(FUNC_4(VAR_18, "DESTIP"), &VAR_23, &VAR_24);
 FUNC_6(&VAR_22->DestIpAddress6, &VAR_23);
 FUNC_6(&VAR_22->DestSubnetMask6, &VAR_24);

 VAR_22->Protocol = FUNC_15(FUNC_4(VAR_18, "PROTOCOL"));
 FUNC_10(FUNC_4(VAR_18, "SRCPORT"), &VAR_22->SrcPortStart, &VAR_22->SrcPortEnd);
 FUNC_10(FUNC_4(VAR_18, "DESTPORT"), &VAR_22->DestPortStart, &VAR_22->DestPortEnd);
 FUNC_11(FUNC_4(VAR_18, "TCPSTATE"), &VAR_22->CheckTcpState, &VAR_22->Established);
 VAR_22->Delay = FUNC_3(VAR_18, "DELAY");
 VAR_22->Jitter = FUNC_3(VAR_18, "JITTER");
 VAR_22->Loss = FUNC_3(VAR_18, "LOSS");
 FUNC_13(VAR_22->RedirectUrl, sizeof(VAR_22->RedirectUrl), FUNC_4(VAR_18, "REDIRECTURL"));


 VAR_20 = FUNC_12(VAR_19->Rpc, &VAR_21);

 if (VAR_20 != VAR_10)
 {

  FUNC_0(VAR_14, VAR_20);
  FUNC_1(VAR_18);
  return VAR_20;
 }

 FUNC_1(VAR_18);

 return 0;
}
