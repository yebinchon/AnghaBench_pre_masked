
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int AccountName; } ;
struct TYPE_19__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_18__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_17__ {int Rpc; int * HubName; } ;
struct TYPE_16__ {int * ServerCert; TYPE_7__* ClientOption; int HubName; } ;
typedef TYPE_1__ RPC_CREATE_LINK ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef int CLIENT_OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 TYPE_7__* FUNC_12 (int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_4__*,int ) ;
 int FUNC_15 (TYPE_4__*,int ) ;

UINT FUNC_16(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PS *VAR_11 = (PS *)VAR_9;
 UINT VAR_12 = 0;
 RPC_CREATE_LINK VAR_13;
 X *VAR_14;

 PARAM VAR_15[] =
 {

  {"[name]", &VAR_2, FUNC_13("CMD_CascadeCreate_Prompt_Name"), VAR_1, ((void*)0)},
  {"LOADCERT", &VAR_2, FUNC_13("CMD_LOADCERTPATH"), VAR_0, ((void*)0)},
 };


 if (VAR_11->HubName == ((void*)0))
 {
  VAR_6->Write(VAR_6, FUNC_13("CMD_Hub_Not_Selected"));
  return VAR_4;
 }

 VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_4;
 }

 VAR_14 = FUNC_1(FUNC_5(VAR_10, "LOADCERT"));
 if (VAR_14 == ((void*)0))
 {
  FUNC_2(VAR_10);
  VAR_6->Write(VAR_6, FUNC_13("CMD_LOADCERT_FAILED"));
  return VAR_3;
 }

 FUNC_11(&VAR_13, sizeof(VAR_13));
 FUNC_9(VAR_13.HubName, sizeof(VAR_13.HubName), VAR_11->HubName);
 VAR_13.ClientOption = FUNC_12(sizeof(CLIENT_OPTION));
 FUNC_10(VAR_13.ClientOption->AccountName, sizeof(VAR_13.ClientOption->AccountName), FUNC_5(VAR_10, "[name]"));


 VAR_12 = FUNC_7(VAR_11->Rpc, &VAR_13);

 if (VAR_12 != VAR_5)
 {

  FUNC_0(VAR_6, VAR_12);
  FUNC_2(VAR_10);
  FUNC_4(VAR_14);
  return VAR_12;
 }
 else
 {

  if (VAR_13.ServerCert != ((void*)0))
  {
   FUNC_4(VAR_13.ServerCert);
  }
  VAR_13.ServerCert = VAR_14;

  VAR_12 = FUNC_8(VAR_11->Rpc, &VAR_13);
  if (VAR_12 != VAR_5)
  {

   FUNC_0(VAR_6, VAR_12);
   FUNC_2(VAR_10);
   return VAR_12;
  }

  FUNC_3(&VAR_13);
 }

 FUNC_2(VAR_10);

 return 0;
}
