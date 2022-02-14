
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
struct TYPE_9__ {int Password; int UserName; int HubName; int Id; } ;
struct TYPE_8__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_7__ {int Rpc; } ;
typedef TYPE_1__ PS ;
typedef TYPE_2__ PARAM ;
typedef int LIST ;
typedef TYPE_3__ ETHERIP_ID ;
typedef int CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*,int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (char*) ;

UINT FUNC_8(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 ETHERIP_ID VAR_11;

 PARAM VAR_12[] =
 {

  {"[ID]", &VAR_1, FUNC_7("CMD_EtherIpClientAdd_Prompt_ID"), VAR_0, ((void*)0)},
  {"HUB", &VAR_1, FUNC_7("CMD_EtherIpClientAdd_Prompt_HUB"), VAR_0, ((void*)0)},
  {"USERNAME", &VAR_1, FUNC_7("CMD_EtherIpClientAdd_Prompt_USERNAME"), VAR_0, ((void*)0)},
  {"PASSWORD", &VAR_1, FUNC_7("CMD_EtherIpClientAdd_Prompt_PASSWORD"), VAR_0, ((void*)0)},
 };

 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_6(&VAR_11, sizeof(VAR_11));
 FUNC_5(VAR_11.Id, sizeof(VAR_11.Id), FUNC_2(VAR_8, "[ID]"));
 FUNC_5(VAR_11.HubName, sizeof(VAR_11.HubName), FUNC_2(VAR_8, "HUB"));
 FUNC_5(VAR_11.UserName, sizeof(VAR_11.UserName), FUNC_2(VAR_8, "USERNAME"));
 FUNC_5(VAR_11.Password, sizeof(VAR_11.Password), FUNC_2(VAR_8, "PASSWORD"));


 VAR_10 = FUNC_4(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_3)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }

 FUNC_1(VAR_8);

 return 0;
}
