
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int paused_handler; int yui; int running_handler; } ;
typedef TYPE_1__ YuiMem ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(YuiMem * VAR_0) {
 FUNC_1(VAR_0->yui, VAR_0->running_handler);
 FUNC_1(VAR_0->yui, VAR_0->paused_handler);

 FUNC_2(FUNC_0(VAR_0));
}
