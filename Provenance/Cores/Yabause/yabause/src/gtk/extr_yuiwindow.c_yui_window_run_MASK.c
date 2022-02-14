
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; int action_group; int run_func; } ;
typedef TYPE_1__ YuiWindow ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int * VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(YuiWindow * VAR_7) {
 FUNC_7(VAR_7);

 if ((VAR_7->state & VAR_3) && ((VAR_7->state & VAR_4) == 0)) {
  FUNC_2(VAR_1);
  FUNC_3(VAR_7->run_func, FUNC_0(1));
  FUNC_4(FUNC_1(VAR_7), VAR_6[VAR_5], 0);
  VAR_7->state |= VAR_4;
  FUNC_6(FUNC_5(VAR_7->action_group, "run"), VAR_0);
  FUNC_6(FUNC_5(VAR_7->action_group, "pause"), VAR_2);
 }
}
