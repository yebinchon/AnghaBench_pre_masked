
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_14__ {int Rpc; int * HubName; } ;
struct TYPE_12__ {int NoEnum; } ;
struct TYPE_13__ {TYPE_1__ HubOption; int HubName; } ;
typedef TYPE_2__ RPC_CREATE_HUB ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_4__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_4__*,int ) ;

UINT FUNC_9(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8 = 0;
 RPC_CREATE_HUB VAR_9;


 if (VAR_7->HubName == ((void*)0))
 {
  VAR_2->Write(VAR_2, FUNC_7("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }


 FUNC_6(&VAR_9, sizeof(VAR_9));
 FUNC_5(VAR_9.HubName, sizeof(VAR_9.HubName), VAR_7->HubName);
 VAR_8 = FUNC_3(VAR_7->Rpc, &VAR_9);
 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_1(VAR_6);
  return VAR_8;
 }

 VAR_9.HubOption.NoEnum = 1;


 VAR_8 = FUNC_4(VAR_7->Rpc, &VAR_9);
 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_1(VAR_6);
  return VAR_8;
 }

 FUNC_1(VAR_6);

 return 0;
}
