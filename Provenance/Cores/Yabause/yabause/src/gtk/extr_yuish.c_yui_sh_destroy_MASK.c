
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bMaster; int paused_handler; int running_handler; } ;
typedef TYPE_1__ YuiSh ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

void FUNC_3(YuiSh * VAR_3) {
  FUNC_1(VAR_0, VAR_3->running_handler);
  FUNC_1(VAR_0, VAR_3->paused_handler);

  if ( VAR_3->bMaster ) VAR_1 = ((void*)0);
  else VAR_2 = ((void*)0);

  FUNC_2(FUNC_0(VAR_3));
}
