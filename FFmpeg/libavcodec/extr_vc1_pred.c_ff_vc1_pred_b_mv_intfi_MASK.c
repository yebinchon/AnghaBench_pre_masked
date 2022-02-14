
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void**** motion_val; } ;
struct TYPE_8__ {scalar_t__* mb_type; int *** motion_val; } ;
struct TYPE_10__ {int mb_x; int mb_y; int mb_stride; size_t* block_index; void**** mv; TYPE_1__ current_picture; int quarter_sample; TYPE_2__ next_picture; } ;
struct TYPE_9__ {scalar_t__ bmvtype; int mb_off; size_t blocks_off; int** mv_f_next; int* ref_field_type; int cur_field_type; int** mv_f; int * mb_type; int range_y; int range_x; int bfraction; TYPE_4__ s; } ;
typedef TYPE_3__ VC1Context ;
typedef TYPE_4__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int,int,int,int,int ,int ,int ,int,int) ;
 void* FUNC_1 (int ,int ,int,int ) ;

void FUNC_2(VC1Context *VAR_4, int VAR_5, int *VAR_6, int *VAR_7,
                            int VAR_8, int *VAR_9)
{
    int VAR_10 = (VAR_4->bmvtype == VAR_0) ? 1 : 0;
    MpegEncContext *VAR_11 = &VAR_4->s;
    int VAR_12 = VAR_11->mb_x + VAR_11->mb_y * VAR_11->mb_stride;

    if (VAR_4->bmvtype == VAR_1) {
        int VAR_13, VAR_14, VAR_15;
        if (VAR_11->next_picture.mb_type[VAR_12 + VAR_4->mb_off] != VAR_3) {
            VAR_11->mv[0][0][0] = FUNC_1(VAR_11->next_picture.motion_val[1][VAR_11->block_index[0] + VAR_4->blocks_off][0],
                                      VAR_4->bfraction, 0, VAR_11->quarter_sample);
            VAR_11->mv[0][0][1] = FUNC_1(VAR_11->next_picture.motion_val[1][VAR_11->block_index[0] + VAR_4->blocks_off][1],
                                      VAR_4->bfraction, 0, VAR_11->quarter_sample);
            VAR_11->mv[1][0][0] = FUNC_1(VAR_11->next_picture.motion_val[1][VAR_11->block_index[0] + VAR_4->blocks_off][0],
                                      VAR_4->bfraction, 1, VAR_11->quarter_sample);
            VAR_11->mv[1][0][1] = FUNC_1(VAR_11->next_picture.motion_val[1][VAR_11->block_index[0] + VAR_4->blocks_off][1],
                                      VAR_4->bfraction, 1, VAR_11->quarter_sample);

            VAR_13 = VAR_4->mv_f_next[0][VAR_11->block_index[0] + VAR_4->blocks_off]
                      + VAR_4->mv_f_next[0][VAR_11->block_index[1] + VAR_4->blocks_off]
                      + VAR_4->mv_f_next[0][VAR_11->block_index[2] + VAR_4->blocks_off]
                      + VAR_4->mv_f_next[0][VAR_11->block_index[3] + VAR_4->blocks_off];
            VAR_15 = (VAR_13 > 2) ? 1 : 0;
        } else {
            VAR_11->mv[0][0][0] = VAR_11->mv[0][0][1] = 0;
            VAR_11->mv[1][0][0] = VAR_11->mv[1][0][1] = 0;
            VAR_15 = 0;
        }
        VAR_4->ref_field_type[0] = VAR_4->ref_field_type[1] = VAR_4->cur_field_type ^ VAR_15;
        for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
            VAR_11->current_picture.motion_val[0][VAR_11->block_index[VAR_14] + VAR_4->blocks_off][0] = VAR_11->mv[0][0][0];
            VAR_11->current_picture.motion_val[0][VAR_11->block_index[VAR_14] + VAR_4->blocks_off][1] = VAR_11->mv[0][0][1];
            VAR_11->current_picture.motion_val[1][VAR_11->block_index[VAR_14] + VAR_4->blocks_off][0] = VAR_11->mv[1][0][0];
            VAR_11->current_picture.motion_val[1][VAR_11->block_index[VAR_14] + VAR_4->blocks_off][1] = VAR_11->mv[1][0][1];
            VAR_4->mv_f[0][VAR_11->block_index[VAR_14] + VAR_4->blocks_off] = VAR_15;
            VAR_4->mv_f[1][VAR_11->block_index[VAR_14] + VAR_4->blocks_off] = VAR_15;
        }
        return;
    }
    if (VAR_4->bmvtype == VAR_2) {
        FUNC_0(VAR_4, 0, VAR_6[0], VAR_7[0], 1, VAR_4->range_x, VAR_4->range_y, VAR_4->mb_type[0], VAR_9[0], 0);
        FUNC_0(VAR_4, 0, VAR_6[1], VAR_7[1], 1, VAR_4->range_x, VAR_4->range_y, VAR_4->mb_type[0], VAR_9[1], 1);
        return;
    }
    if (VAR_10) {
        FUNC_0(VAR_4, VAR_5, VAR_6[1], VAR_7[1], VAR_8, VAR_4->range_x, VAR_4->range_y, VAR_4->mb_type[0], VAR_9[1], 1);
        if (VAR_5 == 3 || VAR_8) {
            FUNC_0(VAR_4, 0, VAR_6[0], VAR_7[0], 1, VAR_4->range_x, VAR_4->range_y, VAR_4->mb_type[0], 0, 0);
        }
    } else {
        FUNC_0(VAR_4, VAR_5, VAR_6[0], VAR_7[0], VAR_8, VAR_4->range_x, VAR_4->range_y, VAR_4->mb_type[0], VAR_9[0], 0);
        if (VAR_5 == 3 || VAR_8) {
            FUNC_0(VAR_4, 0, VAR_6[1], VAR_7[1], 1, VAR_4->range_x, VAR_4->range_y, VAR_4->mb_type[0], 0, 1);
        }
    }
}
