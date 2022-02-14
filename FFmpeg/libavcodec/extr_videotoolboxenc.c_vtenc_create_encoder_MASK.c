
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {scalar_t__ codec_id; scalar_t__ entropy; int session; scalar_t__ realtime; int has_b_frames; scalar_t__ color_primaries; scalar_t__ ycbcr_matrix; scalar_t__ transfer_function; scalar_t__ frames_after; scalar_t__ frames_before; int allow_sw; } ;
typedef TYPE_1__ VTEncContext ;
typedef int VTCompressionSessionRef ;
struct TYPE_11__ {int kVTCompressionPropertyKey_RealTime; int kVTCompressionPropertyKey_H264EntropyMode; scalar_t__ kVTH264EntropyMode_CAVLC; scalar_t__ kVTH264EntropyMode_CABAC; } ;
struct TYPE_9__ {int num; int den; } ;
struct TYPE_10__ {int bit_rate; int rc_max_rate; scalar_t__ gop_size; TYPE_2__ sample_aspect_ratio; int height; int width; TYPE_1__* priv_data; } ;
typedef int SInt32 ;
typedef int CMVideoCodecType ;
typedef scalar_t__ CFStringRef ;
typedef scalar_t__ CFNumberRef ;
typedef scalar_t__ CFMutableDictionaryRef ;
typedef int CFDictionaryRef ;
typedef scalar_t__ CFArrayRef ;
typedef TYPE_2__ AVRational ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,void const**,int,int *) ;
 scalar_t__ FUNC_2 (int ,int,int *,int *) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ,TYPE_3__*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (TYPE_3__*,int ,char*,...) ;
 int FUNC_10 (int*,int*,int,int,int) ;
 TYPE_5__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_33,
                                CMVideoCodecType VAR_34,
                                CFStringRef VAR_35,
                                CFNumberRef VAR_36,
                                CFDictionaryRef VAR_37,
                                CFDictionaryRef VAR_38,
                                VTCompressionSessionRef *VAR_39)
{
    VTEncContext *VAR_40 = VAR_33->priv_data;
    SInt32 VAR_41 = VAR_33->bit_rate;
    SInt32 VAR_42 = VAR_33->rc_max_rate;
    CFNumberRef VAR_43;
    CFNumberRef VAR_44;
    CFNumberRef VAR_45;
    CFArrayRef VAR_46;
    int64_t VAR_47 = 0;
    int64_t VAR_48 = 0;
    void *VAR_49[2];

    int VAR_50 = FUNC_6(VAR_8,
                                            VAR_33->width,
                                            VAR_33->height,
                                            VAR_34,
                                            VAR_37,
                                            VAR_38,
                                            VAR_8,
                                            VAR_32,
                                            VAR_33,
                                            VAR_39);

    if (VAR_50 || !VAR_40->session) {
        FUNC_9(VAR_33, VAR_2, "Error: cannot create compression session: %d\n", VAR_50);


        if (!VAR_40->allow_sw) {
            FUNC_9(VAR_33, VAR_2, "Try -allow_sw 1. The hardware encoder may be busy, or not supported.\n");
        }


        return VAR_0;
    }

    VAR_43 = FUNC_4(VAR_8,
                                  VAR_13,
                                  &VAR_41);
    if (!VAR_43) return FUNC_0(VAR_4);

    VAR_50 = FUNC_8(VAR_40->session,
                                  VAR_21,
                                  VAR_43);
    FUNC_5(VAR_43);

    if (VAR_50) {
        FUNC_9(VAR_33, VAR_2, "Error setting bitrate property: %d\n", VAR_50);
        return VAR_0;
    }

    if (VAR_40->codec_id == VAR_1 && VAR_42 > 0) {

        VAR_47 = VAR_42 >> 3;
        VAR_44 = FUNC_4(VAR_8,
                                          VAR_14,
                                          &VAR_47);
        if (!VAR_44) {
            return FUNC_0(VAR_4);
        }
        VAR_48 = 1;
        VAR_45 = FUNC_4(VAR_8,
                                    VAR_14,
                                    &VAR_48);
        if (!VAR_45) {
            FUNC_5(VAR_44);
            return FUNC_0(VAR_4);
        }
        VAR_49[0] = (void *)VAR_44;
        VAR_49[1] = (void *)VAR_45;
        VAR_46 = FUNC_1(VAR_8,
                                         (const void **)VAR_49,
                                         2,
                                         &VAR_15);

        if (!VAR_46) {
            FUNC_5(VAR_44);
            FUNC_5(VAR_45);
            return FUNC_0(VAR_4);
        }
        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_23,
                                      VAR_46);

        FUNC_5(VAR_44);
        FUNC_5(VAR_45);
        FUNC_5(VAR_46);

        if (VAR_50) {
            FUNC_9(VAR_33, VAR_2, "Error setting max bitrate property: %d\n", VAR_50);
            return VAR_0;
        }
    }

    if (VAR_40->codec_id == VAR_1) {

        if (VAR_35) {
            VAR_50 = FUNC_8(VAR_40->session,
                                        VAR_28,
                                        VAR_35);
            if (VAR_50) {
                FUNC_9(VAR_33, VAR_2, "Error setting profile/level property: %d. Output will be encoded using a supported profile/level combination.\n", VAR_50);
            }
        }
    }

    if (VAR_33->gop_size > 0) {
        CFNumberRef VAR_51 = FUNC_4(VAR_8,
                                              VAR_12,
                                              &VAR_33->gop_size);
        if (!VAR_51) {
            return FUNC_0(VAR_4);
        }

        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_24,
                                      VAR_51);
        FUNC_5(VAR_51);

        if (VAR_50) {
            FUNC_9(VAR_33, VAR_2, "Error setting 'max key-frame interval' property: %d\n", VAR_50);
            return VAR_0;
        }
    }

    if (VAR_40->frames_before) {
        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_26,
                                      VAR_10);

        if (VAR_50 == VAR_31) {
            FUNC_9(VAR_33, VAR_3, "frames_before property is not supported on this device. Ignoring.\n");
        } else if (VAR_50) {
            FUNC_9(VAR_33, VAR_2, "Error setting frames_before property: %d\n", VAR_50);
        }
    }

    if (VAR_40->frames_after) {
        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_25,
                                      VAR_10);

        if (VAR_50 == VAR_31) {
            FUNC_9(VAR_33, VAR_3, "frames_after property is not supported on this device. Ignoring.\n");
        } else if (VAR_50) {
            FUNC_9(VAR_33, VAR_2, "Error setting frames_after property: %d\n", VAR_50);
        }
    }

    if (VAR_33->sample_aspect_ratio.num != 0) {
        CFNumberRef VAR_52;
        CFNumberRef VAR_53;
        CFMutableDictionaryRef VAR_54;
        AVRational *VAR_55 = &VAR_33->sample_aspect_ratio;

        FUNC_10(&VAR_55->num, &VAR_55->den,
                   VAR_55->num, VAR_55->den,
                  0xFFFFFFFF);

        VAR_52 = FUNC_4(VAR_8,
                             VAR_12,
                             &VAR_55->num);

        VAR_53 = FUNC_4(VAR_8,
                             VAR_12,
                             &VAR_55->den);



        VAR_54 = FUNC_2(VAR_8,
                                        2,
                                        &VAR_11,
                                        &VAR_16);

        if (!VAR_54 || !VAR_52 || !VAR_53) {
            if (VAR_54) FUNC_5(VAR_54);
            if (VAR_52) FUNC_5(VAR_52);
            if (VAR_53) FUNC_5(VAR_53);

            return FUNC_0(VAR_4);
        }

        FUNC_3(
            VAR_54,
            VAR_17,
            VAR_52);

        FUNC_3(
            VAR_54,
            VAR_18,
            VAR_53);

        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_27,
                                      VAR_54);

        FUNC_5(VAR_54);
        FUNC_5(VAR_52);
        FUNC_5(VAR_53);

        if (VAR_50) {
            FUNC_9(VAR_33,
                   VAR_2,
                   "Error setting pixel aspect ratio to %d:%d: %d.\n",
                   VAR_33->sample_aspect_ratio.num,
                   VAR_33->sample_aspect_ratio.den,
                   VAR_50);

            return VAR_0;
        }
    }


    if (VAR_40->transfer_function) {
        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_29,
                                      VAR_40->transfer_function);

        if (VAR_50) {
            FUNC_9(VAR_33, VAR_3, "Could not set transfer function: %d\n", VAR_50);
        }
    }


    if (VAR_40->ycbcr_matrix) {
        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_30,
                                      VAR_40->ycbcr_matrix);

        if (VAR_50) {
            FUNC_9(VAR_33, VAR_3, "Could not set ycbcr matrix: %d\n", VAR_50);
        }
    }


    if (VAR_40->color_primaries) {
        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_22,
                                      VAR_40->color_primaries);

        if (VAR_50) {
            FUNC_9(VAR_33, VAR_3, "Could not set color primaries: %d\n", VAR_50);
        }
    }

    if (VAR_36) {
        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_19,
                                      VAR_36);

        if (VAR_50) {
            FUNC_9(VAR_33, VAR_3, "Could not set gamma level: %d\n", VAR_50);
        }
    }

    if (!VAR_40->has_b_frames) {
        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_20,
                                      VAR_9);

        if (VAR_50) {
            FUNC_9(VAR_33, VAR_2, "Error setting 'allow frame reordering' property: %d\n", VAR_50);
            return VAR_0;
        }
    }

    if (VAR_40->entropy != VAR_6) {
        CFStringRef VAR_56 = VAR_40->entropy == VAR_5 ?
                                VAR_7.kVTH264EntropyMode_CABAC:
                                VAR_7.kVTH264EntropyMode_CAVLC;

        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_7.kVTCompressionPropertyKey_H264EntropyMode,
                                      VAR_56);

        if (VAR_50) {
            FUNC_9(VAR_33, VAR_2, "Error setting entropy property: %d\n", VAR_50);
        }
    }

    if (VAR_40->realtime) {
        VAR_50 = FUNC_8(VAR_40->session,
                                      VAR_7.kVTCompressionPropertyKey_RealTime,
                                      VAR_10);

        if (VAR_50) {
            FUNC_9(VAR_33, VAR_2, "Error setting realtime property: %d\n", VAR_50);
        }
    }

    VAR_50 = FUNC_7(VAR_40->session);
    if (VAR_50) {
        FUNC_9(VAR_33, VAR_2, "Error: cannot prepare encoder: %d\n", VAR_50);
        return VAR_0;
    }

    return 0;
}
