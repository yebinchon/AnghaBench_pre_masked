
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
struct TYPE_8__ {int Rpc; } ;
struct TYPE_7__ {int GatewayAddress; int Metric; int SubnetMask; int NetworkAddress; int Name; } ;
typedef TYPE_1__ RPC_L3TABLE ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*,int *,TYPE_3__*,int) ;
 int FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (char*) ;

UINT FUNC_11(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PS *VAR_12 = (PS *)VAR_10;
 UINT VAR_13 = 0;
 RPC_L3TABLE VAR_14;

 PARAM VAR_15[] =
 {

  {"[name]", &VAR_4, FUNC_10("CMD_RouterTableAdd_PROMPT_NAME"), VAR_3, ((void*)0)},
  {"NETWORK", &VAR_4, FUNC_10("CMD_RouterTableAdd_PROMPT_NETWORK"), VAR_2, ((void*)0)},
  {"GATEWAY", &VAR_4, FUNC_10("CMD_RouterTableAdd_PROMPT_GATEWAY"), VAR_1, ((void*)0)},
  {"METRIC", &VAR_4, FUNC_10("CMD_RouterTableAdd_PROMPT_METRIC"), VAR_0, ((void*)0)},
 };

 VAR_11 = FUNC_4(VAR_7, VAR_8, VAR_9, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_5;
 }

 FUNC_9(&VAR_14, sizeof(VAR_14));

 FUNC_7(VAR_14.Name, sizeof(VAR_14.Name), FUNC_3(VAR_11, "[name]"));
 FUNC_5(FUNC_3(VAR_11, "NETWORK"), &VAR_14.NetworkAddress, &VAR_14.SubnetMask);
 VAR_14.Metric = FUNC_2(VAR_11, "METRIC");
 VAR_14.GatewayAddress = FUNC_8(FUNC_3(VAR_11, "GATEWAY"));


 VAR_13 = FUNC_6(VAR_12->Rpc, &VAR_14);

 if (VAR_13 != VAR_6)
 {

  FUNC_0(VAR_7, VAR_13);
  FUNC_1(VAR_11);
  return VAR_13;
 }

 FUNC_1(VAR_11);

 return 0;
}
