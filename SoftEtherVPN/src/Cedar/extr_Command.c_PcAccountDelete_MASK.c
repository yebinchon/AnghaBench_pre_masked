
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
struct TYPE_9__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_8__ {int RemoteClient; } ;
struct TYPE_7__ {int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_DELETE_ACCOUNT ;
typedef TYPE_2__ PC ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*,int *,TYPE_3__*,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char*) ;

UINT FUNC_8(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PC *VAR_9 = (PC *)VAR_7;
 UINT VAR_10 = VAR_3;
 RPC_CLIENT_DELETE_ACCOUNT VAR_11;

 PARAM VAR_12[] =
 {
  {"[name]", &VAR_1, FUNC_7("CMD_AccountCreate_Prompt_Name"), VAR_0, ((void*)0)},
 };


 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }


 FUNC_6(&VAR_11, sizeof(VAR_11));

 FUNC_5(VAR_11.AccountName, sizeof(VAR_11.AccountName), FUNC_3(VAR_8, "[name]"));

 VAR_10 = FUNC_0(VAR_9->RemoteClient, &VAR_11);

 if (VAR_10 == VAR_3)
 {

 }

 if (VAR_10 != VAR_3)
 {

  FUNC_1(VAR_4, VAR_10);
 }


 FUNC_2(VAR_8);

 return VAR_10;
}
