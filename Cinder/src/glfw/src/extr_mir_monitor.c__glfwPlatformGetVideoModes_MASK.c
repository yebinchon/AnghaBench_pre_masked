
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_17__ {scalar_t__ output_id; } ;
struct TYPE_19__ {TYPE_2__ mir; } ;
typedef TYPE_4__ _GLFWmonitor ;
struct TYPE_22__ {int refreshRate; int height; int width; } ;
struct TYPE_21__ {int num_outputs; TYPE_5__* outputs; } ;
struct TYPE_20__ {scalar_t__ output_id; int num_modes; int * output_formats; TYPE_3__* modes; } ;
struct TYPE_18__ {int refresh_rate; int vertical_resolution; int horizontal_resolution; } ;
struct TYPE_16__ {int connection; } ;
struct TYPE_15__ {TYPE_1__ mir; } ;
typedef TYPE_5__ MirDisplayOutput ;
typedef TYPE_6__ MirDisplayConfiguration ;
typedef TYPE_7__ GLFWvidmode ;


 int FUNC_0 (TYPE_7__*,int ) ;
 TYPE_13__ VAR_0 ;
 TYPE_7__* FUNC_1 (int,int) ;
 TYPE_6__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;

GLFWvidmode* FUNC_4(_GLFWmonitor* VAR_1, int* VAR_2)
{
    int VAR_3;
    GLFWvidmode* VAR_4 = ((void*)0);
    MirDisplayConfiguration* VAR_5 =
        FUNC_2(VAR_0.mir.connection);

    for (VAR_3 = 0; VAR_3 < VAR_5->num_outputs; VAR_3++)
    {
        const MirDisplayOutput* VAR_6 = VAR_5->outputs + VAR_3;
        if (VAR_6->output_id != VAR_1->mir.output_id)
            continue;

        VAR_4 = FUNC_1(VAR_6->num_modes, sizeof(GLFWvidmode));

        for (*VAR_2 = 0; *VAR_2 < VAR_6->num_modes; (*VAR_2)++)
        {
            VAR_4[*VAR_2].width = VAR_6->modes[*VAR_2].horizontal_resolution;
            VAR_4[*VAR_2].height = VAR_6->modes[*VAR_2].vertical_resolution;
            VAR_4[*VAR_2].refreshRate = VAR_6->modes[*VAR_2].refresh_rate;

            FUNC_0(&VAR_4[*VAR_2], VAR_6->output_formats[*VAR_2]);
        }

        break;
    }

    FUNC_3(VAR_5);

    return VAR_4;
}
