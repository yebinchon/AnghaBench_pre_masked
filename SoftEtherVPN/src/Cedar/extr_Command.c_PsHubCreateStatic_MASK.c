
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {char* member_0; int * member_4; int * member_3; int * member_2; int member_1; } ;
struct TYPE_8__ {int Rpc; } ;
struct TYPE_7__ {int Online; int SecurePassword; int HashedPassword; scalar_t__ HubType; int HubName; } ;
typedef TYPE_1__ RPC_CREATE_HUB ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
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
 char* FUNC_2 (int *,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int * FUNC_11 (char*) ;

UINT FUNC_12(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PS *VAR_12 = (PS *)VAR_10;
 UINT VAR_13 = 0;
 RPC_CREATE_HUB VAR_14;
 char *VAR_15 = "";
 UINT VAR_16 = VAR_6;

 PARAM VAR_17[] =
 {
  {"[name]", &VAR_2, FUNC_11("CMD_HubCreate_PROMPT_NAME"), VAR_1, ((void*)0)},
  {"PASSWORD", &VAR_3, ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_11 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_17, sizeof(VAR_17) / sizeof(VAR_17[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_4;
 }

 FUNC_10(&VAR_14, sizeof(VAR_14));

 FUNC_8(VAR_14.HubName, sizeof(VAR_14.HubName), FUNC_2(VAR_11, "[name]"));
 VAR_14.HubType = VAR_16;

 if (FUNC_4(FUNC_2(VAR_11, "PASSWORD")) == 0)
 {
  VAR_15 = FUNC_2(VAR_11, "PASSWORD");
 }

 FUNC_7(VAR_14.HashedPassword, VAR_15, FUNC_9(VAR_15));
 FUNC_3(VAR_14.SecurePassword, VAR_0, VAR_15);
 VAR_14.Online = 1;


 VAR_13 = FUNC_6(VAR_12->Rpc, &VAR_14);

 if (VAR_13 != VAR_5)
 {

  FUNC_0(VAR_7, VAR_13);
  FUNC_1(VAR_11);
  return VAR_13;
 }

 FUNC_1(VAR_11);

 return 0;
}
