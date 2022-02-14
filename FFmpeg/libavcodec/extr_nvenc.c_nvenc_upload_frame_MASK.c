
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_31__ {scalar_t__ pix_fmt; TYPE_4__* priv_data; } ;
struct TYPE_30__ {int * linesize; } ;
struct TYPE_29__ {int (* nvEncUnlockInputBuffer ) (int ,int ) ;int (* nvEncLockInputBuffer ) (int ,TYPE_5__*) ;int (* nvEncMapInputResource ) (int ,TYPE_10__*) ;} ;
struct TYPE_28__ {int pitch; int inputBuffer; int version; int member_0; } ;
struct TYPE_26__ {TYPE_6__ nvenc_funcs; } ;
struct TYPE_27__ {int nvencoder; TYPE_1__* registered_frames; TYPE_3__ nvenc_dload_funcs; } ;
struct TYPE_25__ {int reg_idx; int input_surface; int pitch; int format; int in_ref; } ;
struct TYPE_23__ {int mappedBufferFmt; int mappedResource; int registeredResource; int version; } ;
struct TYPE_24__ {TYPE_10__ in_map; scalar_t__ mapped; int regptr; } ;
typedef TYPE_2__ NvencSurface ;
typedef TYPE_3__ NvencDynLoadFunctions ;
typedef TYPE_4__ NvencContext ;
typedef TYPE_5__ NV_ENC_LOCK_INPUT_BUFFER ;
typedef TYPE_6__ NV_ENCODE_API_FUNCTION_LIST ;
typedef int NVENCSTATUS ;
typedef TYPE_7__ AVFrame ;
typedef TYPE_8__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_7__ const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_8__*,int ,char*) ;
 int FUNC_3 (TYPE_8__*,TYPE_2__*,TYPE_5__*,TYPE_7__ const*) ;
 int FUNC_4 (TYPE_8__*,int ,char*) ;
 int FUNC_5 (TYPE_8__*,TYPE_7__ const*) ;
 int FUNC_6 (int ,TYPE_10__*) ;
 int FUNC_7 (int ,TYPE_5__*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_6, const AVFrame *VAR_7,
                                      NvencSurface *VAR_8)
{
    NvencContext *VAR_9 = VAR_6->priv_data;
    NvencDynLoadFunctions *VAR_10 = &VAR_9->nvenc_dload_funcs;
    NV_ENCODE_API_FUNCTION_LIST *VAR_11 = &VAR_10->nvenc_funcs;

    int VAR_12;
    NVENCSTATUS VAR_13;

    if (VAR_6->pix_fmt == VAR_1 || VAR_6->pix_fmt == VAR_2) {
        int VAR_14 = FUNC_5(VAR_6, VAR_7);
        if (VAR_14 < 0) {
            FUNC_2(VAR_6, VAR_0, "Could not register an input HW frame\n");
            return VAR_14;
        }

        VAR_12 = FUNC_0(VAR_8->in_ref, VAR_7);
        if (VAR_12 < 0)
            return VAR_12;

        if (!VAR_9->registered_frames[VAR_14].mapped) {
            VAR_9->registered_frames[VAR_14].in_map.version = VAR_4;
            VAR_9->registered_frames[VAR_14].in_map.registeredResource = VAR_9->registered_frames[VAR_14].regptr;
            VAR_13 = VAR_11->nvEncMapInputResource(VAR_9->nvencoder, &VAR_9->registered_frames[VAR_14].in_map);
            if (VAR_13 != VAR_5) {
                FUNC_1(VAR_8->in_ref);
                return FUNC_4(VAR_6, VAR_13, "Error mapping an input resource");
            }
        }

        VAR_9->registered_frames[VAR_14].mapped += 1;

        VAR_8->reg_idx = VAR_14;
        VAR_8->input_surface = VAR_9->registered_frames[VAR_14].in_map.mappedResource;
        VAR_8->format = VAR_9->registered_frames[VAR_14].in_map.mappedBufferFmt;
        VAR_8->pitch = VAR_7->linesize[0];

        return 0;
    } else {
        NV_ENC_LOCK_INPUT_BUFFER VAR_15 = { 0 };

        VAR_15.version = VAR_3;
        VAR_15.inputBuffer = VAR_8->input_surface;

        VAR_13 = VAR_11->nvEncLockInputBuffer(VAR_9->nvencoder, &VAR_15);
        if (VAR_13 != VAR_5) {
            return FUNC_4(VAR_6, VAR_13, "Failed locking nvenc input buffer");
        }

        VAR_8->pitch = VAR_15.pitch;
        VAR_12 = FUNC_3(VAR_6, VAR_8, &VAR_15, VAR_7);

        VAR_13 = VAR_11->nvEncUnlockInputBuffer(VAR_9->nvencoder, VAR_8->input_surface);
        if (VAR_13 != VAR_5) {
            return FUNC_4(VAR_6, VAR_13, "Failed unlocking input buffer!");
        }

        return VAR_12;
    }
}
