
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_18__ {TYPE_2__** outputs; TYPE_1__** inputs; int hw_device_ctx; TYPE_3__* priv; } ;
struct TYPE_17__ {int* valid_sw_formats; int* valid_hw_formats; } ;
struct TYPE_16__ {TYPE_10__* hwdevice_ref; int * hwdevice; } ;
struct TYPE_15__ {int in_formats; } ;
struct TYPE_14__ {int out_formats; } ;
struct TYPE_13__ {scalar_t__ data; } ;
typedef TYPE_3__ HWUploadContext ;
typedef TYPE_4__ AVHWFramesConstraints ;
typedef int AVHWDeviceContext ;
typedef int AVFilterFormats ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_10__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_10__**) ;
 TYPE_4__* FUNC_3 (TYPE_10__*,int *) ;
 int FUNC_4 (TYPE_4__**) ;
 int FUNC_5 (TYPE_3__*,int ,char*) ;
 int FUNC_6 (int **,int const) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int const*) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_4)
{
    HWUploadContext *VAR_5 = VAR_4->priv;
    AVHWFramesConstraints *VAR_6 = ((void*)0);
    const enum AVPixelFormat *VAR_7, *VAR_8;
    AVFilterFormats *VAR_9 = ((void*)0);
    int VAR_10, VAR_11;

    if (!VAR_4->hw_device_ctx) {
        FUNC_5(VAR_5, VAR_0, "A hardware device reference is required "
               "to upload frames to.\n");
        return FUNC_0(VAR_2);
    }

    VAR_5->hwdevice_ref = FUNC_1(VAR_4->hw_device_ctx);
    if (!VAR_5->hwdevice_ref)
        return FUNC_0(VAR_3);
    VAR_5->hwdevice = (AVHWDeviceContext*)VAR_5->hwdevice_ref->data;

    VAR_6 = FUNC_3(VAR_5->hwdevice_ref, ((void*)0));
    if (!VAR_6) {
        VAR_10 = FUNC_0(VAR_2);
        goto fail;
    }

    VAR_7 = VAR_6->valid_sw_formats;
    VAR_8 = VAR_6->valid_hw_formats;

    VAR_9 = FUNC_8(VAR_8);
    if (!VAR_9) {
        VAR_10 = FUNC_0(VAR_3);
        goto fail;
    }
    if (VAR_7) {
        for (VAR_11 = 0; VAR_7[VAR_11] != VAR_1; VAR_11++) {
            VAR_10 = FUNC_6(&VAR_9, VAR_7[VAR_11]);
            if (VAR_10 < 0)
                goto fail;
        }
    }

    if ((VAR_10 = FUNC_7(VAR_9, &VAR_4->inputs[0]->out_formats)) < 0 ||
        (VAR_10 = FUNC_7(FUNC_8(VAR_8),
                              &VAR_4->outputs[0]->in_formats)) < 0)
        goto fail;

    FUNC_4(&VAR_6);
    return 0;

fail:
    FUNC_2(&VAR_5->hwdevice_ref);
    FUNC_4(&VAR_6);
    return VAR_10;
}
