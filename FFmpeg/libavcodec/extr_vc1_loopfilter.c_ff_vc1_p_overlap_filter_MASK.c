
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_9__ {int mb_x; int mb_y; int mb_stride; size_t* block_index; int* block_wrap; int mb_width; scalar_t__ first_slice_line; TYPE_1__* avctx; } ;
struct TYPE_8__ {size_t topleft_blk_idx; size_t top_blk_idx; size_t left_blk_idx; size_t cur_blk_idx; scalar_t__ fcm; scalar_t__** mb_type; scalar_t__* fieldtx_plane; int *** block; TYPE_3__ s; } ;
typedef TYPE_2__ VC1Context ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int **,int **,int,int,int) ;
 int FUNC_1 (TYPE_2__*,int **,int **,int) ;

void FUNC_2(VC1Context *VAR_3)
{
    MpegEncContext *VAR_4 = &VAR_3->s;
    int16_t (*VAR_5)[64], (*VAR_6)[64], (*VAR_7)[64], (*VAR_8)[64];
    int VAR_9 = VAR_1 && (VAR_4->avctx->flags & VAR_0) ? 4 : 6;
    int VAR_10 = VAR_4->mb_x + VAR_4->mb_y * VAR_4->mb_stride;
    int VAR_11;

    VAR_5 = VAR_3->block[VAR_3->topleft_blk_idx];
    VAR_6 = VAR_3->block[VAR_3->top_blk_idx];
    VAR_7 = VAR_3->block[VAR_3->left_blk_idx];
    VAR_8 = VAR_3->block[VAR_3->cur_blk_idx];

    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
        if (VAR_4->mb_x == 0 && (VAR_11 & 5) != 1)
            continue;

        if (VAR_3->mb_type[0][VAR_4->block_index[VAR_11]] && VAR_3->mb_type[0][VAR_4->block_index[VAR_11] - 1])
            FUNC_0(VAR_3,
                                 VAR_4->mb_x ? VAR_7 : VAR_8, VAR_8,
                                 VAR_3->fcm == VAR_2 && VAR_4->mb_x && VAR_3->fieldtx_plane[VAR_10 - 1],
                                 VAR_3->fcm == VAR_2 && VAR_3->fieldtx_plane[VAR_10],
                                 VAR_11);
    }

    if (VAR_3->fcm != VAR_2)
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
            if (VAR_4->first_slice_line && !(VAR_11 & 2))
                continue;

            if (VAR_4->mb_x && VAR_3->mb_type[0][VAR_4->block_index[VAR_11] - 2 + (VAR_11 > 3)] &&
                VAR_3->mb_type[0][VAR_4->block_index[VAR_11] - VAR_4->block_wrap[VAR_11] - 2 + (VAR_11 > 3)])
                FUNC_1(VAR_3, VAR_4->first_slice_line ? VAR_7 : VAR_5, VAR_7, VAR_11);
            if (VAR_4->mb_x == VAR_4->mb_width - 1)
                if (VAR_3->mb_type[0][VAR_4->block_index[VAR_11]] &&
                    VAR_3->mb_type[0][VAR_4->block_index[VAR_11] - VAR_4->block_wrap[VAR_11]])
                    FUNC_1(VAR_3, VAR_4->first_slice_line ? VAR_8 : VAR_6, VAR_8, VAR_11);
        }
}
