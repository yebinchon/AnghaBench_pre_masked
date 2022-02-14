
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {int Active; int Discard; int Established; int CheckTcpState; int DestPortEnd; int DestPortStart; int SrcPortEnd; int SrcPortStart; int Protocol; int DestSubnetMask; int DestIpAddress; int SrcSubnetMask; int SrcIpAddress; int DstMacMask; int DstMacAddress; int CheckDstMac; int SrcMacMask; int SrcMacAddress; int CheckSrcMac; int DestUsername; int SrcUsername; int Priority; int Note; } ;
struct TYPE_18__ {char* member_0; int member_1; unsigned long member_2; } ;
struct TYPE_17__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_16__ {char* member_0; TYPE_5__* member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_15__ {int Rpc; int * HubName; } ;
struct TYPE_14__ {int HubName; TYPE_6__ Access; } ;
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
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (int ,int,int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_4__*,int ) ;

UINT FUNC_18(CONSOLE *VAR_10, char *VAR_11, wchar_t *VAR_12, void *VAR_13)
{
 LIST *VAR_14;
 PS *VAR_15 = (PS *)VAR_13;
 UINT VAR_16 = 0;
 RPC_ADD_ACCESS VAR_17;
 ACCESS *VAR_18;

 CMD_EVAL_MIN_MAX VAR_19 =
 {
  "CMD_AccessAdd_Eval_PRIORITY", 1, 4294967295UL,
 };
 PARAM VAR_20[] =
 {

  {"[pass|discard]", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_TYPE"), *VAR_3, ((void*)0)},
  {"MEMO", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_MEMO"), ((void*)0), ((void*)0)},
  {"PRIORITY", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_PRIORITY"), *VAR_2, &VAR_19},
  {"SRCUSERNAME", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_SRCUSERNAME"), ((void*)0), ((void*)0)},
  {"DESTUSERNAME", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_DESTUSERNAME"), ((void*)0), ((void*)0)},
  {"SRCMAC", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_SRCMAC"), *VAR_1, ((void*)0)},
  {"DESTMAC", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_DESTMAC"), *VAR_1, ((void*)0)},
  {"SRCIP", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_SRCIP"), *VAR_0, ((void*)0)},
  {"DESTIP", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_DESTIP"), *VAR_0, ((void*)0)},
  {"PROTOCOL", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_PROTOCOL"), *VAR_5, ((void*)0)},
  {"SRCPORT", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_SRCPORT"), *VAR_4, ((void*)0)},
  {"DESTPORT", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_DESTPORT"), *VAR_4, ((void*)0)},
  {"TCPSTATE", VAR_7, FUNC_16("CMD_AccessAdd_Prompt_TCPSTATE"), *VAR_6, ((void*)0)},
 };


 if (VAR_15->HubName == ((void*)0))
 {
  VAR_10->Write(VAR_10, FUNC_16("CMD_Hub_Not_Selected"));
  return VAR_8;
 }

 VAR_14 = FUNC_5(VAR_10, VAR_11, VAR_12, VAR_20, sizeof(VAR_20) / sizeof(VAR_20[0]));
 if (VAR_14 == ((void*)0))
 {
  return VAR_8;
 }

 FUNC_15(&VAR_17, sizeof(VAR_17));
 VAR_18 = &VAR_17.Access;

 FUNC_11(VAR_17.HubName, sizeof(VAR_17.HubName), VAR_15->HubName);
 FUNC_14(VAR_18->Note, sizeof(VAR_18->Note), FUNC_4(VAR_14, "MEMO"));
 VAR_18->Active = 1;
 VAR_18->Priority = FUNC_2(VAR_14, "PRIORITY");
 VAR_18->Discard = FUNC_12(FUNC_3(VAR_14, "[pass|discard]")) ? 0 : 1;
 FUNC_11(VAR_18->SrcUsername, sizeof(VAR_18->SrcUsername), FUNC_3(VAR_14, "SRCUSERNAME"));
 FUNC_11(VAR_18->DestUsername, sizeof(VAR_18->DestUsername), FUNC_3(VAR_14, "DESTUSERNAME"));
 FUNC_7(FUNC_3(VAR_14, "SRCMAC"), &VAR_18->CheckSrcMac, VAR_18->SrcMacAddress, VAR_18->SrcMacMask);
 FUNC_7(FUNC_3(VAR_14, "DESTMAC"), &VAR_18->CheckDstMac, VAR_18->DstMacAddress, VAR_18->DstMacMask);
 FUNC_6(FUNC_3(VAR_14, "SRCIP"), &VAR_18->SrcIpAddress, &VAR_18->SrcSubnetMask);
 FUNC_6(FUNC_3(VAR_14, "DESTIP"), &VAR_18->DestIpAddress, &VAR_18->DestSubnetMask);
 VAR_18->Protocol = FUNC_13(FUNC_3(VAR_14, "PROTOCOL"));
 FUNC_8(FUNC_3(VAR_14, "SRCPORT"), &VAR_18->SrcPortStart, &VAR_18->SrcPortEnd);
 FUNC_8(FUNC_3(VAR_14, "DESTPORT"), &VAR_18->DestPortStart, &VAR_18->DestPortEnd);
 FUNC_9(FUNC_3(VAR_14, "TCPSTATE"), &VAR_18->CheckTcpState, &VAR_18->Established);


 VAR_16 = FUNC_10(VAR_15->Rpc, &VAR_17);

 if (VAR_16 != VAR_9)
 {

  FUNC_0(VAR_10, VAR_16);
  FUNC_1(VAR_14);
  return VAR_16;
 }

 FUNC_1(VAR_14);

 return 0;
}
