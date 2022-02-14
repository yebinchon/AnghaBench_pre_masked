
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int s ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {char* CustomHttpHeader; int AccountName; } ;
struct TYPE_22__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_21__ {char* member_0; int * member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_20__ {int Rpc; int * HubName; } ;
struct TYPE_19__ {TYPE_7__* ClientOption; int HubName; } ;
struct TYPE_18__ {scalar_t__ NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ RPC_CREATE_LINK ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int HTTP_HEADER ;
typedef TYPE_5__ CONSOLE ;
typedef int CLIENT_OPTION ;


 int FUNC_0 (int *,int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,char) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (int *,char*) ;
 char* FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int VAR_6 ;
 int * FUNC_11 (char*,char*,char*) ;
 int * FUNC_12 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 TYPE_1__* FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_15 (int ,TYPE_2__*) ;
 int FUNC_16 (char*,int,char*) ;
 int FUNC_17 (int ,int,int *) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ,int,int ) ;
 int FUNC_21 (TYPE_2__*,int) ;
 TYPE_7__* FUNC_22 (int) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (TYPE_5__*,int ) ;

UINT FUNC_25(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PS *VAR_12 = (PS *)VAR_10;
 UINT VAR_13 = VAR_3;
 RPC_CREATE_LINK VAR_14;


 PARAM VAR_15[] =
 {

  {"[name]", &VAR_1, FUNC_23("CMD_CascadeCreate_Prompt_Name"), *VAR_0, ((void*)0)},
  {"NAME", &VAR_1, FUNC_23("CMD_CascadeHttpHeader_Prompt_Name"), *VAR_0, ((void*)0)},
  {"DATA", &VAR_1, FUNC_23("CMD_CascadeHttpHeader_Prompt_Data"), ((void*)0), ((void*)0)},
 };


 if (VAR_12->HubName == ((void*)0))
 {
  VAR_7->Write(VAR_7, FUNC_23("CMD_Hub_Not_Selected"));
  return VAR_2;
 }


 VAR_11 = FUNC_12(VAR_7, VAR_8, VAR_9, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_2;
 }


 FUNC_21(&VAR_14, sizeof(VAR_14));
 FUNC_17(VAR_14.HubName, sizeof(VAR_14.HubName), VAR_12->HubName);
 VAR_14.ClientOption = FUNC_22(sizeof(CLIENT_OPTION));
 FUNC_20(VAR_14.ClientOption->AccountName, sizeof(VAR_14.ClientOption->AccountName), FUNC_10(VAR_11, "[name]"));
 VAR_13 = FUNC_14(VAR_12->Rpc, &VAR_14);

 if (VAR_13 == VAR_3)
 {
  UINT VAR_16 = 0;
  TOKEN_LIST *VAR_17 = ((void*)0);
  HTTP_HEADER *VAR_18 = ((void*)0);
  char *VAR_19 = FUNC_9(VAR_11, "NAME");

  FUNC_19(VAR_19);

  VAR_18 = FUNC_11("", "", "");

  VAR_17 = FUNC_13(VAR_14.ClientOption->CustomHttpHeader, "\r\n");
  for (VAR_16 = 0; VAR_16 < VAR_17->NumTokens; VAR_16++)
  {
   FUNC_0(VAR_18, VAR_17->Token[VAR_16]);
  }
  FUNC_7(VAR_17);

  if (FUNC_8(VAR_18, VAR_19) == ((void*)0))
  {
   char VAR_20[VAR_6];
   FUNC_3(VAR_20, sizeof(VAR_20), "%s: %s\r\n", VAR_19, FUNC_9(VAR_11, "DATA"));
   FUNC_2(VAR_20, ' ');

   if ((FUNC_18(VAR_20) + FUNC_18(VAR_14.ClientOption->CustomHttpHeader)) < sizeof(VAR_14.ClientOption->CustomHttpHeader)) {
    FUNC_16(VAR_14.ClientOption->CustomHttpHeader, sizeof(VAR_20), VAR_20);
    VAR_13 = FUNC_15(VAR_12->Rpc, &VAR_14);
   }
   else
   {

    VAR_13 = VAR_5;
   }
  }
  else
  {

   VAR_13 = VAR_4;
  }

  FUNC_4(VAR_18);
 }

 if (VAR_13 != VAR_3)
 {

  FUNC_1(VAR_7, VAR_13);
 }

 FUNC_6(&VAR_14);


 FUNC_5(VAR_11);

 return VAR_13;
}
