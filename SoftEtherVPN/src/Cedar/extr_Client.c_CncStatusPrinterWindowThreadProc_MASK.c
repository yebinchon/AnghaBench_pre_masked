
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Session; TYPE_1__* Thread; int * Sock; } ;
struct TYPE_5__ {int ref; } ;
typedef TYPE_1__ THREAD ;
typedef int SOCK ;
typedef int PACK ;
typedef TYPE_2__ CNC_STATUS_PRINTER_WINDOW_PARAM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(THREAD *VAR_0, void *VAR_1)
{
 CNC_STATUS_PRINTER_WINDOW_PARAM *VAR_2;
 SOCK *VAR_3;
 PACK *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = (CNC_STATUS_PRINTER_WINDOW_PARAM *)VAR_1;
 VAR_3 = VAR_2->Sock;
 VAR_2->Thread = VAR_0;
 FUNC_0(VAR_2->Thread->ref);

 FUNC_2(VAR_0);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 != ((void*)0))
 {

  FUNC_4(VAR_2->Session, 1);

  FUNC_1(VAR_4);
 }
}
