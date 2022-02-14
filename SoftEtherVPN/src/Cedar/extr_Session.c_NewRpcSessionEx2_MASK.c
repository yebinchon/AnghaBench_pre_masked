
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_18__ {int Build; int Version; } ;
struct TYPE_17__ {int UseCompress; int UseEncrypt; int MaxConnection; } ;
struct TYPE_16__ {int Err; void* hWndForUI; } ;
struct TYPE_15__ {int ServerMode; TYPE_2__* Connection; int UseCompress; int UseEncrypt; int MaxConnection; int ClientOption; int Cancel1; void* TrafficLock; int HaltEvent; int Traffic; int LastCommTime; int CreatedTime; int Name; TYPE_4__* Cedar; int ref; void* lock; int LoggingRecordCount; } ;
typedef int SOCK ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ CONNECTION ;
typedef TYPE_3__ CLIENT_OPTION ;
typedef TYPE_4__ CEDAR ;


 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_3__*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 TYPE_2__* FUNC_7 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 void* FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 () ;
 TYPE_1__* FUNC_15 (int) ;

SESSION *FUNC_16(CEDAR *VAR_0, CLIENT_OPTION *VAR_1, UINT *VAR_2, char *VAR_3, void *VAR_4)
{
 SESSION *VAR_5;
 CONNECTION *VAR_6;
 SOCK *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_15(sizeof(SESSION));

 VAR_5->LoggingRecordCount = FUNC_8();
 VAR_5->lock = FUNC_10();
 VAR_5->ref = FUNC_11();
 VAR_5->Cedar = VAR_0;
 VAR_5->ServerMode = 0;
 VAR_5->Name = FUNC_4("CLIENT_RPC_SESSION");
 VAR_5->CreatedTime = VAR_5->LastCommTime = FUNC_14();
 VAR_5->Traffic = FUNC_12();
 VAR_5->HaltEvent = FUNC_9();
 VAR_5->TrafficLock = FUNC_10();
 VAR_5->Cancel1 = FUNC_6();


 VAR_5->ClientOption = FUNC_5(sizeof(CLIENT_OPTION));
 FUNC_3(VAR_5->ClientOption, VAR_1, sizeof(CLIENT_OPTION));

 VAR_5->MaxConnection = VAR_1->MaxConnection;
 VAR_5->UseEncrypt = VAR_1->UseEncrypt;
 VAR_5->UseCompress = VAR_1->UseCompress;


 VAR_6 = VAR_5->Connection = FUNC_7(VAR_5, VAR_3, VAR_0->Version, VAR_0->Build);
 VAR_6->hWndForUI = VAR_4;


 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 == ((void*)0))
 {

  if (VAR_2 != ((void*)0))
  {
   *VAR_2 = VAR_6->Err;
  }
  FUNC_13(VAR_5);
  return ((void*)0);
 }


 if (FUNC_2(VAR_7) == 0)
 {

  if (VAR_2 != ((void*)0))
  {
   *VAR_2 = VAR_6->Err;
  }
  FUNC_13(VAR_5);
  return ((void*)0);
 }


 if (FUNC_1(VAR_6, VAR_7) == 0)
 {

  if (VAR_2 != ((void*)0))
  {
   *VAR_2 = VAR_6->Err;
  }
  FUNC_13(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
