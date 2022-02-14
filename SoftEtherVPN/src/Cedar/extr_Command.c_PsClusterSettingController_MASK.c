
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
struct TYPE_9__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_8__ {int Rpc; } ;
struct TYPE_7__ {int ControllerOnly; scalar_t__ Weight; int ServerType; } ;
typedef TYPE_1__ RPC_FARM ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*,int *,TYPE_3__*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

UINT FUNC_7(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_FARM VAR_11;
 UINT VAR_12;
 PARAM VAR_13[] =
 {
  {"WEIGHT", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"ONLY", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_12 = FUNC_2(VAR_8, "WEIGHT");
 if (VAR_12 == 0)
 {
  VAR_12 = VAR_2;
 }

 FUNC_6(&VAR_11, sizeof(VAR_11));
 VAR_11.ServerType = VAR_3;
 VAR_11.Weight = VAR_12;
 VAR_11.ControllerOnly = FUNC_3(VAR_8, "ONLY");


 VAR_10 = FUNC_5(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_1)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }

 FUNC_1(VAR_8);

 return 0;
}
