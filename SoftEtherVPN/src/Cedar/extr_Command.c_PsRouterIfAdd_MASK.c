
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
struct TYPE_7__ {int HubName; int SubnetMask; int IpAddress; int Name; } ;
typedef TYPE_1__ RPC_L3IF ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*,int *,TYPE_3__*,int) ;
 int FUNC_4 (int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (char*) ;

UINT FUNC_9(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_L3IF VAR_12;

 PARAM VAR_13[] =
 {

  {"[name]", &VAR_2, FUNC_8("CMD_RouterIfAdd_PROMPT_NAME"), VAR_1, ((void*)0)},
  {"HUB", &VAR_2, FUNC_8("CMD_RouterIfAdd_PROMPT_HUB"), VAR_1, ((void*)0)},
  {"IP", &VAR_2, FUNC_8("CMD_RouterIfAdd_PROMPT_IP"), VAR_0, ((void*)0)},
 };

 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_7(&VAR_12, sizeof(VAR_12));

 FUNC_6(VAR_12.Name, sizeof(VAR_12.Name), FUNC_2(VAR_9, "[name]"));
 FUNC_4(FUNC_2(VAR_9, "IP"), &VAR_12.IpAddress, &VAR_12.SubnetMask);
 FUNC_6(VAR_12.HubName, sizeof(VAR_12.HubName), FUNC_2(VAR_9, "HUB"));


 VAR_11 = FUNC_5(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_4)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_1(VAR_9);
  return VAR_11;
 }

 FUNC_1(VAR_9);

 return 0;
}
