
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_9__ {int Rpc; } ;
struct TYPE_8__ {int IntValue; } ;
typedef TYPE_1__ RPC_TEST ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

UINT FUNC_7(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8 = 0;
 RPC_TEST VAR_9;

 PARAM VAR_10[] =
 {
  {"RESETCONFIG", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_10, sizeof(VAR_10) / sizeof(VAR_10[0]));
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_6(&VAR_9, sizeof(VAR_9));

 VAR_9.IntValue = FUNC_3(VAR_6, "RESETCONFIG") ? 1 : 0;


 VAR_8 = FUNC_5(VAR_7->Rpc, &VAR_9);

 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_1(VAR_6);
  return VAR_8;
 }

 FUNC_2(&VAR_9);

 FUNC_1(VAR_6);

 return 0;
}
