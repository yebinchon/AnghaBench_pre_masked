
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_4__* Session; TYPE_3__* Sock; } ;
struct TYPE_16__ {TYPE_2__* Account; } ;
struct TYPE_15__ {TYPE_5__* Param; } ;
struct TYPE_14__ {TYPE_1__* ClientOption; } ;
struct TYPE_13__ {int AccountName; } ;
typedef int THREAD ;
typedef TYPE_3__ SOCK ;
typedef TYPE_4__ SESSION ;
typedef int PACK ;
typedef TYPE_5__ CNC_STATUS_PRINTER_WINDOW_PARAM ;


 TYPE_3__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (int *) ;
 TYPE_5__* FUNC_10 (int) ;

SOCK *FUNC_11(SESSION *VAR_1)
{
 SOCK *VAR_2;
 PACK *VAR_3;
 THREAD *VAR_4;
 CNC_STATUS_PRINTER_WINDOW_PARAM *VAR_5;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0();

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_2();
 FUNC_4(VAR_3, "function", "status_printer");
 FUNC_5(VAR_3, "account_name", VAR_1->Account->ClientOption->AccountName);

 if (FUNC_8(VAR_2, VAR_3) == 0)
 {
  FUNC_1(VAR_3);
  FUNC_6(VAR_2);

  return ((void*)0);
 }

 FUNC_1(VAR_3);

 VAR_5 = FUNC_10(sizeof(CNC_STATUS_PRINTER_WINDOW_PARAM));
 VAR_5->Sock = VAR_2;
 VAR_5->Session = VAR_1;

 VAR_2->Param = VAR_5;

 VAR_4 = FUNC_3(VAR_0, VAR_5);
 FUNC_9(VAR_4);

 FUNC_7(VAR_4);

 return VAR_2;
}
