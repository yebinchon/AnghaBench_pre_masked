
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* NumFailed; void* NumTry; void* NumConnected; void* FirstConnectedTime; void* CurrentConnectedTime; void* StartedTime; void* LastError; int Online; void* Port; int Ip; } ;
typedef TYPE_1__ RPC_FARM_CONNECTION_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(RPC_FARM_CONNECTION_STATUS *VAR_0, PACK *VAR_1)
{
 FUNC_4(VAR_0, sizeof(RPC_FARM_CONNECTION_STATUS));

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_0->Ip = FUNC_3(VAR_1, "Ip");
 VAR_0->Port = FUNC_1(VAR_1, "Port");
 VAR_0->Online = FUNC_0(VAR_1, "Online");
 VAR_0->LastError = FUNC_1(VAR_1, "LastError");
 VAR_0->StartedTime = FUNC_2(VAR_1, "StartedTime");
 VAR_0->CurrentConnectedTime = FUNC_2(VAR_1, "CurrentConnectedTime");
 VAR_0->FirstConnectedTime = FUNC_2(VAR_1, "FirstConnectedTime");
 VAR_0->NumConnected = FUNC_1(VAR_1, "NumConnected");
 VAR_0->NumTry = FUNC_1(VAR_1, "NumTry");
 VAR_0->NumFailed = FUNC_1(VAR_1, "NumFailed");
}
