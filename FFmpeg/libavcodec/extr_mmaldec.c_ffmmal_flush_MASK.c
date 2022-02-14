
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_8__ {TYPE_1__* decoder; } ;
struct TYPE_7__ {int * output; int * input; int control; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_COMPONENT_T ;
typedef TYPE_2__ MMALDecodeContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_4)
{
    MMALDecodeContext *VAR_5 = VAR_4->priv_data;
    MMAL_COMPONENT_T *VAR_6 = VAR_5->decoder;
    MMAL_STATUS_T VAR_7;

    FUNC_1(VAR_4);

    if ((VAR_7 = FUNC_2(VAR_6->control, VAR_1)))
        goto fail;
    if ((VAR_7 = FUNC_2(VAR_6->input[0], VAR_2)))
        goto fail;
    if ((VAR_7 = FUNC_2(VAR_6->output[0], VAR_3)))
        goto fail;

    return;

fail:
    FUNC_0(VAR_4, VAR_0, "MMAL flush error: %i\n", (int)VAR_7);
}
