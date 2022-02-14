
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_17__ {int (* Write ) (TYPE_4__*,char*) ;} ;
struct TYPE_16__ {char* member_0; char* member_2; int * member_4; int member_3; int member_1; } ;
struct TYPE_15__ {int Rpc; } ;
struct TYPE_14__ {int StrValue; } ;
typedef TYPE_1__ RPC_TEST ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 int FUNC_10 (TYPE_4__*,char*) ;

UINT FUNC_11(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_TEST VAR_11;

 PARAM VAR_12[] =
 {

  {"[CN]", VAR_1, FUNC_7("CMD_ServerCertRegenerate_Prompt_CN"), VAR_0, ((void*)0)},
 };

 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_6(&VAR_11, sizeof(VAR_11));
 FUNC_5(VAR_11.StrValue, sizeof(VAR_11.StrValue), FUNC_2(VAR_8, "[CN]"));


 VAR_10 = FUNC_4(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_3)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_1(VAR_8);
  return VAR_10;
 }

 VAR_4->Write(VAR_4, L"");
 VAR_4->Write(VAR_4, FUNC_7("CM_CERT_SET_MSG"));
 VAR_4->Write(VAR_4, L"");

 FUNC_1(VAR_8);

 return 0;
}
