
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
struct TYPE_7__ {int HashedPassword; } ;
typedef TYPE_1__ RPC_SET_PASSWORD ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,int) ;

UINT FUNC_8(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9;
 RPC_SET_PASSWORD VAR_10;
 char *VAR_11;
 PARAM VAR_12[] =
 {
  {"[password]", &VAR_0, ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_7 == ((void*)0))
 {
  return VAR_1;
 }

 VAR_11 = FUNC_2(VAR_7, "[password]");

 FUNC_7(&VAR_10, sizeof(VAR_10));
 FUNC_5(VAR_10.HashedPassword, VAR_11, FUNC_6(VAR_11));

 VAR_9 = FUNC_4(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_2)
 {
  FUNC_0(VAR_3, VAR_9);
  FUNC_1(VAR_7);
  return VAR_9;
 }

 FUNC_1(VAR_7);

 return 0;
}
