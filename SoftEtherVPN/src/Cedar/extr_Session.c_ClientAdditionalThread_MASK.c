
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_14__ {scalar_t__ AdditionalConnectionFailedCounter; scalar_t__ LastCounterResetTick; int ConnectingThreads; int CurrentNumConnection; } ;
struct TYPE_13__ {scalar_t__ LastTryAddConnectTime; TYPE_3__* Connection; } ;
struct TYPE_12__ {int ref; } ;
typedef TYPE_1__ THREAD ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ CONNECTION ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int ) ;

void FUNC_14(THREAD *VAR_1, void *VAR_2)
{
 SESSION *VAR_3;
 CONNECTION *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = (SESSION *)VAR_2;

 VAR_3->LastTryAddConnectTime = FUNC_12();

 VAR_4 = VAR_3->Connection;

 FUNC_7(VAR_4->CurrentNumConnection);
 FUNC_8(VAR_4->ConnectingThreads);
 {

  FUNC_0(VAR_4->ConnectingThreads, VAR_1);
  FUNC_1(VAR_1->ref);
 }
 FUNC_13(VAR_4->ConnectingThreads);


 FUNC_9(VAR_1);

 FUNC_4("Additional Connection #%u\n", FUNC_3(VAR_4->CurrentNumConnection));


 if (FUNC_2(VAR_4, VAR_1) == 0)
 {

  FUNC_5(VAR_4->CurrentNumConnection);

  if (VAR_4->AdditionalConnectionFailedCounter == 0)
  {
   VAR_4->LastCounterResetTick = FUNC_12();
  }

  VAR_4->AdditionalConnectionFailedCounter++;

  if ((VAR_4->LastCounterResetTick + (UINT64)VAR_0) <= FUNC_12())
  {

   VAR_4->AdditionalConnectionFailedCounter = 0;
   VAR_4->LastCounterResetTick = FUNC_12();
  }
 }
 else
 {
  VAR_3->LastTryAddConnectTime = FUNC_12();
  VAR_4->AdditionalConnectionFailedCounter = 0;
  VAR_4->LastCounterResetTick = FUNC_12();
 }


 FUNC_8(VAR_4->ConnectingThreads);
 {

  if (FUNC_6(VAR_4->ConnectingThreads, VAR_1))
  {
   FUNC_11(VAR_1);
  }
 }
 FUNC_13(VAR_4->ConnectingThreads);
 FUNC_10(VAR_3);
}
