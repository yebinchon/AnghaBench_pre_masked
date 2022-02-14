
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_10__ {int RemoteClient; } ;
struct TYPE_9__ {int Active; int AccountName; } ;
typedef TYPE_1__ RPC_CLIENT_GET_CONNECTION_STATUS ;
typedef TYPE_2__ PC ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int * FUNC_8 (int *,char*,int *,TYPE_3__*,int) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (char*) ;

UINT FUNC_12(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PC *VAR_10 = (PC *)VAR_8;
 UINT VAR_11 = VAR_4;
 RPC_CLIENT_GET_CONNECTION_STATUS VAR_12;

 PARAM VAR_13[] =
 {
  {"[name]", &VAR_1, FUNC_11("CMD_AccountCreate_Prompt_Name"), VAR_0, ((void*)0)},
 };


 VAR_9 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }


 FUNC_10(&VAR_12, sizeof(VAR_12));
 FUNC_9(VAR_12.AccountName, sizeof(VAR_12.AccountName), FUNC_7(VAR_9, "[name]"));

 VAR_11 = FUNC_0(VAR_10->RemoteClient, &VAR_12);

 if (VAR_11 == VAR_4)
 {
  if (VAR_12.Active == 0)
  {

   VAR_11 = VAR_2;
  }
  else
  {
   CT *VAR_14 = FUNC_5();

   FUNC_3(VAR_14, &VAR_12);

   FUNC_4(VAR_14, VAR_5);
  }
 }

 if (VAR_11 != VAR_4)
 {

  FUNC_2(VAR_5, VAR_11);
 }

 FUNC_1(&VAR_12);


 FUNC_6(VAR_9);

 return VAR_11;
}
