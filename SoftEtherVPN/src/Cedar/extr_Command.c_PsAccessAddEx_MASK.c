
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int Active; int Discard; int RedirectUrl; void* Loss; void* Jitter; void* Delay; int Established; int CheckTcpState; int DestPortEnd; int DestPortStart; int SrcPortEnd; int SrcPortStart; int Protocol; int DestSubnetMask; int DestIpAddress; int SrcSubnetMask; int SrcIpAddress; int DstMacMask; int DstMacAddress; int CheckDstMac; int SrcMacMask; int SrcMacAddress; int CheckSrcMac; int DestUsername; int SrcUsername; void* Priority; int Note; } ;
struct TYPE_19__ {char* member_0; int member_1; unsigned long member_2; } ;
struct TYPE_18__ {int (* Write ) (TYPE_4__*,int *) ;} ;
struct TYPE_17__ {char* member_0; TYPE_5__* member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_16__ {int Rpc; int * HubName; int CapsList; } ;
struct TYPE_15__ {int HubName; TYPE_6__ Access; } ;
typedef TYPE_1__ RPC_ADD_ACCESS ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef TYPE_5__ CMD_EVAL_MIN_MAX ;
typedef TYPE_6__ ACCESS ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
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
 int * FUNC_6 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *,int ,int ) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *) ;
 scalar_t__ FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,int,int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int,int ) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int * FUNC_17 (scalar_t__) ;
 int * FUNC_18 (char*) ;
 int FUNC_19 (TYPE_4__*,int *) ;
 int FUNC_20 (TYPE_4__*,int *) ;

