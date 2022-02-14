
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_9__ {int mb_x; int mb_y; int mb_stride; int mb_width; scalar_t__ first_slice_line; TYPE_1__* avctx; } ;
struct TYPE_8__ {size_t topleft_blk_idx; size_t top_blk_idx; size_t left_blk_idx; size_t cur_blk_idx; int pq; scalar_t__ profile; scalar_t__ condover; scalar_t__ fcm; scalar_t__* over_flags_plane; scalar_t__* fieldtx_plane; int *** block; TYPE_3__ s; } ;
typedef TYPE_2__ VC1Context ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int **,int **,int,int,int) ;
 int FUNC_1 (TYPE_2__*,int **,int **,int) ;

void FUNC_2(VC1Context *VAR_5)
{
    MpegEncContext *VAR_6 = &VAR_5->s;
    int16_t (*VAR_7)[64], (*VAR_8)[64], (*VAR_9)[64], (*VAR_10)[64];
    int VAR_11 = VAR_2 && (VAR_6->avctx->flags & VAR_0) ? 4 : 6;
    int VAR_12 = VAR_6->mb_x + VAR_6->mb_y * VAR_6->mb_stride;
    int VAR_13;

    VAR_7 = VAR_5->block[VAR_5->topleft_blk_idx];
    VAR_8 = VAR_5->block[VAR_5->top_blk_idx];
    VAR_9 = VAR_5->block[VAR_5->left_blk_idx];
    VAR_10 = VAR_5->block[VAR_5->cur_blk_idx];
    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
        if (VAR_6->mb_x == 0 && (VAR_13 & 5) != 1)
            continue;

        if (VAR_5->pq >= 9 || (VAR_5->profile == VAR_4 &&
                           (VAR_5->condover == VAR_1 ||
                            (VAR_5->over_flags_plane[VAR_12] &&
                             ((VAR_13 & 5) == 1 || VAR_5->over_flags_plane[VAR_12 - 1])))))
            FUNC_0(VAR_5,
                                 VAR_6->mb_x ? VAR_9 : VAR_10, VAR_10,
                                 VAR_5->fcm == VAR_3 && VAR_6->mb_x && VAR_5->fieldtx_plane[VAR_12 - 1],
                                 VAR_5->fcm == VAR_3 && VAR_5->fieldtx_plane[VAR_12],
                                 VAR_13);
    }

    if (VAR_5->fcm != VAR_3)
        for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
            if (VAR_6->first_slice_line && !(VAR_13 & 2))
                continue;

            if (VAR_6->mb_x &&
                (VAR_5->pq >= 9 || (VAR_5->profile == VAR_4 &&
                                (VAR_5->condover == VAR_1 ||
                                 (VAR_5->over_flags_plane[VAR_12 - 1] &&
                                  ((VAR_13 & 2) || VAR_5->over_flags_plane[VAR_12 - 1 - VAR_6->mb_stride]))))))
                FUNC_1(VAR_5, VAR_6->first_slice_line ? VAR_9 : VAR_7, VAR_9, VAR_13);
            if (VAR_6->mb_x == VAR_6->mb_width - 1 &&
                (VAR_5->pq >= 9 || (VAR_5->profile == VAR_4 &&
                                (VAR_5->condover == VAR_1 ||
                                 (VAR_5->over_flags_plane[VAR_12] &&
                                  ((VAR_13 & 2) || VAR_5->over_flags_plane[VAR_12 - VAR_6->mb_stride]))))))
                FUNC_1(VAR_5, VAR_6->first_slice_line ? VAR_10 : VAR_8, VAR_10, VAR_13);
        }
}
