
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {int (* Write ) (TYPE_3__*,int ) ;} ;
struct TYPE_11__ {char* member_0; int * member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_10__ {int Rpc; } ;
typedef int RPC_TEST ;
typedef TYPE_1__ PS ;
typedef TYPE_2__ PARAM ;
typedef int LIST ;
typedef TYPE_3__ CONSOLE ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,char*) ;
 int * FUNC_3 (TYPE_3__*,char*,int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;

UINT FUNC_10(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 char *VAR_9;

 PARAM VAR_10[] =
 {

  {"[yes]", &VAR_0, FUNC_7("CMD_Crash_Confirm"), ((void*)0), ((void*)0)},
 };

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_10, sizeof(VAR_10) / sizeof(VAR_10[0]));
 if (VAR_7 == ((void*)0))
 {
  return VAR_1;
 }

 VAR_9 = FUNC_2(VAR_7, "[yes]");

 if (FUNC_5(VAR_9, "yes") != 0)
 {
  VAR_3->Write(VAR_3, FUNC_7("CMD_Crash_Aborted"));
 }
 else
 {
  RPC_TEST VAR_11;
  UINT VAR_12;

  VAR_3->Write(VAR_3, FUNC_7("CMD_Crash_Msg"));

  FUNC_6(&VAR_11, sizeof(VAR_11));

  VAR_12 = FUNC_4(VAR_8->Rpc, &VAR_11);

  if (VAR_12 != VAR_2)
  {

   FUNC_0(VAR_3, VAR_12);
   FUNC_1(VAR_7);
   return VAR_12;
  }
 }

 FUNC_1(VAR_7);

 return 0;
}
