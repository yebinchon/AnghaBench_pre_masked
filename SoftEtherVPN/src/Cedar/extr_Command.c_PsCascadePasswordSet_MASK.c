
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int AccountName; } ;
struct TYPE_21__ {int (* Write ) (TYPE_5__*,int *) ;} ;
struct TYPE_20__ {char* member_0; int * member_4; int * member_3; int * member_2; int member_1; } ;
struct TYPE_19__ {char* HubName; int Rpc; } ;
struct TYPE_18__ {TYPE_1__* ClientAuth; TYPE_8__* ClientOption; int HubName; } ;
struct TYPE_17__ {int PlainPassword; int AuthType; int Username; int HashedPassword; } ;
typedef TYPE_2__ RPC_CREATE_LINK ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;
typedef int CLIENT_OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int ,char*) ;
 int * FUNC_6 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 TYPE_8__* FUNC_13 (int) ;
 int * FUNC_14 (char*) ;
 int FUNC_15 (TYPE_5__*,int *) ;
 int FUNC_16 (TYPE_5__*,int *) ;

UINT FUNC_17(CONSOLE *VAR_8, char *VAR_9, wchar_t *VAR_10, void *VAR_11)
{
 LIST *VAR_12;
 PS *VAR_13 = (PS *)VAR_11;
 UINT VAR_14 = 0;
 RPC_CREATE_LINK VAR_15;

 PARAM VAR_16[] =
 {
  {"[name]", &VAR_3, FUNC_14("CMD_CascadeCreate_Prompt_Name"), VAR_2, ((void*)0)},
  {"PASSWORD", &VAR_4, ((void*)0), ((void*)0), ((void*)0)},
  {"TYPE", &VAR_3, FUNC_14("CMD_CascadePasswordSet_Prompt_Type"), VAR_2, ((void*)0)},
 };


 if (VAR_13->HubName == ((void*)0))
 {
  VAR_8->Write(VAR_8, FUNC_14("CMD_Hub_Not_Selected"));
  return VAR_6;
 }

 VAR_12 = FUNC_6(VAR_8, VAR_9, VAR_10, VAR_16, sizeof(VAR_16) / sizeof(VAR_16[0]));
 if (VAR_12 == ((void*)0))
 {
  return VAR_6;
 }

 FUNC_12(&VAR_15, sizeof(VAR_15));
 FUNC_10(VAR_15.HubName, sizeof(VAR_15.HubName), VAR_13->HubName);
 VAR_15.ClientOption = FUNC_13(sizeof(CLIENT_OPTION));
 FUNC_11(VAR_15.ClientOption->AccountName, sizeof(VAR_15.ClientOption->AccountName), FUNC_4(VAR_12, "[name]"));


 VAR_14 = FUNC_7(VAR_13->Rpc, &VAR_15);

 if (VAR_14 != VAR_7)
 {

  FUNC_0(VAR_8, VAR_14);
  FUNC_1(VAR_12);
  return VAR_14;
 }
 else
 {

  char *VAR_17 = FUNC_3(VAR_12, "TYPE");

  if (FUNC_9("standard", VAR_17))
  {
   VAR_15.ClientAuth->AuthType = VAR_0;
   FUNC_5(VAR_15.ClientAuth->HashedPassword, VAR_15.ClientAuth->Username,
    FUNC_3(VAR_12, "PASSWORD"));
  }
  else if (FUNC_9("radius", VAR_17) || FUNC_9("ntdomain", VAR_17))
  {
   VAR_15.ClientAuth->AuthType = VAR_1;

   FUNC_10(VAR_15.ClientAuth->PlainPassword, sizeof(VAR_15.ClientAuth->PlainPassword),
    FUNC_3(VAR_12, "PASSWORD"));
  }
  else
  {

   VAR_8->Write(VAR_8, FUNC_14("CMD_CascadePasswordSet_Type_Invalid"));
   FUNC_2(&VAR_15);
   VAR_14 = VAR_6;
   FUNC_0(VAR_8, VAR_14);
   FUNC_1(VAR_12);
   return VAR_5;
  }

  VAR_14 = FUNC_8(VAR_13->Rpc, &VAR_15);
  if (VAR_14 != VAR_7)
  {

   FUNC_0(VAR_8, VAR_14);
   FUNC_1(VAR_12);
   return VAR_14;
  }

  FUNC_2(&VAR_15);
 }

 FUNC_1(VAR_12);

 return 0;
}
