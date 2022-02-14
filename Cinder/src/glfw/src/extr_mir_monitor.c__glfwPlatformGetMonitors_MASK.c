
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_16__ {scalar_t__ cur_mode; int output_id; int y; int x; } ;
struct TYPE_17__ {int modeCount; int modes; TYPE_2__ mir; } ;
typedef TYPE_3__ _GLFWmonitor ;
struct TYPE_19__ {int num_outputs; TYPE_4__* outputs; } ;
struct TYPE_18__ {scalar_t__ num_modes; scalar_t__ current_mode; int output_id; int position_y; int position_x; int physical_height_mm; int physical_width_mm; scalar_t__ connected; scalar_t__ used; } ;
struct TYPE_15__ {int connection; } ;
struct TYPE_14__ {TYPE_1__ mir; } ;
typedef TYPE_4__ MirDisplayOutput ;
typedef TYPE_5__ MirDisplayConfiguration ;


 TYPE_13__ VAR_0 ;
 TYPE_3__* FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_3__** FUNC_4 (TYPE_3__**,int) ;

_GLFWmonitor** FUNC_5(int* VAR_1)
{
    int VAR_2, VAR_3 = 0;
    _GLFWmonitor** VAR_4 = ((void*)0);
    MirDisplayConfiguration* VAR_5 =
        FUNC_2(VAR_0.mir.connection);

    *VAR_1 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_5->num_outputs; VAR_2++)
    {
        const MirDisplayOutput* VAR_6 = VAR_5->outputs + VAR_2;

        if (VAR_6->used &&
            VAR_6->connected &&
            VAR_6->num_modes &&
            VAR_6->current_mode < VAR_6->num_modes)
        {
            VAR_3++;
            VAR_4 = FUNC_4(VAR_4, sizeof(_GLFWmonitor*) * VAR_3);
            VAR_4[VAR_2] = FUNC_0("Unknown",
                                                VAR_6->physical_width_mm,
                                                VAR_6->physical_height_mm);

            VAR_4[VAR_2]->mir.x = VAR_6->position_x;
            VAR_4[VAR_2]->mir.y = VAR_6->position_y;
            VAR_4[VAR_2]->mir.output_id = VAR_6->output_id;
            VAR_4[VAR_2]->mir.cur_mode = VAR_6->current_mode;

            VAR_4[VAR_2]->modes = FUNC_1(VAR_4[VAR_2],
                                                            &VAR_4[VAR_2]->modeCount);
        }
    }

    FUNC_3(VAR_5);

    *VAR_1 = VAR_3;
    return VAR_4;
}
