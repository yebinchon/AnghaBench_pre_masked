
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int*** motion_val; } ;
struct TYPE_5__ {int mb_x; int mb_y; int mb_stride; int** p_mv_table; int* block_index; TYPE_1__ current_picture; scalar_t__ b8_stride; } ;
typedef TYPE_2__ MpegEncContext ;



__attribute__((used)) static inline void FUNC_0(MpegEncContext * VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    const int VAR_4= VAR_0->mb_x + VAR_0->mb_y*VAR_0->mb_stride;

    VAR_0->p_mv_table[VAR_4][0] = VAR_1;
    VAR_0->p_mv_table[VAR_4][1] = VAR_2;


    if(VAR_3){
        int VAR_5= VAR_0->block_index[0];

        VAR_0->current_picture.motion_val[0][VAR_5 ][0] = VAR_1;
        VAR_0->current_picture.motion_val[0][VAR_5 ][1] = VAR_2;
        VAR_0->current_picture.motion_val[0][VAR_5 + 1][0] = VAR_1;
        VAR_0->current_picture.motion_val[0][VAR_5 + 1][1] = VAR_2;

        VAR_5 += VAR_0->b8_stride;
        VAR_0->current_picture.motion_val[0][VAR_5 ][0] = VAR_1;
        VAR_0->current_picture.motion_val[0][VAR_5 ][1] = VAR_2;
        VAR_0->current_picture.motion_val[0][VAR_5 + 1][0] = VAR_1;
        VAR_0->current_picture.motion_val[0][VAR_5 + 1][1] = VAR_2;
    }
}
