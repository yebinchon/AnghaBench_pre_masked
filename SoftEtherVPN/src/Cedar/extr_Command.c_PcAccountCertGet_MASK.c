
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_18__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_17__ {int RemoteClient; } ;
struct TYPE_16__ {TYPE_1__* ClientAuth; int AccountName; } ;
struct TYPE_15__ {scalar_t__ AuthType; int * ClientX; } ;
typedef TYPE_2__ RPC_CLIENT_GET_ACCOUNT ;
typedef TYPE_3__ PC ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_5__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (TYPE_5__*,int ) ;

UINT FUNC_12(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PC *VAR_11 = (PC *)VAR_9;
 UINT VAR_12 = VAR_5;
 RPC_CLIENT_GET_ACCOUNT VAR_13;

 PARAM VAR_14[] =
 {
  {"[name]", &VAR_2, FUNC_9("CMD_CascadeCreate_Prompt_Name"), VAR_1, ((void*)0)},
  {"SAVECERT", &VAR_2, FUNC_9("CMD_SAVECERTPATH"), VAR_1, ((void*)0)},
 };


 VAR_10 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_4;
 }


 FUNC_8(&VAR_13, sizeof(VAR_13));

 FUNC_6(VAR_13.AccountName, sizeof(VAR_13.AccountName), FUNC_4(VAR_10, "[name]"));

 VAR_12 = FUNC_0(VAR_11->RemoteClient, &VAR_13);

 if (VAR_12 == VAR_5)
 {
  if (VAR_13.ClientAuth->AuthType != VAR_0)
  {
   VAR_6->Write(VAR_6, FUNC_9("CMD_CascadeCertSet_Not_Auth_Cert"));
   VAR_12 = VAR_3;
  }
  else if (VAR_13.ClientAuth->ClientX == ((void*)0))
  {
   VAR_6->Write(VAR_6, FUNC_9("CMD_CascadeCertSet_Cert_Not_Exists"));
   VAR_12 = VAR_3;
  }
  else
  {
   FUNC_7(VAR_13.ClientAuth->ClientX, FUNC_4(VAR_10, "SAVECERT"), 1);
  }
 }

 FUNC_1(&VAR_13);

 if (VAR_12 != VAR_5)
 {

  FUNC_2(VAR_6, VAR_12);
 }


 FUNC_3(VAR_10);

 return VAR_12;
}
