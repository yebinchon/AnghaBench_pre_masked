
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int hw_frames_ctx; TYPE_3__* dst; } ;
struct TYPE_7__ {TYPE_6__* input_frames_ref; int * input_frames; } ;
typedef TYPE_1__ DeintCUDAContext ;
typedef int AVHWFramesContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    DeintCUDAContext *VAR_5 = VAR_4->priv;

    if (!VAR_3->hw_frames_ctx) {
        FUNC_2(VAR_4, VAR_0, "A hardware frames reference is "
               "required to associate the processing device.\n");
        return FUNC_0(VAR_1);
    }

    VAR_5->input_frames_ref = FUNC_1(VAR_3->hw_frames_ctx);
    if (!VAR_5->input_frames_ref) {
        FUNC_2(VAR_4, VAR_0, "A input frames reference create "
               "failed.\n");
        return FUNC_0(VAR_2);
    }
    VAR_5->input_frames = (AVHWFramesContext*)VAR_5->input_frames_ref->data;

    return 0;
}
