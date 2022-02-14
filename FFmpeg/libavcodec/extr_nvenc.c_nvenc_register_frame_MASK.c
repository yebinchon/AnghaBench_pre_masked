
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ pix_fmt; TYPE_4__* priv_data; } ;
struct TYPE_23__ {scalar_t__* data; int * linesize; TYPE_1__* hw_frames_ctx; } ;
struct TYPE_22__ {int sw_format; int height; int width; } ;
struct TYPE_21__ {int (* nvEncRegisterResource ) (int ,TYPE_5__*) ;} ;
struct TYPE_20__ {scalar_t__ resourceToRegister; intptr_t subResourceIndex; scalar_t__ bufferFormat; int registeredResource; int resourceType; int pitch; int height; int width; int version; } ;
struct TYPE_18__ {TYPE_6__ nvenc_funcs; } ;
struct TYPE_19__ {int nb_registered_frames; TYPE_2__* registered_frames; int nvencoder; TYPE_3__ nvenc_dload_funcs; } ;
struct TYPE_17__ {scalar_t__ ptr; intptr_t ptr_index; int regptr; } ;
struct TYPE_16__ {scalar_t__ data; } ;
typedef TYPE_3__ NvencDynLoadFunctions ;
typedef TYPE_4__ NvencContext ;
typedef TYPE_5__ NV_ENC_REGISTER_RESOURCE ;
typedef TYPE_6__ NV_ENCODE_API_FUNCTION_LIST ;
typedef TYPE_7__ AVHWFramesContext ;
typedef TYPE_8__ AVFrame ;
typedef TYPE_9__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_9__*,int ,char*,int ) ;
 int FUNC_3 (TYPE_9__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_9__*,int,char*) ;
 int FUNC_6 (int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_10, const AVFrame *VAR_11)
{
    NvencContext *VAR_12 = VAR_10->priv_data;
    NvencDynLoadFunctions *VAR_13 = &VAR_12->nvenc_dload_funcs;
    NV_ENCODE_API_FUNCTION_LIST *VAR_14 = &VAR_13->nvenc_funcs;

    AVHWFramesContext *VAR_15 = (AVHWFramesContext*)VAR_11->hw_frames_ctx->data;
    NV_ENC_REGISTER_RESOURCE VAR_16;
    int VAR_17, VAR_18, VAR_19;

    for (VAR_17 = 0; VAR_17 < VAR_12->nb_registered_frames; VAR_17++) {
        if (VAR_10->pix_fmt == VAR_2 && VAR_12->registered_frames[VAR_17].ptr == VAR_11->data[0])
            return VAR_17;
        else if (VAR_10->pix_fmt == VAR_3 && VAR_12->registered_frames[VAR_17].ptr == VAR_11->data[0] && VAR_12->registered_frames[VAR_17].ptr_index == (intptr_t)VAR_11->data[1])
            return VAR_17;
    }

    VAR_18 = FUNC_3(VAR_10);
    if (VAR_18 < 0)
        return VAR_18;

    VAR_16.version = VAR_8;
    VAR_16.width = VAR_15->width;
    VAR_16.height = VAR_15->height;
    VAR_16.pitch = VAR_11->linesize[0];
    VAR_16.resourceToRegister = VAR_11->data[0];

    if (VAR_10->pix_fmt == VAR_2) {
        VAR_16.resourceType = VAR_6;
    }
    else if (VAR_10->pix_fmt == VAR_3) {
        VAR_16.resourceType = VAR_7;
        VAR_16.subResourceIndex = (intptr_t)VAR_11->data[1];
    }

    VAR_16.bufferFormat = FUNC_4(VAR_15->sw_format);
    if (VAR_16.bufferFormat == VAR_5) {
        FUNC_2(VAR_10, VAR_1, "Invalid input pixel format: %s\n",
               FUNC_1(VAR_15->sw_format));
        return FUNC_0(VAR_4);
    }

    VAR_19 = VAR_14->nvEncRegisterResource(VAR_12->nvencoder, &VAR_16);
    if (VAR_19 != VAR_9) {
        FUNC_5(VAR_10, VAR_19, "Error registering an input resource");
        return VAR_0;
    }

    VAR_12->registered_frames[VAR_18].ptr = VAR_11->data[0];
    VAR_12->registered_frames[VAR_18].ptr_index = VAR_16.subResourceIndex;
    VAR_12->registered_frames[VAR_18].regptr = VAR_16.registeredResource;
    return VAR_18;
}
