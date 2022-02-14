
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {int Deny; int Masked; int Priority; int SubnetMask; int IpAddress; } ;
struct TYPE_22__ {char* member_0; int member_1; unsigned long member_2; } ;
struct TYPE_21__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_20__ {char* member_0; TYPE_5__* member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_19__ {int Rpc; int * HubName; } ;
struct TYPE_18__ {int o; int HubName; } ;
typedef TYPE_1__ RPC_AC_LIST ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int IP ;
typedef TYPE_4__ CONSOLE ;
typedef TYPE_5__ CMD_EVAL_MIN_MAX ;
typedef TYPE_6__ AC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,TYPE_6__*) ;
 int * FUNC_7 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 int FUNC_8 (char*,int *,int *) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,int,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*,int) ;
 TYPE_6__* FUNC_15 (int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_4__*,int ) ;

UINT FUNC_18(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PS *VAR_11 = (PS *)VAR_9;
 UINT VAR_12 = 0;
 RPC_AC_LIST VAR_13;

 CMD_EVAL_MIN_MAX VAR_14 =
 {
  "CMD_AcAdd6_Eval_PRIORITY", 1, 4294967295UL,
 };
 PARAM VAR_15[] =
 {

  {"[allow|deny]", VAR_3, FUNC_16("CMD_AcAdd6_Prompt_AD"), VAR_2, ((void*)0)},
  {"PRIORITY", VAR_3, FUNC_16("CMD_AcAdd6_Prompt_PRIORITY"), VAR_1, &VAR_14},
  {"IP", VAR_3, FUNC_16("CMD_AcAdd6_Prompt_IP"), VAR_0, ((void*)0)},
 };


 if (VAR_11->HubName == ((void*)0))
 {
  VAR_6->Write(VAR_6, FUNC_16("CMD_Hub_Not_Selected"));
  return VAR_4;
 }

 VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_8, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_4;
 }

 FUNC_14(&VAR_13, sizeof(VAR_13));
 FUNC_12(VAR_13.HubName, sizeof(VAR_13.HubName), VAR_11->HubName);


 VAR_12 = FUNC_9(VAR_11->Rpc, &VAR_13);

 if (VAR_12 != VAR_5)
 {

  FUNC_0(VAR_6, VAR_12);
  FUNC_2(VAR_10);
  return VAR_12;
 }
 else
 {

  AC *VAR_16 = FUNC_15(sizeof(AC));
  char *VAR_17 = FUNC_5(VAR_10, "[allow|deny]");
  IP VAR_18, VAR_19;

  if (FUNC_11("deny", VAR_17))
  {
   VAR_16->Deny = 1;
  }

  FUNC_8(FUNC_5(VAR_10, "IP"), &VAR_18, &VAR_19);
  FUNC_1(&VAR_16->IpAddress, &VAR_18, sizeof(IP));

  if (FUNC_13(&VAR_19) == 128)
  {
   VAR_16->Masked = 0;
  }
  else
  {
   VAR_16->Masked = 1;
   FUNC_1(&VAR_16->SubnetMask, &VAR_19, sizeof(IP));
  }

  VAR_16->Priority = FUNC_4(VAR_10, "PRIORITY");

  FUNC_6(VAR_13.o, VAR_16);

  VAR_12 = FUNC_10(VAR_11->Rpc, &VAR_13);
  if (VAR_12 != VAR_5)
  {

   FUNC_0(VAR_6, VAR_12);
   FUNC_2(VAR_10);
   return VAR_12;
  }
 }

 FUNC_3(&VAR_13);

 FUNC_2(VAR_10);

 return 0;
}
