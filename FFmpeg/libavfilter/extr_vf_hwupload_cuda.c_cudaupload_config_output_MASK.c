
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_13__ {TYPE_1__* priv; TYPE_3__** inputs; } ;
struct TYPE_12__ {int hw_frames_ctx; int h; int w; int format; TYPE_4__* src; } ;
struct TYPE_11__ {int height; int width; int sw_format; int format; } ;
struct TYPE_10__ {TYPE_6__* hwframe; int hwdevice; } ;
typedef TYPE_1__ CudaUploadContext ;
typedef TYPE_2__ AVHWFramesContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__**) ;
 TYPE_6__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    AVFilterLink *VAR_4 = VAR_3->inputs[0];
    CudaUploadContext *VAR_5 = VAR_3->priv;

    AVHWFramesContext *VAR_6;
    int VAR_7;

    FUNC_2(&VAR_5->hwframe);
    VAR_5->hwframe = FUNC_3(VAR_5->hwdevice);
    if (!VAR_5->hwframe)
        return FUNC_0(VAR_1);

    VAR_6 = (AVHWFramesContext*)VAR_5->hwframe->data;
    VAR_6->format = VAR_0;
    VAR_6->sw_format = VAR_4->format;
    VAR_6->width = VAR_4->w;
    VAR_6->height = VAR_4->h;

    VAR_7 = FUNC_4(VAR_5->hwframe);
    if (VAR_7 < 0)
        return VAR_7;

    VAR_2->hw_frames_ctx = FUNC_1(VAR_5->hwframe);
    if (!VAR_2->hw_frames_ctx)
        return FUNC_0(VAR_1);

    return 0;
}
