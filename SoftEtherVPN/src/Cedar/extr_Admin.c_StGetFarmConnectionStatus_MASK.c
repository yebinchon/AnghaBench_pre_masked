
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {TYPE_2__* Server; } ;
struct TYPE_12__ {int Online; int lock; int NumFailed; int NumTry; int NumConnected; int FirstConnectedTime; int StartedTime; int CurrentConnectedTime; int LastError; TYPE_1__* Sock; } ;
struct TYPE_11__ {int Online; int NumFailed; int NumTry; int NumConnected; int FirstConnectedTime; int StartedTime; int CurrentConnectedTime; int LastError; int Port; int Ip; } ;
struct TYPE_10__ {scalar_t__ ServerType; TYPE_4__* FarmController; int * Cedar; } ;
struct TYPE_9__ {int RemotePort; int RemoteIP; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_FARM_CONNECTION_STATUS ;
typedef TYPE_4__ FARM_CONTROLLER ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int) ;

UINT FUNC_4(ADMIN *VAR_3, RPC_FARM_CONNECTION_STATUS *VAR_4)
{
 SERVER *VAR_5 = VAR_3->Server;
 CEDAR *VAR_6 = VAR_5->Cedar;
 FARM_CONTROLLER *VAR_7;

 if (VAR_5->ServerType != VAR_2)
 {
  return VAR_0;
 }

 FUNC_3(VAR_4, sizeof(RPC_FARM_CONNECTION_STATUS));

 VAR_7 = VAR_5->FarmController;

 FUNC_1(VAR_7->lock);
 {
  if (VAR_7->Sock != ((void*)0))
  {
   VAR_4->Ip = FUNC_0(&VAR_7->Sock->RemoteIP);
   VAR_4->Port = VAR_7->Sock->RemotePort;
  }

  VAR_4->Online = VAR_7->Online;
  VAR_4->LastError = VAR_1;

  if (VAR_4->Online == 0)
  {
   VAR_4->LastError = VAR_7->LastError;
  }
  else
  {
   VAR_4->CurrentConnectedTime = VAR_7->CurrentConnectedTime;
  }

  VAR_4->StartedTime = VAR_7->StartedTime;
  VAR_4->FirstConnectedTime = VAR_7->FirstConnectedTime;

  VAR_4->NumConnected = VAR_7->NumConnected;
  VAR_4->NumTry = VAR_7->NumTry;
  VAR_4->NumFailed = VAR_7->NumFailed;
 }
 FUNC_2(VAR_7->lock);

 return VAR_1;
}
