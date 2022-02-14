
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t2 ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int Rpc; } ;
struct TYPE_7__ {scalar_t__ IsConnected; int CurrentHostName; scalar_t__ IsEnabled; } ;
typedef TYPE_1__ RPC_AZURE_STATUS ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef TYPE_1__ DDNS_CLIENT_STATUS ;
typedef int CT ;
typedef int CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int * FUNC_5 (int *,char*,int *,int *,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int *,int,char*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int * FUNC_10 (char*) ;

UINT FUNC_11(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_AZURE_STATUS VAR_11;
 DDNS_CLIENT_STATUS VAR_12;

 VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_6, ((void*)0), 0);
 if (VAR_8 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_9(&VAR_11, sizeof(VAR_11));
 FUNC_9(&VAR_12, sizeof(VAR_12));


 VAR_10 = FUNC_6(VAR_9->Rpc, &VAR_11);

 if (VAR_10 == VAR_2)
 {
  VAR_10 = FUNC_7(VAR_9->Rpc, &VAR_12);
 }

 if (VAR_10 != VAR_2)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_4(VAR_8);
  return VAR_10;
 }
 else
 {
  CT *VAR_13 = FUNC_3();

  FUNC_2(VAR_13, FUNC_10("CMD_VpnAzureGetStatus_PRINT_ENABLED"), FUNC_10(VAR_11.IsEnabled ? "SEC_YES" : "SEC_NO"));

  if (VAR_11.IsEnabled)
  {
   wchar_t VAR_14[VAR_3];

   FUNC_8(VAR_14, sizeof(VAR_14), L"%S%S", VAR_12, VAR_0);

   FUNC_2(VAR_13, FUNC_10("CMD_VpnAzureGetStatus_PRINT_CONNECTED"), FUNC_10(VAR_11.IsConnected ? "SEC_YES" : "SEC_NO"));
   FUNC_2(VAR_13, FUNC_10("CMD_VpnAzureGetStatus_PRINT_HOSTNAME"), VAR_14);
  }

  FUNC_1(VAR_13, VAR_4);
 }

 FUNC_4(VAR_8);

 return 0;
}
