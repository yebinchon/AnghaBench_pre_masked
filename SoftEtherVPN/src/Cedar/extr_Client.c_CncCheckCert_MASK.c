
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* ServerName; void* SaveServerCert; void* DiffWarning; void* Ok; int old_x; int parent_x; int x; int AccountName; } ;
typedef TYPE_1__ UI_CHECKCERT ;
struct TYPE_8__ {int HaltThread; int Event; int * Session; int * Sock; } ;
typedef int THREAD ;
typedef int SOCK ;
typedef int SESSION ;
typedef int PACK ;
typedef TYPE_2__ CNC_CONNECT_ERROR_DLG_THREAD_PARAM ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int * FUNC_5 () ;
 int * FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int *,char*,void*) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *,char*,int ) ;
 void* FUNC_11 (int *,char*) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int ) ;
 TYPE_2__* FUNC_19 (int) ;

void FUNC_20(SESSION *VAR_2, UI_CHECKCERT *VAR_3)
{
 SOCK *VAR_4;
 PACK *VAR_5;
 CNC_CONNECT_ERROR_DLG_THREAD_PARAM *VAR_6;
 THREAD *VAR_7;

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_0();
 if (VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_5 = FUNC_5();
 FUNC_8(VAR_5, "function", "check_cert");
 FUNC_9(VAR_5, "AccountName", VAR_3->AccountName);
 FUNC_8(VAR_5, "ServerName", VAR_3->ServerName);
 FUNC_10(VAR_5, "x", VAR_3->x);
 FUNC_10(VAR_5, "parent_x", VAR_3->parent_x);
 FUNC_10(VAR_5, "old_x", VAR_3->old_x);
 FUNC_7(VAR_5, "DiffWarning", VAR_3->DiffWarning);
 FUNC_7(VAR_5, "Ok", VAR_3->Ok);
 FUNC_7(VAR_5, "SaveServerCert", VAR_3->SaveServerCert);

 FUNC_16(VAR_4, VAR_5);
 FUNC_3(VAR_5);

 VAR_6 = FUNC_19(sizeof(CNC_CONNECT_ERROR_DLG_THREAD_PARAM));
 VAR_6->Sock = VAR_4;
 VAR_6->Event = FUNC_4();
 VAR_6->Session = VAR_2;

 VAR_7 = FUNC_6(VAR_0, VAR_6);

 VAR_5 = FUNC_12(VAR_4);
 if (VAR_5 != ((void*)0))
 {
  VAR_3->Ok = FUNC_11(VAR_5, "Ok");
  VAR_3->DiffWarning = FUNC_11(VAR_5, "DiffWarning");
  VAR_3->SaveServerCert = FUNC_11(VAR_5, "SaveServerCert");

  FUNC_3(VAR_5);
 }

 VAR_6->HaltThread = 1;
 FUNC_17(VAR_6->Event);

 FUNC_18(VAR_7, VAR_1);

 FUNC_13(VAR_6->Event);
 FUNC_2(VAR_6);
 FUNC_15(VAR_7);

 FUNC_1(VAR_4);
 FUNC_14(VAR_4);
}
