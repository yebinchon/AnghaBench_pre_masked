
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ebml_master ;
struct TYPE_7__ {scalar_t__ color_trc; scalar_t__ color_space; scalar_t__ color_primaries; scalar_t__ color_range; scalar_t__ chroma_location; } ;
struct TYPE_6__ {int MaxCLL; int MaxFALL; } ;
struct TYPE_5__ {int min_luminance; int max_luminance; scalar_t__ has_luminance; int * white_point; int ** display_primaries; scalar_t__ has_primaries; } ;
typedef int AVStream ;
typedef TYPE_1__ AVMasteringDisplayMetadata ;
typedef int AVIOContext ;
typedef TYPE_2__ AVContentLightMetadata ;
typedef TYPE_3__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ,int*) ;
 int FUNC_3 (int*,int*,scalar_t__) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int ,int) ;

__attribute__((used)) static int FUNC_11(AVIOContext *VAR_32, AVCodecParameters *VAR_33, AVStream *VAR_34) {
    AVIOContext *VAR_35;
    uint8_t *VAR_36;
    int VAR_37 = 0;
    int VAR_38, VAR_39;
    const uint8_t *VAR_40;

    VAR_38 = FUNC_5(&VAR_35);
    if (VAR_38 < 0)
        return VAR_38;

    if (VAR_33->color_trc != VAR_9 &&
        VAR_33->color_trc < VAR_8) {
        FUNC_9(VAR_35, VAR_21,
                      VAR_33->color_trc);
    }
    if (VAR_33->color_space != VAR_7 &&
        VAR_33->color_space < VAR_6) {
        FUNC_9(VAR_35, VAR_16, VAR_33->color_space);
    }
    if (VAR_33->color_primaries != VAR_3 &&
        VAR_33->color_primaries < VAR_2) {
        FUNC_9(VAR_35, VAR_19, VAR_33->color_primaries);
    }
    if (VAR_33->color_range != VAR_5 &&
        VAR_33->color_range < VAR_4) {
        FUNC_9(VAR_35, VAR_20, VAR_33->color_range);
    }
    if (VAR_33->chroma_location != VAR_1 &&
        VAR_33->chroma_location <= VAR_0) {
        int VAR_41, VAR_42;

        FUNC_3(&VAR_41, &VAR_42, VAR_33->chroma_location);
        FUNC_9(VAR_35, VAR_13, (VAR_41 >> 7) + 1);
        FUNC_9(VAR_35, VAR_14, (VAR_42 >> 7) + 1);
    }

    VAR_40 = FUNC_2(VAR_34, VAR_10,
                                        &VAR_37);
    if (VAR_37) {
        const AVContentLightMetadata *VAR_43 =
            (const AVContentLightMetadata*)VAR_40;
        FUNC_9(VAR_35, VAR_17, VAR_43->MaxCLL);
        FUNC_9(VAR_35, VAR_18, VAR_43->MaxFALL);
    }

    VAR_40 = FUNC_2(VAR_34, VAR_11,
                                        &VAR_37);
    if (VAR_37 == sizeof(AVMasteringDisplayMetadata)) {
        ebml_master VAR_44 = FUNC_10(
            VAR_35, VAR_15, 0);
        const AVMasteringDisplayMetadata *VAR_45 =
            (const AVMasteringDisplayMetadata*)VAR_40;
        if (VAR_45->has_primaries) {
            FUNC_8(VAR_35, VAR_28,
                           FUNC_1(VAR_45->display_primaries[0][0]));
            FUNC_8(VAR_35, VAR_29,
                           FUNC_1(VAR_45->display_primaries[0][1]));
            FUNC_8(VAR_35, VAR_24,
                           FUNC_1(VAR_45->display_primaries[1][0]));
            FUNC_8(VAR_35, VAR_25,
                           FUNC_1(VAR_45->display_primaries[1][1]));
            FUNC_8(VAR_35, VAR_22,
                           FUNC_1(VAR_45->display_primaries[2][0]));
            FUNC_8(VAR_35, VAR_23,
                           FUNC_1(VAR_45->display_primaries[2][1]));
            FUNC_8(VAR_35, VAR_30,
                           FUNC_1(VAR_45->white_point[0]));
            FUNC_8(VAR_35, VAR_31,
                           FUNC_1(VAR_45->white_point[1]));
        }
        if (VAR_45->has_luminance) {
            FUNC_8(VAR_35, VAR_26,
                           FUNC_1(VAR_45->max_luminance));
            FUNC_8(VAR_35, VAR_27,
                           FUNC_1(VAR_45->min_luminance));
        }
        FUNC_7(VAR_35, VAR_44);
    }

    VAR_39 = FUNC_4(VAR_35, &VAR_36);
    if (VAR_39) {
        ebml_master VAR_46 = FUNC_10(VAR_32, VAR_12, VAR_39);
        FUNC_6(VAR_32, VAR_36, VAR_39);
        FUNC_7(VAR_32, VAR_46);
    }
    FUNC_0(VAR_36);
    return 0;
}
