
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int max_br_high; int max_luma_ps; int max_slice_segments_per_picture; int max_tile_rows; int max_tile_cols; int max_br_main; } ;
struct TYPE_12__ {scalar_t__ lower_bit_rate; int profile_idc; int max_dpb_pic_buf; scalar_t__ cpb_nal_factor; scalar_t__ intra; scalar_t__ high_throughput; } ;
struct TYPE_11__ {int general_tier_flag; int general_lower_bit_rate_constraint_flag; } ;
typedef TYPE_1__ H265RawProfileTierLevel ;
typedef TYPE_2__ H265ProfileDescriptor ;
typedef TYPE_3__ H265LevelDescriptor ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__ const*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;

const H265LevelDescriptor *FUNC_3(const H265RawProfileTierLevel *VAR_2,
                                               int64_t VAR_3,
                                               int VAR_4, int VAR_5,
                                               int VAR_6,
                                               int VAR_7, int VAR_8,
                                               int VAR_9)
{
    const H265ProfileDescriptor *VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15;

    if (VAR_2)
        VAR_10 = FUNC_2(VAR_2);
    else
        VAR_10 = ((void*)0);
    if (!VAR_10) {

        VAR_10 = &VAR_1[3];
    }

    VAR_11 = VAR_4 * VAR_5;

    if (VAR_2) {
        VAR_12 = VAR_2->general_tier_flag;
        VAR_13 = VAR_2->general_lower_bit_rate_constraint_flag;
    } else {
        VAR_12 = 0;
        VAR_13 = VAR_10->lower_bit_rate > 0;
    }
    if (VAR_10->profile_idc == 1 || VAR_10->profile_idc == 2) {
        VAR_14 = 1;
    } else if (VAR_10->high_throughput) {
        if (VAR_10->intra)
            VAR_14 = 24 - 12 * VAR_13;
        else
            VAR_14 = 6;
    } else {
        VAR_14 = 2 - VAR_13;
    }

    for (VAR_15 = 0; VAR_15 < FUNC_1(VAR_0); VAR_15++) {
        const H265LevelDescriptor *VAR_16 = &VAR_0[VAR_15];
        int VAR_17, VAR_18;

        if (VAR_12 && !VAR_16->max_br_high)
            continue;

        if (VAR_11 > VAR_16->max_luma_ps)
            continue;
        if (VAR_4 * VAR_4 > 8 * VAR_16->max_luma_ps)
            continue;
        if (VAR_5 * VAR_5 > 8 * VAR_16->max_luma_ps)
            continue;

        if (VAR_6 > VAR_16->max_slice_segments_per_picture)
            continue;
        if (VAR_7 > VAR_16->max_tile_rows)
            continue;
        if (VAR_8 > VAR_16->max_tile_cols)
            continue;

        if (VAR_12)
            VAR_17 = VAR_16->max_br_high;
        else
            VAR_17 = VAR_16->max_br_main;
        if (!VAR_17)
            continue;
        if (VAR_3 > (int64_t)VAR_10->cpb_nal_factor * VAR_14 * VAR_17)
            continue;

        if (VAR_11 <= (VAR_16->max_luma_ps >> 2))
            VAR_18 = FUNC_0(4 * VAR_10->max_dpb_pic_buf, 16);
        else if (VAR_11 <= (VAR_16->max_luma_ps >> 1))
            VAR_18 = FUNC_0(2 * VAR_10->max_dpb_pic_buf, 16);
        else if (VAR_11 <= (3 * VAR_16->max_luma_ps >> 2))
            VAR_18 = FUNC_0(4 * VAR_10->max_dpb_pic_buf / 3, 16);
        else
            VAR_18 = VAR_10->max_dpb_pic_buf;
        if (VAR_9 > VAR_18)
            continue;

        return VAR_16;
    }

    return ((void*)0);
}
