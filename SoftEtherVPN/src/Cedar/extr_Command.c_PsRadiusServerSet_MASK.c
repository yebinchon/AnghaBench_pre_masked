
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_17__ {char* member_0; int member_2; int member_1; } ;
struct TYPE_16__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_15__ {char* member_0; TYPE_5__* member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_14__ {char* HubName; int Rpc; } ;
struct TYPE_13__ {int RadiusRetryInterval; int RadiusSecret; int RadiusServerName; scalar_t__ RadiusPort; int HubName; } ;
typedef TYPE_1__ RPC_RADIUS ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef TYPE_5__ CMD_EVAL_MIN_MAX ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;
 int * FUNC_5 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (char*,char**,scalar_t__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,int,char*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_4__*,int ) ;

UINT FUNC_12(CONSOLE *VAR_8, char *VAR_9, wchar_t *VAR_10, void *VAR_11)
{
 LIST *VAR_12;
 PS *VAR_13 = (PS *)VAR_11;
 UINT VAR_14 = 0;
 RPC_RADIUS VAR_15;
 char *VAR_16;
 UINT VAR_17;

 CMD_EVAL_MIN_MAX VAR_18 =
 {
  "CMD_RadiusServerSet_EVAL_NUMINTERVAL", VAR_6, VAR_7,
 };
 PARAM VAR_19[] =
 {

  {"[server_name:port]", VAR_2, FUNC_10("CMD_RadiusServerSet_Prompt_Host"), *VAR_1, ((void*)0)},
  {"SECRET", VAR_3, FUNC_10("CMD_RadiusServerSet_Prompt_Secret"), ((void*)0), ((void*)0)},
  {"RETRY_INTERVAL", VAR_2, FUNC_10("CMD_RadiusServerSet_Prompt_RetryInterval"), *VAR_0, &VAR_18},
 };


 if (VAR_13->HubName == ((void*)0))
 {
  VAR_8->Write(VAR_8, FUNC_10("CMD_Hub_Not_Selected"));
  return VAR_4;
 }

 VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_10, VAR_19, sizeof(VAR_19) / sizeof(VAR_19[0]));
 if (VAR_12 == ((void*)0))
 {
  return VAR_4;
 }

 if (FUNC_6(FUNC_4(VAR_12, "[server_name:port]"), &VAR_16, &VAR_17, 1812))
 {
  FUNC_9(&VAR_15, sizeof(VAR_15));

  FUNC_8(VAR_15.HubName, sizeof(VAR_15.HubName), VAR_13->HubName);
  VAR_15.RadiusPort = VAR_17;
  FUNC_8(VAR_15.RadiusServerName, sizeof(VAR_15.RadiusServerName), VAR_16);
  FUNC_8(VAR_15.RadiusSecret, sizeof(VAR_15.RadiusSecret), FUNC_4(VAR_12, "SECRET"));
  VAR_15.RadiusRetryInterval = FUNC_3(VAR_12, "RETRY_INTERVAL");

  FUNC_1(VAR_16);


  VAR_14 = FUNC_7(VAR_13->Rpc, &VAR_15);

  if (VAR_14 != VAR_5)
  {

   FUNC_0(VAR_8, VAR_14);
   FUNC_2(VAR_12);
   return VAR_14;
  }
 }

 FUNC_2(VAR_12);

 return 0;
}
