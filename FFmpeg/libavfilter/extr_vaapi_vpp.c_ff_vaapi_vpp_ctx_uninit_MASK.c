
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int device_ref; int input_frames_ref; int (* pipeline_uninit ) (TYPE_2__*) ;scalar_t__ valid_ids; } ;
typedef TYPE_1__ VAAPIVPPContext ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(AVFilterContext *VAR_0)
{
    VAAPIVPPContext *VAR_1 = VAR_0->priv;
    if (VAR_1->valid_ids && VAR_1->pipeline_uninit)
        VAR_1->pipeline_uninit(VAR_0);

    FUNC_0(&VAR_1->input_frames_ref);
    FUNC_0(&VAR_1->device_ref);
}
