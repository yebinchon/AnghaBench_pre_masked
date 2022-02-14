
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct TYPE_4__ {float counter; } ;
struct bt_mesh_light_hsl_hue_srv {float tt_delta_hue; TYPE_2__ transition; TYPE_1__* state; } ;
struct TYPE_3__ {scalar_t__ target_hue; scalar_t__ hue; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;

void FUNC_1(struct bt_mesh_light_hsl_hue_srv *VAR_0,
                             u8_t VAR_1, u8_t VAR_2)
{
    FUNC_0(&VAR_0->transition, VAR_1, VAR_2);
    VAR_0->tt_delta_hue =
        ((float) (VAR_0->state->hue - VAR_0->state->target_hue) / VAR_0->transition.counter);
}
