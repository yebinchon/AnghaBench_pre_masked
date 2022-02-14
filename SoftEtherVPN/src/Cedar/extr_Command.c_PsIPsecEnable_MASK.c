
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
struct TYPE_9__ {int L2TP_DefaultHub; int IPsec_Secret; void* EtherIP_IPsec; void* L2TP_Raw; void* L2TP_IPsec; } ;
struct TYPE_8__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_7__ {int Rpc; } ;
typedef TYPE_1__ PS ;
typedef TYPE_2__ PARAM ;
typedef int LIST ;
typedef TYPE_3__ IPSEC_SERVICES ;
typedef int CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*,int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (char*) ;

UINT FUNC_9(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 IPSEC_SERVICES VAR_11;

 PARAM VAR_12[] =
 {

  {"L2TP", &VAR_1, FUNC_8("CMD_IPsecEnable_Prompt_L2TP"), VAR_0, ((void*)0)},
  {"L2TPRAW", &VAR_1, FUNC_8("CMD_IPsecEnable_Prompt_L2TPRAW"), VAR_0, ((void*)0)},
  {"ETHERIP", &VAR_1, FUNC_8("CMD_IPsecEnable_Prompt_ETHERIP"), VAR_0, ((void*)0)},
  {"PSK", &VAR_1, FUNC_8("CMD_IPsecEnable_Prompt_PSK"), VAR_0, ((void*)0)},
  {"DEFAULTHUB", &VAR_1, FUNC_8("CMD_IPsecEnable_Prompt_DEFAULTHUB"), VAR_0, ((void*)0)},
 };

 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_7(&VAR_11, sizeof(VAR_11));
 VAR_11.L2TP_IPsec = FUNC_3(VAR_8, "L2TP");
 VAR_11.L2TP_Raw = FUNC_3(VAR_8, "L2TPRAW");
 VAR_11.EtherIP_IPsec = FUNC_3(VAR_8, "ETHERIP");
 FUNC_6(VAR_11.IPsec_Secret, sizeof(VAR_11.IPsec_Secret), FUNC_2(VAR_8, "PSK"));
 FUNC_6(VAR_11.L2TP_DefaultHub, sizeof(VAR_11.L2TP_DefaultHub), FUNC_2(VAR_8, "DEFAULTHUB"));


 VAR_10 = FUNC_5(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_3)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }

 FUNC_1(VAR_8);

 return 0;
}
