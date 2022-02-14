
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
struct TYPE_10__ {char* member_0; int * member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_9__ {int Rpc; } ;
struct TYPE_8__ {int KeepConnectProtocol; int KeepConnectInterval; scalar_t__ KeepConnectPort; int KeepConnectHost; } ;
typedef TYPE_1__ RPC_KEEP ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,char**,scalar_t__*,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (char*) ;

UINT FUNC_13(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_KEEP VAR_12;
 char *VAR_13;
 UINT VAR_14;

 PARAM VAR_15[] =
 {

  {"HOST", &VAR_2, FUNC_12("CMD_KeepSet_PROMPT_HOST"), *VAR_0, ((void*)0)},
  {"PROTOCOL", &VAR_2, FUNC_12("CMD_KeepSet_PROMPT_PROTOCOL"), *VAR_1, ((void*)0)},
  {"INTERVAL", &VAR_2, FUNC_12("CMD_KeepSet_PROMPT_INTERVAL"), ((void*)0), ((void*)0)},
 };

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_11(&VAR_12, sizeof(VAR_12));


 VAR_11 = FUNC_7(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_4)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_2(VAR_9);
  return VAR_11;
 }

 if (FUNC_6(FUNC_4(VAR_9, "HOST"), &VAR_13, &VAR_14, 0))
 {
  FUNC_10(VAR_12.KeepConnectHost, sizeof(VAR_12.KeepConnectHost), VAR_13);
  VAR_12.KeepConnectPort = VAR_14;
  VAR_12.KeepConnectInterval = FUNC_3(VAR_9, "INTERVAL");
  VAR_12.KeepConnectProtocol = (FUNC_9(FUNC_4(VAR_9, "PROTOCOL"), "tcp") == 0) ? 0 : 1;
  FUNC_1(VAR_13);


  VAR_11 = FUNC_8(VAR_10->Rpc, &VAR_12);

  if (VAR_11 != VAR_4)
  {

   FUNC_0(VAR_5, VAR_11);
   FUNC_2(VAR_9);
   return VAR_11;
  }
 }

 FUNC_2(VAR_9);

 return 0;
}
