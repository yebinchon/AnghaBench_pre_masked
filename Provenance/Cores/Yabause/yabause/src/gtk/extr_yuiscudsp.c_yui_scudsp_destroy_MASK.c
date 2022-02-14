
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int paused_handler; int running_handler; } ;
typedef TYPE_1__ YuiScudsp ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;

void FUNC_3(YuiScudsp * VAR_2) {
  FUNC_1(VAR_0, VAR_2->running_handler);
  FUNC_1(VAR_0, VAR_2->paused_handler);

  VAR_1 = ((void*)0);

  FUNC_2(FUNC_0(VAR_2));
}
