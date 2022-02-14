
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {char* member_0; int * member_4; int * member_3; int * member_2; int member_1; } ;
struct TYPE_11__ {int Rpc; } ;
struct TYPE_10__ {scalar_t__ ServerType; int Online; int SecurePassword; int HashedPassword; scalar_t__ HubType; int HubName; } ;
typedef TYPE_1__ RPC_SERVER_INFO ;
typedef TYPE_1__ RPC_CREATE_HUB ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int *,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int *,char*,int *,TYPE_4__*,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int * FUNC_13 (char*) ;

UINT FUNC_14(CONSOLE *VAR_9, char *VAR_10, wchar_t *VAR_11, void *VAR_12)
{
 LIST *VAR_13;
 PS *VAR_14 = (PS *)VAR_12;
 UINT VAR_15 = 0;
 RPC_CREATE_HUB VAR_16;
 char *VAR_17 = "";
 UINT VAR_18 = VAR_7;

 PARAM VAR_19[] =
 {
  {"[name]", &VAR_2, FUNC_13("CMD_HubCreate_PROMPT_NAME"), VAR_1, ((void*)0)},
  {"PASSWORD", &VAR_3, ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_13 = FUNC_6(VAR_9, VAR_10, VAR_11, VAR_19, sizeof(VAR_19) / sizeof(VAR_19[0]));
 if (VAR_13 == ((void*)0))
 {
  return VAR_4;
 }
 else
 {
  RPC_SERVER_INFO VAR_20;
  FUNC_12(&VAR_20, sizeof(VAR_20));
  if (FUNC_8(VAR_14->Rpc, &VAR_20) == VAR_5)
  {
   if (VAR_20.ServerType == VAR_8)
   {
    VAR_18 = VAR_6;
   }
   FUNC_2(&VAR_20);
  }
 }

 FUNC_12(&VAR_16, sizeof(VAR_16));

 FUNC_10(VAR_16.HubName, sizeof(VAR_16.HubName), FUNC_3(VAR_13, "[name]"));
 VAR_16.HubType = VAR_18;

 if (FUNC_5(FUNC_3(VAR_13, "PASSWORD")) == 0)
 {
  VAR_17 = FUNC_3(VAR_13, "PASSWORD");
 }

 FUNC_9(VAR_16.HashedPassword, VAR_17, FUNC_11(VAR_17));
 FUNC_4(VAR_16.SecurePassword, VAR_0, VAR_17);
 VAR_16.Online = 1;


 VAR_15 = FUNC_7(VAR_14->Rpc, &VAR_16);

 if (VAR_15 != VAR_5)
 {

  FUNC_0(VAR_9, VAR_15);
  FUNC_1(VAR_13);
  return VAR_15;
 }

 FUNC_1(VAR_13);

 return 0;
}
