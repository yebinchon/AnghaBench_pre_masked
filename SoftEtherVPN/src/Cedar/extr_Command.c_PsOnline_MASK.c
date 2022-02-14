
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {int (* Write ) (TYPE_3__*,int ) ;} ;
struct TYPE_11__ {int Rpc; int * HubName; } ;
struct TYPE_10__ {int Online; int HubName; } ;
typedef TYPE_1__ RPC_SET_HUB_ONLINE ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef TYPE_3__ CONSOLE ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_3__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_3__*,int ) ;

UINT FUNC_8(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8 = 0;
 RPC_SET_HUB_ONLINE VAR_9;


 if (VAR_7->HubName == ((void*)0))
 {
  VAR_2->Write(VAR_2, FUNC_6("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_5(&VAR_9, sizeof(VAR_9));

 FUNC_4(VAR_9.HubName, sizeof(VAR_9.HubName), VAR_7->HubName);
 VAR_9.Online = 1;


 VAR_8 = FUNC_3(VAR_7->Rpc, &VAR_9);

 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_1(VAR_6);
  return VAR_8;
 }

 FUNC_1(VAR_6);

 return 0;
}
