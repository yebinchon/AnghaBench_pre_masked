
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* ServerName; void* HideWindow; int RetryIntervalSec; int RetryLimit; int CurrentRetryCount; int Err; int AccountName; } ;
typedef TYPE_1__ UI_CONNECTERROR_DLG ;
struct TYPE_11__ {int HaltThread; int Event; int * Sock; TYPE_2__* Session; } ;
struct TYPE_10__ {int RetryInterval; int HaltEvent; } ;
typedef int THREAD ;
typedef int SOCK ;
typedef TYPE_2__ SESSION ;
typedef int PACK ;
typedef TYPE_3__ CNC_CONNECT_ERROR_DLG_THREAD_PARAM ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int * FUNC_5 () ;
 int * FUNC_6 (int ,TYPE_3__*) ;
 int FUNC_7 (int *,char*,void*) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (int *,char*,int ) ;
 void* FUNC_11 (int *,char*) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int *,int ) ;
 TYPE_3__* FUNC_20 (int) ;

bool FUNC_21(SESSION *VAR_2, UI_CONNECTERROR_DLG *VAR_3)
{
 SOCK *VAR_4;
 PACK *VAR_5;
 CNC_CONNECT_ERROR_DLG_THREAD_PARAM *VAR_6;
 THREAD *VAR_7;
 bool VAR_8 = 0;

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_0();
 if (VAR_4 == ((void*)0))
 {
  FUNC_18(VAR_2->HaltEvent, VAR_2->RetryInterval);
  return 1;
 }

 VAR_5 = FUNC_5();
 FUNC_9(VAR_5, "function", "connecterror_dialog");
 FUNC_10(VAR_5, "AccountName", VAR_3->AccountName);
 FUNC_9(VAR_5, "ServerName", VAR_3->ServerName);
 FUNC_8(VAR_5, "Err", VAR_3->Err);
 FUNC_8(VAR_5, "CurrentRetryCount", VAR_3->CurrentRetryCount);
 FUNC_8(VAR_5, "RetryLimit", VAR_3->RetryLimit);
 FUNC_8(VAR_5, "RetryIntervalSec", VAR_3->RetryIntervalSec);
 FUNC_7(VAR_5, "HideWindow", VAR_3->HideWindow);

 FUNC_16(VAR_4, VAR_5);
 FUNC_3(VAR_5);

 VAR_6 = FUNC_20(sizeof(CNC_CONNECT_ERROR_DLG_THREAD_PARAM));
 VAR_6->Session = VAR_2;
 VAR_6->Sock = VAR_4;
 VAR_6->Event = FUNC_4();

 VAR_7 = FUNC_6(VAR_0, VAR_6);

 VAR_5 = FUNC_12(VAR_4);
 if (VAR_5 != ((void*)0))
 {
  VAR_8 = FUNC_11(VAR_5, "ok");
  VAR_3->HideWindow = FUNC_11(VAR_5, "HideWindow");

  FUNC_3(VAR_5);
 }

 VAR_6->HaltThread = 1;
 FUNC_17(VAR_6->Event);

 FUNC_19(VAR_7, VAR_1);

 FUNC_13(VAR_6->Event);
 FUNC_2(VAR_6);
 FUNC_15(VAR_7);

 FUNC_1(VAR_4);
 FUNC_14(VAR_4);

 return VAR_8;
}
