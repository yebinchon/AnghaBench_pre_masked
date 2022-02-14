
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Thread; } ;
struct TYPE_7__ {scalar_t__ Param; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ CNC_STATUS_PRINTER_WINDOW_PARAM ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(SOCK *VAR_1)
{
 CNC_STATUS_PRINTER_WINDOW_PARAM *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = (CNC_STATUS_PRINTER_WINDOW_PARAM *)VAR_1->Param;


 FUNC_0(VAR_1);


 FUNC_4(VAR_2->Thread, VAR_0);
 FUNC_3(VAR_2->Thread);

 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
}