UINT FUNC_21(CONSOLE *VAR_14, char *VAR_15, wchar_t *VAR_16, void *VAR_17)
{
 LIST *VAR_18;
 PS *VAR_19 = (PS *)VAR_17;
 UINT VAR_20 = 0;
 RPC_ADD_ACCESS VAR_21;
 ACCESS *VAR_22;

 CMD_EVAL_MIN_MAX VAR_23 =
 {
  "CMD_AccessAdd_Eval_PRIORITY", 1, 4294967295UL,
 };
 CMD_EVAL_MIN_MAX VAR_24 =
 {
  "CMD_AccessAddEx_Eval_DELAY", 0, VAR_11,
 };
 CMD_EVAL_MIN_MAX VAR_25 =
 {
  "CMD_AccessAddEx_Eval_JITTER", 0, VAR_12,
 };
 CMD_EVAL_MIN_MAX VAR_26 =
 {
  "CMD_AccessAddEx_Eval_LOSS", 0, VAR_13,
 };
 PARAM VAR_27[] =
 {

  {"[pass|discard]", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_TYPE"), VAR_3, ((void*)0)},
  {"MEMO", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_MEMO"), ((void*)0), ((void*)0)},
  {"PRIORITY", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_PRIORITY"), VAR_2, &VAR_23},
  {"SRCUSERNAME", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_SRCUSERNAME"), ((void*)0), ((void*)0)},
  {"DESTUSERNAME", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_DESTUSERNAME"), ((void*)0), ((void*)0)},
  {"SRCMAC", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_SRCMAC"), VAR_1, ((void*)0)},
  {"DESTMAC", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_DESTMAC"), VAR_1, ((void*)0)},
  {"SRCIP", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_SRCIP"), VAR_0, ((void*)0)},
  {"DESTIP", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_DESTIP"), VAR_0, ((void*)0)},
  {"PROTOCOL", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_PROTOCOL"), VAR_5, ((void*)0)},
  {"SRCPORT", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_SRCPORT"), VAR_4, ((void*)0)},
  {"DESTPORT", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_DESTPORT"), VAR_4, ((void*)0)},
  {"TCPSTATE", VAR_7, FUNC_18("CMD_AccessAdd_Prompt_TCPSTATE"), VAR_6, ((void*)0)},
  {"DELAY", VAR_7, FUNC_18("CMD_AccessAddEx_Prompt_DELAY"), VAR_2, &VAR_24},
  {"JITTER", VAR_7, FUNC_18("CMD_AccessAddEx_Prompt_JITTER"), VAR_2, &VAR_25},
  {"LOSS", VAR_7, FUNC_18("CMD_AccessAddEx_Prompt_LOSS"), VAR_2, &VAR_26},
  {"REDIRECTURL", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };


 if (VAR_19->HubName == ((void*)0))
 {
  VAR_14->Write(VAR_14, FUNC_18("CMD_Hub_Not_Selected"));
  return VAR_8;
 }


 if (FUNC_2(VAR_19->CapsList, "b_support_ex_acl") == 0)
 {
  VAR_14->Write(VAR_14, FUNC_17(VAR_9));
  return VAR_9;
 }

 VAR_18 = FUNC_6(VAR_14, VAR_15, VAR_16, VAR_27, sizeof(VAR_27) / sizeof(VAR_27[0]));
 if (VAR_18 == ((void*)0))
 {
  return VAR_8;
 }

 FUNC_16(&VAR_21, sizeof(VAR_21));
 VAR_22 = &VAR_21.Access;

 FUNC_12(VAR_21.HubName, sizeof(VAR_21.HubName), VAR_19->HubName);
 FUNC_15(VAR_22->Note, sizeof(VAR_22->Note), FUNC_5(VAR_18, "MEMO"));
 VAR_22->Active = 1;
 VAR_22->Priority = FUNC_3(VAR_18, "PRIORITY");
 VAR_22->Discard = FUNC_13(FUNC_4(VAR_18, "[pass|discard]")) ? 0 : 1;
 FUNC_12(VAR_22->SrcUsername, sizeof(VAR_22->SrcUsername), FUNC_4(VAR_18, "SRCUSERNAME"));
 FUNC_12(VAR_22->DestUsername, sizeof(VAR_22->DestUsername), FUNC_4(VAR_18, "DESTUSERNAME"));
 FUNC_8(FUNC_4(VAR_18, "SRCMAC"), &VAR_22->CheckSrcMac, VAR_22->SrcMacAddress, VAR_22->SrcMacMask);
 FUNC_8(FUNC_4(VAR_18, "DESTMAC"), &VAR_22->CheckDstMac, VAR_22->DstMacAddress, VAR_22->DstMacMask);
 FUNC_7(FUNC_4(VAR_18, "SRCIP"), &VAR_22->SrcIpAddress, &VAR_22->SrcSubnetMask);
 FUNC_7(FUNC_4(VAR_18, "DESTIP"), &VAR_22->DestIpAddress, &VAR_22->DestSubnetMask);
 VAR_22->Protocol = FUNC_14(FUNC_4(VAR_18, "PROTOCOL"));
 FUNC_9(FUNC_4(VAR_18, "SRCPORT"), &VAR_22->SrcPortStart, &VAR_22->SrcPortEnd);
 FUNC_9(FUNC_4(VAR_18, "DESTPORT"), &VAR_22->DestPortStart, &VAR_22->DestPortEnd);
 FUNC_10(FUNC_4(VAR_18, "TCPSTATE"), &VAR_22->CheckTcpState, &VAR_22->Established);
 VAR_22->Delay = FUNC_3(VAR_18, "DELAY");
 VAR_22->Jitter = FUNC_3(VAR_18, "JITTER");
 VAR_22->Loss = FUNC_3(VAR_18, "LOSS");
 FUNC_12(VAR_22->RedirectUrl, sizeof(VAR_22->RedirectUrl), FUNC_4(VAR_18, "REDIRECTURL"));


 VAR_20 = FUNC_11(VAR_19->Rpc, &VAR_21);

 if (VAR_20 != VAR_10)
 {

  FUNC_0(VAR_14, VAR_20);
  FUNC_1(VAR_18);
  return VAR_20;
 }

 FUNC_1(VAR_18);

 return 0;
}
