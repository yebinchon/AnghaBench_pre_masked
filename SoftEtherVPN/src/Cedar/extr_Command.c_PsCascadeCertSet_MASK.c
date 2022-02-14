
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int AccountName; } ;
struct TYPE_21__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_20__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_19__ {int Rpc; int * HubName; } ;
struct TYPE_18__ {TYPE_1__* ClientAuth; TYPE_7__* ClientOption; int HubName; } ;
struct TYPE_17__ {int * ClientK; int * ClientX; int AuthType; } ;
typedef TYPE_2__ RPC_CREATE_LINK ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int K ;
typedef TYPE_5__ CONSOLE ;
typedef int CLIENT_OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int **,int **,int ,int ) ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int ,int,int *) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 TYPE_7__* FUNC_13 (int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (TYPE_5__*,int ) ;

UINT FUNC_16(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PS *VAR_12 = (PS *)VAR_10;
 UINT VAR_13 = 0;
 RPC_CREATE_LINK VAR_14;
 X *VAR_15;
 K *VAR_16;

 PARAM VAR_17[] =
 {

  {"[name]", &VAR_3, FUNC_14("CMD_CascadeCreate_Prompt_Name"), VAR_2, ((void*)0)},
  {"LOADCERT", &VAR_3, FUNC_14("CMD_LOADCERTPATH"), VAR_1, ((void*)0)},
  {"LOADKEY", &VAR_3, FUNC_14("CMD_LOADKEYPATH"), VAR_1, ((void*)0)},
 };


 if (VAR_12->HubName == ((void*)0))
 {
  VAR_7->Write(VAR_7, FUNC_14("CMD_Hub_Not_Selected"));
  return VAR_5;
 }

 VAR_11 = FUNC_7(VAR_7, VAR_8, VAR_9, VAR_17, sizeof(VAR_17) / sizeof(VAR_17[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_5;
 }

 if (FUNC_0(VAR_7, &VAR_15, &VAR_16, FUNC_6(VAR_11, "LOADCERT"), FUNC_6(VAR_11, "LOADKEY")) == 0)
 {
  return VAR_4;
 }

 FUNC_12(&VAR_14, sizeof(VAR_14));
 FUNC_10(VAR_14.HubName, sizeof(VAR_14.HubName), VAR_12->HubName);
 VAR_14.ClientOption = FUNC_13(sizeof(CLIENT_OPTION));
 FUNC_11(VAR_14.ClientOption->AccountName, sizeof(VAR_14.ClientOption->AccountName), FUNC_6(VAR_11, "[name]"));


 VAR_13 = FUNC_8(VAR_12->Rpc, &VAR_14);

 if (VAR_13 != VAR_6)
 {

  FUNC_5(VAR_15);
  FUNC_2(VAR_16);
  FUNC_1(VAR_7, VAR_13);
  FUNC_3(VAR_11);
  return VAR_13;
 }
 else
 {

  VAR_14.ClientAuth->AuthType = VAR_0;
  if (VAR_14.ClientAuth->ClientX != ((void*)0))
  {
   FUNC_5(VAR_14.ClientAuth->ClientX);
  }
  if (VAR_14.ClientAuth->ClientK != ((void*)0))
  {
   FUNC_2(VAR_14.ClientAuth->ClientK);
  }

  VAR_14.ClientAuth->ClientX = VAR_15;
  VAR_14.ClientAuth->ClientK = VAR_16;

  VAR_13 = FUNC_9(VAR_12->Rpc, &VAR_14);
  if (VAR_13 != VAR_6)
  {

   FUNC_1(VAR_7, VAR_13);
   FUNC_3(VAR_11);
   return VAR_13;
  }

  FUNC_4(&VAR_14);
 }

 FUNC_3(VAR_11);

 return 0;
}
