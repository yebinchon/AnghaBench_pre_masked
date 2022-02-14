
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int tmp_out_surf ;
typedef int in_surf ;
struct TYPE_40__ {int flags; TYPE_1__* internal; TYPE_4__* priv_data; } ;
struct TYPE_39__ {scalar_t__ pict_type; scalar_t__ pts; scalar_t__ top_field_first; } ;
struct TYPE_38__ {scalar_t__ (* nvEncEncodePicture ) (int ,TYPE_6__*) ;} ;
struct TYPE_37__ {scalar_t__ inputTimeStamp; scalar_t__ encodePicFlags; int pictureStruct; int outputBitstream; int inputPitch; int inputHeight; int inputWidth; int bufferFmt; int inputBuffer; int version; int member_0; } ;
struct TYPE_36__ {int payloadType; int * payload; scalar_t__ payloadSize; } ;
struct TYPE_34__ {TYPE_7__ nvenc_funcs; } ;
struct TYPE_35__ {int encoder_flushing; scalar_t__* initial_pts; scalar_t__ forced_idr; int output_surface_ready_queue; int output_surface_queue; int timestamp_list; int nvencoder; scalar_t__ a53_cc; scalar_t__ first_packet_output; int d3d11_device; int cu_context; TYPE_3__ nvenc_dload_funcs; } ;
struct TYPE_33__ {int output_surface; int pitch; int height; int width; int format; int input_surface; } ;
struct TYPE_32__ {scalar_t__ draining; } ;
typedef TYPE_2__ NvencSurface ;
typedef TYPE_3__ NvencDynLoadFunctions ;
typedef TYPE_4__ NvencContext ;
typedef TYPE_5__ NV_ENC_SEI_PAYLOAD ;
typedef TYPE_6__ NV_ENC_PIC_PARAMS ;
typedef TYPE_7__ NV_ENCODE_API_FUNCTION_LIST ;
typedef scalar_t__ NVENCSTATUS ;
typedef TYPE_8__ AVFrame ;
typedef TYPE_9__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ,TYPE_2__**,int,int *) ;
 int FUNC_2 (int ,TYPE_2__**,int,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_8__ const*,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_8 (TYPE_8__ const*,int,void**,size_t*) ;
 TYPE_2__* FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_9__*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_9__*) ;
 int FUNC_12 (TYPE_9__*,scalar_t__,char*) ;
 int FUNC_13 (TYPE_9__*) ;
 int FUNC_14 (TYPE_9__*,TYPE_8__ const*,TYPE_2__*) ;
 int FUNC_15 (TYPE_9__*,TYPE_8__ const*) ;
 scalar_t__ FUNC_16 (int ,TYPE_6__*) ;
 int FUNC_17 (int ,scalar_t__) ;

