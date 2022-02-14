
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_16__ {int RemotePort; int RemoteHostname; } ;
struct TYPE_15__ {int Halt; int Print; int Param; scalar_t__ IdSeed; int WorkerList; } ;
struct TYPE_14__ {scalar_t__ Id; int LastCommTime; scalar_t__ GiveupSpan; TYPE_4__* Sock; } ;
struct TYPE_13__ {int NewSocketArrived; int SockEvent; int TtsSockList; } ;
typedef TYPE_1__ TTS_WORKER ;
typedef TYPE_2__ TTS_SOCK ;
typedef TYPE_3__ TTS ;
typedef TYPE_4__ SOCK ;


 TYPE_4__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int *,int,int ,scalar_t__,int ,int ) ;
 int FUNC_11 (int ) ;
 TYPE_2__* FUNC_12 (int) ;
 int FUNC_13 (char*) ;

void FUNC_14(TTS *VAR_1, SOCK *VAR_2)
{
 wchar_t VAR_3[VAR_0];
 UINT VAR_4 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 while (VAR_1->Halt == 0)
 {
  SOCK *VAR_5;

  VAR_5 = FUNC_0(VAR_2);

  if (VAR_5 == ((void*)0))
  {
   if (VAR_1->Halt == 0)
   {
    FUNC_7(10);
   }
   continue;
  }
  else
  {
   UINT VAR_6, VAR_7;
   TTS_WORKER *VAR_8;


   FUNC_1(VAR_5, 1);


   VAR_6 = FUNC_4(VAR_1->WorkerList);

   VAR_7 = VAR_4 % VAR_6;

   VAR_4++;

   VAR_8 = FUNC_3(VAR_1->WorkerList, VAR_7);

   VAR_8->NewSocketArrived = 1;
   FUNC_5(VAR_8->TtsSockList);
   {
    TTS_SOCK *VAR_9 = FUNC_12(sizeof(TTS_SOCK));

    VAR_9->Id = (++VAR_1->IdSeed);
    VAR_9->Sock = VAR_5;

    VAR_9->GiveupSpan = (UINT64)(10 * 60 * 1000);
    VAR_9->LastCommTime = FUNC_8();

    FUNC_10(VAR_3, sizeof(VAR_3), FUNC_13("TTS_ACCEPTED"), VAR_9->Id,
     VAR_5->RemoteHostname, VAR_5->RemotePort);
    FUNC_9(VAR_1->Param, VAR_1->Print, VAR_3);

    FUNC_2(VAR_8->TtsSockList, VAR_9);
    VAR_8->NewSocketArrived = 1;
   }
   FUNC_11(VAR_8->TtsSockList);

   FUNC_6(VAR_8->SockEvent);
  }
 }
}
