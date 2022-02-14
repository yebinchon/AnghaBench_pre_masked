
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int (* Write ) (TYPE_4__*,char*) ;} ;
struct TYPE_19__ {char* member_0; char* member_2; int * member_4; int * member_3; int * member_1; } ;
struct TYPE_18__ {int CapsList; int Rpc; } ;
struct TYPE_17__ {int Active; int Online; int TapMode; int HubName; int DeviceName; } ;
typedef TYPE_1__ RPC_LOCALBRIDGE ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (TYPE_4__*,char*) ;
 int FUNC_12 (TYPE_4__*,char*) ;
 int FUNC_13 (TYPE_4__*,char*) ;
 int FUNC_14 (TYPE_4__*,char*) ;
 int FUNC_15 (TYPE_4__*,char*) ;

UINT FUNC_16(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_LOCALBRIDGE VAR_11;

 PARAM VAR_12[] =
 {

  {"[hubname]", VAR_1, FUNC_9("CMD_BridgeCreate_PROMPT_HUBNAME"), VAR_0, ((void*)0)},
  {"DEVICE", VAR_1, FUNC_9("CMD_BridgeCreate_PROMPT_DEVICE"), VAR_0, ((void*)0)},
  {"TAP", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_8(&VAR_11, sizeof(VAR_11));

 VAR_11.Active = 1;
 FUNC_7(VAR_11.DeviceName, sizeof(VAR_11.DeviceName), FUNC_3(VAR_8, "DEVICE"));
 FUNC_7(VAR_11.HubName, sizeof(VAR_11.HubName), FUNC_3(VAR_8, "[hubname]"));
 VAR_11.Online = 1;
 VAR_11.TapMode = FUNC_4(VAR_8, "TAP");


 VAR_10 = FUNC_6(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_3)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }
 else
 {
  VAR_4->Write(VAR_4, FUNC_9("SM_BRIDGE_INTEL"));
  VAR_4->Write(VAR_4, L"");

  if (FUNC_2(VAR_9->CapsList, "b_is_in_vm"))
  {

   VAR_4->Write(VAR_4, FUNC_9("D_SM_VMBRIDGE@CAPTION"));
   VAR_4->Write(VAR_4, FUNC_9("D_SM_VMBRIDGE@S_1"));
   VAR_4->Write(VAR_4, FUNC_9("D_SM_VMBRIDGE@S_2"));
   VAR_4->Write(VAR_4, L"");
  }
 }

 FUNC_1(VAR_8);

 return 0;
}
