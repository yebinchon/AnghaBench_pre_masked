
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct bt_mesh_state_transition {int delay; TYPE_1__ timer; int flag; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct bt_mesh_state_transition *VAR_1)
{
    if (VAR_1->delay) {
        FUNC_2(&VAR_1->timer, FUNC_0(5 * VAR_1->delay));
        FUNC_1(VAR_1->flag, VAR_0);
    } else {
        FUNC_3(&VAR_1->timer.work);
    }
}
