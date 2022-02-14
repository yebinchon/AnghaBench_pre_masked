
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_25__ {scalar_t__ MaxFALL; scalar_t__ MaxCLL; } ;
struct TYPE_24__ {int has_primaries; int has_luminance; void* min_luminance; void* max_luminance; void** white_point; void*** display_primaries; } ;
struct TYPE_23__ {TYPE_3__* codecpar; } ;
struct TYPE_22__ {scalar_t__ r_x; scalar_t__ r_y; scalar_t__ g_x; scalar_t__ g_y; scalar_t__ b_x; scalar_t__ b_y; scalar_t__ white_x; scalar_t__ white_y; scalar_t__ max_luminance; scalar_t__ min_luminance; } ;
struct TYPE_17__ {int nb_elem; TYPE_4__* elem; } ;
struct TYPE_18__ {TYPE_1__ color; } ;
struct TYPE_21__ {TYPE_2__ video; } ;
struct TYPE_20__ {scalar_t__ matrix_coefficients; scalar_t__ primaries; scalar_t__ transfer_characteristics; scalar_t__ range; int chroma_siting_horz; int chroma_siting_vert; scalar_t__ max_fall; scalar_t__ max_cll; TYPE_6__ mastering_meta; } ;
struct TYPE_19__ {scalar_t__ color_space; scalar_t__ color_primaries; scalar_t__ color_trc; scalar_t__ color_range; int chroma_location; } ;
typedef TYPE_4__ MatroskaTrackVideoColor ;
typedef TYPE_5__ MatroskaTrack ;
typedef TYPE_6__ MatroskaMasteringMeta ;
typedef TYPE_7__ AVStream ;
typedef TYPE_8__ AVMasteringDisplayMetadata ;
typedef TYPE_9__ AVContentLightMetadata ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_9__* FUNC_1 (size_t*) ;
 void* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_9__**) ;
 int FUNC_4 (TYPE_7__*,int ,int *,size_t) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_8__*,int ,int) ;

__attribute__((used)) static int FUNC_8(AVStream *VAR_15, const MatroskaTrack *VAR_16) {
    const MatroskaTrackVideoColor *VAR_17 = VAR_16->video.color.elem;
    const MatroskaMasteringMeta *VAR_18;
    int VAR_19, VAR_20;

    if (!VAR_16->video.color.nb_elem)
        return 0;

    VAR_18 = &VAR_17->mastering_meta;

    VAR_19 =
        VAR_18->r_x > 0 && VAR_18->r_y > 0 &&
        VAR_18->g_x > 0 && VAR_18->g_y > 0 &&
        VAR_18->b_x > 0 && VAR_18->b_y > 0 &&
        VAR_18->white_x > 0 && VAR_18->white_y > 0;
    VAR_20 = VAR_18->max_luminance > 0;

    if (VAR_17->matrix_coefficients != VAR_4)
        VAR_15->codecpar->color_space = VAR_17->matrix_coefficients;
    if (VAR_17->primaries != VAR_0 &&
        VAR_17->primaries != VAR_1)
        VAR_15->codecpar->color_primaries = VAR_17->primaries;
    if (VAR_17->transfer_characteristics != VAR_5 &&
        VAR_17->transfer_characteristics != VAR_6)
        VAR_15->codecpar->color_trc = VAR_17->transfer_characteristics;
    if (VAR_17->range != VAR_3 &&
        VAR_17->range <= VAR_2)
        VAR_15->codecpar->color_range = VAR_17->range;
    if (VAR_17->chroma_siting_horz != VAR_12 &&
        VAR_17->chroma_siting_vert != VAR_14 &&
        VAR_17->chroma_siting_horz < VAR_11 &&
        VAR_17->chroma_siting_vert < VAR_13) {
        VAR_15->codecpar->chroma_location =
            FUNC_6((VAR_17->chroma_siting_horz - 1) << 7,
                                       (VAR_17->chroma_siting_vert - 1) << 7);
    }
    if (VAR_17->max_cll && VAR_17->max_fall) {
        size_t VAR_21 = 0;
        int VAR_22;
        AVContentLightMetadata *VAR_23 = FUNC_1(&VAR_21);
        if (!VAR_23)
            return FUNC_0(VAR_9);
        VAR_22 = FUNC_4(VAR_15, VAR_7,
                                      (uint8_t *)VAR_23, VAR_21);
        if (VAR_22 < 0) {
            FUNC_3(&VAR_23);
            return VAR_22;
        }
        VAR_23->MaxCLL = VAR_17->max_cll;
        VAR_23->MaxFALL = VAR_17->max_fall;
    }

    if (VAR_19 || VAR_20) {
        AVMasteringDisplayMetadata *VAR_24 =
            (AVMasteringDisplayMetadata*) FUNC_5(
                VAR_15, VAR_8,
                sizeof(AVMasteringDisplayMetadata));
        if (!VAR_24) {
            return FUNC_0(VAR_9);
        }
        FUNC_7(VAR_24, 0, sizeof(AVMasteringDisplayMetadata));
        if (VAR_19) {
            VAR_24->display_primaries[0][0] = FUNC_2(VAR_18->r_x, VAR_10);
            VAR_24->display_primaries[0][1] = FUNC_2(VAR_18->r_y, VAR_10);
            VAR_24->display_primaries[1][0] = FUNC_2(VAR_18->g_x, VAR_10);
            VAR_24->display_primaries[1][1] = FUNC_2(VAR_18->g_y, VAR_10);
            VAR_24->display_primaries[2][0] = FUNC_2(VAR_18->b_x, VAR_10);
            VAR_24->display_primaries[2][1] = FUNC_2(VAR_18->b_y, VAR_10);
            VAR_24->white_point[0] = FUNC_2(VAR_18->white_x, VAR_10);
            VAR_24->white_point[1] = FUNC_2(VAR_18->white_y, VAR_10);
            VAR_24->has_primaries = 1;
        }
        if (VAR_20) {
            VAR_24->max_luminance = FUNC_2(VAR_18->max_luminance, VAR_10);
            VAR_24->min_luminance = FUNC_2(VAR_18->min_luminance, VAR_10);
            VAR_24->has_luminance = 1;
        }
    }
    return 0;
}
