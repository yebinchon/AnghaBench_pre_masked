
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_mesh_state_transition {int flag; int quo_tt; int timer; int start_timestamp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct bt_mesh_state_transition *VAR_1)
{
    VAR_1->start_timestamp = FUNC_3();
    FUNC_2(&VAR_1->timer, FUNC_0(VAR_1->quo_tt));
    FUNC_1(VAR_1->flag, VAR_0);
}
