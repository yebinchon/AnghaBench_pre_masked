
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int action_group; int area; } ;
typedef TYPE_1__ YuiWindow ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int * VAR_5 ;

void FUNC_9(YuiWindow * VAR_6) {
 if (VAR_6->state & VAR_3) {
  FUNC_8(FUNC_3(VAR_6->area));
  FUNC_2(VAR_1);
  FUNC_4(FUNC_0(1));
  FUNC_5(FUNC_1(VAR_6), VAR_5[VAR_4], 0);
  VAR_6->state &= ~VAR_3;
  FUNC_7(FUNC_6(VAR_6->action_group, "run"), VAR_2);
  FUNC_7(FUNC_6(VAR_6->action_group, "pause"), VAR_0);
 }
}
