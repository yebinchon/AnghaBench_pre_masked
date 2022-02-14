
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int NumFailed; int NumTry; int NumConnected; int FirstConnectedTime; int CurrentConnectedTime; int StartedTime; int LastError; int Online; int Port; int Ip; } ;
typedef TYPE_1__ RPC_FARM_CONNECTION_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(PACK *VAR_0, RPC_FARM_CONNECTION_STATUS *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "Ip", VAR_1->Ip);
 FUNC_1(VAR_0, "Port", VAR_1->Port);
 FUNC_0(VAR_0, "Online", VAR_1->Online);
 FUNC_1(VAR_0, "LastError", VAR_1->LastError);
 FUNC_3(VAR_0, "StartedTime", VAR_1->StartedTime);
 FUNC_3(VAR_0, "CurrentConnectedTime", VAR_1->CurrentConnectedTime);
 FUNC_3(VAR_0, "FirstConnectedTime", VAR_1->FirstConnectedTime);
 FUNC_1(VAR_0, "NumConnected", VAR_1->NumConnected);
 FUNC_1(VAR_0, "NumTry", VAR_1->NumTry);
 FUNC_1(VAR_0, "NumFailed", VAR_1->NumFailed);
}
