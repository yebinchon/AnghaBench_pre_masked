
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32_t ;
typedef int WriterContext ;
struct TYPE_15__ {int height; int width; } ;
struct TYPE_14__ {double MaxCLL; double MaxFALL; } ;
struct TYPE_13__ {int max_luminance; int min_luminance; scalar_t__ has_luminance; int * white_point; int ** display_primaries; scalar_t__ has_primaries; } ;
struct TYPE_12__ {scalar_t__ type; int size; scalar_t__ data; } ;
struct TYPE_11__ {scalar_t__ projection; double padding; scalar_t__ roll; scalar_t__ pitch; scalar_t__ yaw; } ;
struct TYPE_10__ {int flags; int type; } ;
typedef int SectionID ;
typedef TYPE_1__ AVStereo3D ;
typedef TYPE_2__ AVSphericalMapping ;
typedef TYPE_3__ AVPacketSideData ;
typedef TYPE_4__ AVMasteringDisplayMetadata ;
typedef TYPE_5__ AVContentLightMetadata ;
typedef TYPE_6__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 double FUNC_0 (scalar_t__) ;
 double FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 double FUNC_2 (int *) ;
 char* FUNC_3 (scalar_t__) ;
 char const* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__ const*,int ,int ,size_t*,size_t*,size_t*,size_t*) ;
 char const* FUNC_6 (int ) ;
 int FUNC_7 (char*,double) ;
 int FUNC_8 (char*,int ,char) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (int *,char*,scalar_t__,int,char*,int,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void FUNC_13(WriterContext *VAR_9,
                                AVCodecParameters *VAR_10,
                                const AVPacketSideData *VAR_11,
                                int VAR_12,
                                SectionID VAR_13,
                                SectionID VAR_14)
{
    int VAR_15;

    FUNC_12(VAR_9, VAR_13);
    for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
        const AVPacketSideData *VAR_16 = &VAR_11[VAR_15];
        const char *VAR_17 = FUNC_3(VAR_16->type);

        FUNC_12(VAR_9, VAR_14);
        FUNC_9("side_data_type", VAR_17 ? VAR_17 : "unknown");
        if (VAR_16->type == VAR_1 && VAR_16->size >= 9*4) {
            FUNC_10(VAR_9, "displaymatrix", VAR_16->data, 9, " %11d", 3, 4, 1);
            FUNC_7("rotation", FUNC_2((int32_t *)VAR_16->data));
        } else if (VAR_16->type == VAR_5) {
            const AVStereo3D *VAR_18 = (AVStereo3D *)VAR_16->data;
            FUNC_9("type", FUNC_6(VAR_18->type));
            FUNC_7("inverted", !!(VAR_18->flags & VAR_8));
        } else if (VAR_16->type == VAR_4) {
            const AVSphericalMapping *VAR_19 = (AVSphericalMapping *)VAR_16->data;
            FUNC_9("projection", FUNC_4(VAR_19->projection));
            if (VAR_19->projection == VAR_6) {
                FUNC_7("padding", VAR_19->padding);
            } else if (VAR_19->projection == VAR_7) {
                size_t VAR_20, VAR_21, VAR_22, VAR_23;
                FUNC_5(VAR_19, VAR_10->width, VAR_10->height,
                                         &VAR_20, &VAR_21, &VAR_22, &VAR_23);
                FUNC_7("bound_left", VAR_20);
                FUNC_7("bound_top", VAR_21);
                FUNC_7("bound_right", VAR_22);
                FUNC_7("bound_bottom", VAR_23);
            }

            FUNC_7("yaw", (double) VAR_19->yaw / (1 << 16));
            FUNC_7("pitch", (double) VAR_19->pitch / (1 << 16));
            FUNC_7("roll", (double) VAR_19->roll / (1 << 16));
        } else if (VAR_16->type == VAR_3 && VAR_16->size == 10) {
            FUNC_7("skip_samples", FUNC_0(VAR_16->data));
            FUNC_7("discard_padding", FUNC_0(VAR_16->data + 4));
            FUNC_7("skip_reason", FUNC_1(VAR_16->data + 8));
            FUNC_7("discard_reason", FUNC_1(VAR_16->data + 9));
        } else if (VAR_16->type == VAR_2) {
            AVMasteringDisplayMetadata *VAR_24 = (AVMasteringDisplayMetadata *)VAR_16->data;

            if (VAR_24->has_primaries) {
                FUNC_8("red_x", VAR_24->display_primaries[0][0], '/');
                FUNC_8("red_y", VAR_24->display_primaries[0][1], '/');
                FUNC_8("green_x", VAR_24->display_primaries[1][0], '/');
                FUNC_8("green_y", VAR_24->display_primaries[1][1], '/');
                FUNC_8("blue_x", VAR_24->display_primaries[2][0], '/');
                FUNC_8("blue_y", VAR_24->display_primaries[2][1], '/');

                FUNC_8("white_point_x", VAR_24->white_point[0], '/');
                FUNC_8("white_point_y", VAR_24->white_point[1], '/');
            }

            if (VAR_24->has_luminance) {
                FUNC_8("min_luminance", VAR_24->min_luminance, '/');
                FUNC_8("max_luminance", VAR_24->max_luminance, '/');
            }
        } else if (VAR_16->type == VAR_0) {
            AVContentLightMetadata *VAR_25 = (AVContentLightMetadata *)VAR_16->data;
            FUNC_7("max_content", VAR_25->MaxCLL);
            FUNC_7("max_average", VAR_25->MaxFALL);
        }
        FUNC_11(VAR_9);
    }
    FUNC_11(VAR_9);
}
