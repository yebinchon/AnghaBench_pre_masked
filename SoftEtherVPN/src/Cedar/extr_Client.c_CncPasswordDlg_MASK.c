
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* Username; char* Password; char* ServerName; int Type; void* ProxyServer; void* NoSavePassword; void* ShowNoSavePassword; void* AdminMode; int RetryIntervalSec; } ;
typedef TYPE_1__ UI_PASSWORD_DLG ;
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
 void* FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*,char*,int) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int *,int ) ;
 TYPE_3__* FUNC_21 (int) ;

bool FUNC_22(SESSION *VAR_2, UI_PASSWORD_DLG *VAR_3)
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
  FUNC_19(VAR_2->HaltEvent, VAR_2->RetryInterval);
  return 1;
 }

 VAR_5 = FUNC_5();
 FUNC_9(VAR_5, "function", "password_dialog");
 FUNC_8(VAR_5, "Type", VAR_3->Type);
 FUNC_9(VAR_5, "Username", VAR_3->Username);
 FUNC_9(VAR_5, "Password", VAR_3->Password);
 FUNC_9(VAR_5, "ServerName", VAR_3->ServerName);
 FUNC_8(VAR_5, "RetryIntervalSec", VAR_3->RetryIntervalSec);
 FUNC_7(VAR_5, "ProxyServer", VAR_3->ProxyServer);
 FUNC_7(VAR_5, "AdminMode", VAR_3->AdminMode);
 FUNC_7(VAR_5, "ShowNoSavePassword", VAR_3->ShowNoSavePassword);
 FUNC_7(VAR_5, "NoSavePassword", VAR_3->NoSavePassword);

 FUNC_17(VAR_4, VAR_5);
 FUNC_3(VAR_5);

 VAR_6 = FUNC_21(sizeof(CNC_CONNECT_ERROR_DLG_THREAD_PARAM));
 VAR_6->Session = VAR_2;
 VAR_6->Sock = VAR_4;
 VAR_6->Event = FUNC_4();

 VAR_7 = FUNC_6(VAR_0, VAR_6);

 VAR_5 = FUNC_13(VAR_4);
 if (VAR_5 != ((void*)0))
 {
  VAR_8 = FUNC_10(VAR_5, "ok");
  VAR_3->NoSavePassword = FUNC_10(VAR_5, "NoSavePassword");
  VAR_3->ProxyServer = FUNC_10(VAR_5, "ProxyServer");
  VAR_3->Type = FUNC_11(VAR_5, "Type");
  FUNC_12(VAR_5, "Username", VAR_3->Username, sizeof(VAR_3->Username));
  FUNC_12(VAR_5, "Password", VAR_3->Password, sizeof(VAR_3->Password));

  FUNC_3(VAR_5);
 }

 VAR_6->HaltThread = 1;
 FUNC_18(VAR_6->Event);

 FUNC_20(VAR_7, VAR_1);

 FUNC_14(VAR_6->Event);
 FUNC_2(VAR_6);
 FUNC_16(VAR_7);

 FUNC_1(VAR_4);
 FUNC_15(VAR_4);

 return VAR_8;
}
