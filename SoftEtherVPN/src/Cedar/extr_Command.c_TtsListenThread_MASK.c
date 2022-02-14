
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {int ref; } ;
struct TYPE_13__ {int SockEvent; int * WorkThread; int WorkerList; TYPE_5__* ListenSocketV6; TYPE_5__* ListenSocket; int Print; int Param; int * IPv6AcceptThread; struct TYPE_13__* Tts; int Port; int ErrorCode; } ;
typedef TYPE_1__ TTS_WORKER ;
typedef TYPE_1__ TTS ;
typedef int THREAD ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_5__* FUNC_6 (int ,int) ;
 TYPE_5__* FUNC_7 (int ,int) ;
 int VAR_2 ;
 void* FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (TYPE_1__*,TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (int *,int,int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 TYPE_1__* FUNC_19 (int) ;
 int * FUNC_20 (char*) ;

void FUNC_21(THREAD *VAR_5, void *VAR_6)
{
 TTS *VAR_7;
 wchar_t VAR_8[VAR_2];

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }

 VAR_7 = (TTS *)VAR_6;

 VAR_7->ListenSocket = ((void*)0);
 VAR_7->ListenSocket = FUNC_6(VAR_7->Port, 0);
 VAR_7->ListenSocketV6 = FUNC_7(VAR_7->Port, 0);

 if (VAR_7->ListenSocket == ((void*)0) && VAR_7->ListenSocketV6 == ((void*)0))
 {

  FUNC_16(VAR_8, sizeof(VAR_8), FUNC_20("TT_LISTEN_FAILED"), VAR_7->Port);
  FUNC_14(VAR_7->Param, VAR_7->Print, VAR_8);


  FUNC_9(VAR_5);

  VAR_7->ErrorCode = VAR_0;
 }
 else
 {
  UINT VAR_9, VAR_10;

  FUNC_16(VAR_8, sizeof(VAR_8), FUNC_20("TTS_LISTEN_STARTED"), VAR_7->Port);
  FUNC_14(VAR_7->Param, VAR_7->Print, VAR_8);

  if (VAR_7->ListenSocketV6 != ((void*)0))
  {
   FUNC_16(VAR_8, sizeof(VAR_8), FUNC_20("TTS_LISTEN_STARTED_V6"), VAR_7->Port);
   FUNC_14(VAR_7->Param, VAR_7->Print, VAR_8);
  }
  else
  {
   FUNC_16(VAR_8, sizeof(VAR_8), FUNC_20("TTS_LISTEN_FAILED_V6"), VAR_7->Port);
   FUNC_14(VAR_7->Param, VAR_7->Print, VAR_8);
  }

  if (VAR_7->ListenSocket != ((void*)0))
  {
   FUNC_1(VAR_7->ListenSocket->ref);
  }
  if (VAR_7->ListenSocketV6 != ((void*)0))
  {
   FUNC_1(VAR_7->ListenSocketV6->ref);
  }

  VAR_10 = FUNC_3();


  for (VAR_9 = 0;VAR_9 < VAR_10;VAR_9++)
  {
   TTS_WORKER *VAR_11 = FUNC_19(sizeof(TTS_WORKER));

   VAR_11->Tts = VAR_7;
   VAR_11->WorkThread = FUNC_8(VAR_4, VAR_11);
   FUNC_18(VAR_11->WorkThread);

   FUNC_0(VAR_7->WorkerList, VAR_11);
  }


  FUNC_9(VAR_5);


  VAR_7->IPv6AcceptThread = ((void*)0);
  if (VAR_7->ListenSocketV6 != ((void*)0))
  {
   VAR_7->IPv6AcceptThread = FUNC_8(VAR_3, VAR_7);
  }

  FUNC_15(VAR_7, VAR_7->ListenSocket);

  if (VAR_7->IPv6AcceptThread != ((void*)0))
  {
   FUNC_17(VAR_7->IPv6AcceptThread, VAR_1);
   FUNC_12(VAR_7->IPv6AcceptThread);
  }

  FUNC_14(VAR_7->Param, VAR_7->Print, FUNC_20("TTS_LISTEN_STOP"));

  FUNC_10(VAR_7->ListenSocket);
  FUNC_10(VAR_7->ListenSocketV6);

  for (VAR_9 = 0;VAR_9 < FUNC_5(VAR_7->WorkerList);VAR_9++)
  {
   TTS_WORKER *VAR_12 = FUNC_4(VAR_7->WorkerList, VAR_9);

   FUNC_13(VAR_12->SockEvent);


   FUNC_17(VAR_12->WorkThread, VAR_1);
   FUNC_12(VAR_12->WorkThread);
   FUNC_11(VAR_12->SockEvent);

   FUNC_2(VAR_12);
  }
 }
}