int FUNC_18(AVCodecContext *VAR_17, const AVFrame *VAR_18)
{
    NVENCSTATUS VAR_19;
    NvencSurface *VAR_20, *VAR_21;
    int VAR_22, VAR_23;
    NV_ENC_SEI_PAYLOAD *VAR_24 = ((void*)0);
    size_t VAR_25;

    NvencContext *VAR_26 = VAR_17->priv_data;
    NvencDynLoadFunctions *VAR_27 = &VAR_26->nvenc_dload_funcs;
    NV_ENCODE_API_FUNCTION_LIST *VAR_28 = &VAR_27->nvenc_funcs;

    NV_ENC_PIC_PARAMS VAR_29 = { 0 };
    VAR_29.version = VAR_12;

    if ((!VAR_26->cu_context && !VAR_26->d3d11_device) || !VAR_26->nvencoder)
        return FUNC_0(VAR_7);

    if (VAR_26->encoder_flushing) {
        if (VAR_17->internal->draining)
            return VAR_0;

        VAR_26->encoder_flushing = 0;
        VAR_26->first_packet_output = 0;
        VAR_26->initial_pts[0] = VAR_4;
        VAR_26->initial_pts[1] = VAR_4;
        FUNC_3(VAR_26->timestamp_list);
    }

    if (VAR_18) {
        VAR_21 = FUNC_9(VAR_26);
        if (!VAR_21)
            return FUNC_0(VAR_6);

        VAR_22 = FUNC_13(VAR_17);
        if (VAR_22 < 0)
            return VAR_22;

        FUNC_15(VAR_17, VAR_18);

        VAR_22 = FUNC_14(VAR_17, VAR_18, VAR_21);

        VAR_23 = FUNC_11(VAR_17);
        if (VAR_23 < 0)
            return VAR_23;

        if (VAR_22)
            return VAR_22;

        VAR_29.inputBuffer = VAR_21->input_surface;
        VAR_29.bufferFmt = VAR_21->format;
        VAR_29.inputWidth = VAR_21->width;
        VAR_29.inputHeight = VAR_21->height;
        VAR_29.inputPitch = VAR_21->pitch;
        VAR_29.outputBitstream = VAR_21->output_surface;

        if (VAR_17->flags & VAR_1) {
            if (VAR_18->top_field_first)
                VAR_29.pictureStruct = VAR_14;
            else
                VAR_29.pictureStruct = VAR_13;
        } else {
            VAR_29.pictureStruct = VAR_15;
        }

        if (VAR_26->forced_idr >= 0 && VAR_18->pict_type == VAR_5) {
            VAR_29.encodePicFlags =
                VAR_26->forced_idr ? VAR_10 : VAR_11;
        } else {
            VAR_29.encodePicFlags = 0;
        }

        VAR_29.inputTimeStamp = VAR_18->pts;

        if (VAR_26->a53_cc && FUNC_5(VAR_18, VAR_2)) {
            if (FUNC_8(VAR_18, sizeof(NV_ENC_SEI_PAYLOAD), (void**)&VAR_24, &VAR_25) < 0) {
                FUNC_7(VAR_26, VAR_3, "Not enough memory for closed captions, skipping\n");
            }

            if (VAR_24) {
                VAR_24->payloadSize = (uint32_t)VAR_25;
                VAR_24->payloadType = 4;
                VAR_24->payload = (uint8_t*)(VAR_24 + 1);
            }
        }

        FUNC_10(VAR_17, &VAR_29, VAR_24);
    } else {
        VAR_29.encodePicFlags = VAR_9;
        VAR_26->encoder_flushing = 1;
    }

    VAR_22 = FUNC_13(VAR_17);
    if (VAR_22 < 0)
        return VAR_22;

    VAR_19 = VAR_28->nvEncEncodePicture(VAR_26->nvencoder, &VAR_29);
    FUNC_6(VAR_24);

    VAR_22 = FUNC_11(VAR_17);
    if (VAR_22 < 0)
        return VAR_22;

    if (VAR_19 != VAR_16 &&
        VAR_19 != VAR_8)
        return FUNC_12(VAR_17, VAR_19, "EncodePicture failed!");

    if (VAR_18) {
        FUNC_2(VAR_26->output_surface_queue, &VAR_21, sizeof(VAR_21), ((void*)0));
        FUNC_17(VAR_26->timestamp_list, VAR_18->pts);

        if (VAR_26->initial_pts[0] == VAR_4)
            VAR_26->initial_pts[0] = VAR_18->pts;
        else if (VAR_26->initial_pts[1] == VAR_4)
            VAR_26->initial_pts[1] = VAR_18->pts;
    }


    if (VAR_19 == VAR_16) {
        while (FUNC_4(VAR_26->output_surface_queue) > 0) {
            FUNC_1(VAR_26->output_surface_queue, &VAR_20, sizeof(VAR_20), ((void*)0));
            FUNC_2(VAR_26->output_surface_ready_queue, &VAR_20, sizeof(VAR_20), ((void*)0));
        }
    }

    return 0;
}
