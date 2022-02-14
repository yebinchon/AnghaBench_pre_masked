
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int profile_high_bit; int profile_low_bit; scalar_t__ frame_type; scalar_t__ color_space; int color_range; scalar_t__ intra_only; } ;
typedef TYPE_2__ VP9RawFrameHeader ;
struct TYPE_15__ {TYPE_2__ header; } ;
typedef TYPE_3__ VP9RawFrame ;
struct TYPE_17__ {int nb_units; TYPE_1__* units; } ;
struct TYPE_16__ {scalar_t__ color_space; int color_warnings; scalar_t__ color_range; int cbc; TYPE_5__ fragment; } ;
typedef TYPE_4__ VP9MetadataContext ;
struct TYPE_18__ {TYPE_4__* priv_data; } ;
struct TYPE_13__ {TYPE_3__* content; } ;
typedef TYPE_5__ CodedBitstreamFragment ;
typedef int AVPacket ;
typedef TYPE_6__ AVBSFContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_6__*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int ,TYPE_5__*,int *) ;
 int FUNC_5 (int ,int *,TYPE_5__*) ;

__attribute__((used)) static int FUNC_6(AVBSFContext *VAR_5, AVPacket *VAR_6)
{
    VP9MetadataContext *VAR_7 = VAR_5->priv_data;
    CodedBitstreamFragment *VAR_8 = &VAR_7->fragment;
    int VAR_9, VAR_10;

    VAR_9 = FUNC_2(VAR_5, VAR_6);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_9 = FUNC_4(VAR_7->cbc, VAR_8, VAR_6);
    if (VAR_9 < 0) {
        FUNC_0(VAR_5, VAR_0, "Failed to read packet.\n");
        goto fail;
    }

    for (VAR_10 = 0; VAR_10 < VAR_8->nb_units; VAR_10++) {
        VP9RawFrame *VAR_11 = VAR_8->units[VAR_10].content;
        VP9RawFrameHeader *VAR_12 = &VAR_11->header;
        int VAR_13 = (VAR_12->profile_high_bit << 1) + VAR_12->profile_low_bit;

        if (VAR_12->frame_type == VAR_4 ||
            VAR_12->intra_only && VAR_13 > 0) {
            if (VAR_7->color_space >= 0) {
                if (!(VAR_13 & 1) && VAR_7->color_space == VAR_3) {
                    if (!(VAR_7->color_warnings & 2)) {
                        FUNC_0(VAR_5, VAR_1, "Warning: RGB "
                               "incompatible with profiles 0 and 2.\n");
                        VAR_7->color_warnings |= 2;
                    }
                } else
                    VAR_12->color_space = VAR_7->color_space;
            }

            if (VAR_7->color_range >= 0)
                VAR_12->color_range = VAR_7->color_range;
            if (VAR_12->color_space == VAR_3) {
                if (!(VAR_7->color_warnings & 1) && !VAR_12->color_range) {
                    FUNC_0(VAR_5, VAR_1, "Warning: Color space RGB "
                           "implicitly sets color range to PC range.\n");
                    VAR_7->color_warnings |= 1;
                }
                VAR_12->color_range = 1;
            }
        } else if (!(VAR_7->color_warnings & 4) && VAR_12->intra_only && !VAR_13 &&
                   VAR_7->color_space >= 0 && VAR_7->color_space != VAR_2) {
            FUNC_0(VAR_5, VAR_1, "Warning: Intra-only frames in "
                   "profile 0 are automatically BT.601.\n");
            VAR_7->color_warnings |= 4;
        }
    }

    VAR_9 = FUNC_5(VAR_7->cbc, VAR_6, VAR_8);
    if (VAR_9 < 0) {
        FUNC_0(VAR_5, VAR_0, "Failed to write packet.\n");
        goto fail;
    }

    VAR_9 = 0;
fail:
    FUNC_3(VAR_7->cbc, VAR_8);

    if (VAR_9 < 0)
        FUNC_1(VAR_6);

    return VAR_9;
}
