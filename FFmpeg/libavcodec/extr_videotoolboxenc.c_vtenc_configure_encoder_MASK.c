
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_15__ {scalar_t__ codec_id; int has_b_frames; scalar_t__ profile; scalar_t__ entropy; int dts_delta; int session; int color_primaries; int ycbcr_matrix; int transfer_function; int allow_sw; scalar_t__ require_sw; int get_param_set_func; } ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_16__ {scalar_t__ codec_id; scalar_t__ max_b_frames; scalar_t__ pix_fmt; int flags; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int kVTVideoEncoderSpecification_EnableHardwareAcceleratedVideoEncoder; int kVTVideoEncoderSpecification_RequireHardwareAcceleratedVideoEncoder; int CMVideoFormatDescriptionGetHEVCParameterSetAtIndex; } ;
typedef int CMVideoCodecType ;
typedef int CFStringRef ;
typedef int * CFNumberRef ;
typedef int * CFMutableDictionaryRef ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_1 (int ,int,int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (TYPE_2__*,int ,char*,...) ;
 TYPE_12__ VAR_11 ;
 int FUNC_5 (TYPE_2__*,int **) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *,int **) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (TYPE_2__*,int ,int ,int *,int *,int *,int *) ;
 int FUNC_13 (TYPE_2__*,int ,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_17)
{
    CFMutableDictionaryRef VAR_18;
    CFMutableDictionaryRef VAR_19;
    CMVideoCodecType VAR_20;
    VTEncContext *VAR_21 = VAR_17->priv_data;
    CFStringRef VAR_22;
    CFNumberRef VAR_23 = ((void*)0);
    int VAR_24;

    VAR_20 = FUNC_6(VAR_17->codec_id);
    if (!VAR_20) {
        FUNC_4(VAR_17, VAR_2, "Error: no mapping for AVCodecID %d\n", VAR_17->codec_id);
        return FUNC_0(VAR_6);
    }

    VAR_21->codec_id = VAR_17->codec_id;

    if (VAR_21->codec_id == VAR_1) {
        VAR_21->get_param_set_func = VAR_5;

        VAR_21->has_b_frames = VAR_17->max_b_frames > 0;
        if(VAR_21->has_b_frames && VAR_21->profile == VAR_8){
            FUNC_4(VAR_17, VAR_3, "Cannot use B-frames with baseline profile. Output will not contain B-frames.\n");
            VAR_21->has_b_frames = 0;
        }

        if (VAR_21->entropy == VAR_9 && VAR_21->profile == VAR_8) {
            FUNC_4(VAR_17, VAR_3, "CABAC entropy requires 'main' or 'high' profile, but baseline was requested. Encode will not use CABAC entropy.\n");
            VAR_21->entropy = VAR_10;
        }

        if (!FUNC_10(VAR_17, &VAR_22)) return FUNC_0(VAR_6);
    } else {
        VAR_21->get_param_set_func = VAR_11.CMVideoFormatDescriptionGetHEVCParameterSetAtIndex;
        if (!VAR_21->get_param_set_func) return FUNC_0(VAR_6);
        if (!FUNC_11(VAR_17, &VAR_22)) return FUNC_0(VAR_6);
    }

    VAR_18 = FUNC_1(
        VAR_12,
        20,
        &VAR_15,
        &VAR_16
    );

    if (!VAR_18) return FUNC_0(VAR_7);


    if(VAR_21->require_sw) {
        FUNC_2(VAR_18,
                             VAR_11.kVTVideoEncoderSpecification_EnableHardwareAcceleratedVideoEncoder,
                             VAR_13);
    } else if (!VAR_21->allow_sw) {
        FUNC_2(VAR_18,
                             VAR_11.kVTVideoEncoderSpecification_RequireHardwareAcceleratedVideoEncoder,
                             VAR_14);
    } else {
        FUNC_2(VAR_18,
                             VAR_11.kVTVideoEncoderSpecification_EnableHardwareAcceleratedVideoEncoder,
                             VAR_14);
    }


    if (VAR_17->pix_fmt != VAR_4) {
        VAR_24 = FUNC_5(VAR_17, &VAR_19);
        if (VAR_24)
            goto init_cleanup;
    } else {
        VAR_19 = ((void*)0);
    }

    VAR_21->dts_delta = VAR_21->has_b_frames ? -1 : 0;

    FUNC_8(VAR_17, &VAR_21->transfer_function, &VAR_23);
    FUNC_9(VAR_17, &VAR_21->ycbcr_matrix);
    FUNC_7(VAR_17, &VAR_21->color_primaries);


    if (VAR_17->flags & VAR_0) {
        VAR_24 = FUNC_13(VAR_17,
                                          VAR_20,
                                          VAR_22,
                                          VAR_23,
                                          VAR_18,
                                          VAR_19);
        if (VAR_24)
            goto init_cleanup;
    }

    VAR_24 = FUNC_12(VAR_17,
                                  VAR_20,
                                  VAR_22,
                                  VAR_23,
                                  VAR_18,
                                  VAR_19,
                                  &VAR_21->session);

init_cleanup:
    if (VAR_23)
        FUNC_3(VAR_23);

    if (VAR_19)
        FUNC_3(VAR_19);

    FUNC_3(VAR_18);

    return VAR_24;
}
