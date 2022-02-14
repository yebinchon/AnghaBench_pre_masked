
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int * qscale_table; } ;
struct TYPE_5__ {int mb_x; int mb_y; int mb_stride; int* y_dc_scale_table; int* block_wrap; int** dc_val; int* block_index; TYPE_1__ current_picture; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static inline int FUNC_2(MpegEncContext *VAR_1, int VAR_2, int VAR_3, int VAR_4,
                              int VAR_5, int VAR_6,
                              int16_t **VAR_7, int *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    int16_t *VAR_14;
    int VAR_15 = VAR_1->mb_x + VAR_1->mb_y * VAR_1->mb_stride;
    int VAR_16, VAR_17 = 0;
    int VAR_18;


    VAR_16 = FUNC_0(VAR_1->current_picture.qscale_table[VAR_15]);
    VAR_18 = VAR_1->y_dc_scale_table[VAR_16] - 1;
    if (VAR_18 < 0)
        return 0;

    VAR_12 = VAR_1->block_wrap[VAR_4];
    VAR_14 = VAR_1->dc_val[0] + VAR_1->block_index[VAR_4];




    VAR_11 = VAR_14[ - 1];
    VAR_10 = VAR_14[ - 1 - VAR_12];
    VAR_9 = VAR_14[ - VAR_12];

    if (VAR_6 && (VAR_4 != 1 && VAR_4 != 3)) {
        VAR_17 = FUNC_0(VAR_1->current_picture.qscale_table[VAR_15 - 1]);
        if (VAR_17 && VAR_17 != VAR_16)
            VAR_11 = (int)((unsigned)VAR_11 * VAR_1->y_dc_scale_table[VAR_17] * VAR_0[VAR_18] + 0x20000) >> 18;
    }
    if (VAR_5 && (VAR_4 != 2 && VAR_4 != 3)) {
        VAR_17 = FUNC_0(VAR_1->current_picture.qscale_table[VAR_15 - VAR_1->mb_stride]);
        if (VAR_17 && VAR_17 != VAR_16)
            VAR_9 = (int)((unsigned)VAR_9 * VAR_1->y_dc_scale_table[VAR_17] * VAR_0[VAR_18] + 0x20000) >> 18;
    }
    if (VAR_5 && VAR_6 && (VAR_4 != 3)) {
        int VAR_19 = VAR_15;
        if (VAR_4 != 1)
            VAR_19--;
        if (VAR_4 != 2)
            VAR_19 -= VAR_1->mb_stride;
        VAR_17 = FUNC_0(VAR_1->current_picture.qscale_table[VAR_19]);
        if (VAR_17 && VAR_17 != VAR_16)
            VAR_10 = (int)((unsigned)VAR_10 * VAR_1->y_dc_scale_table[VAR_17] * VAR_0[VAR_18] + 0x20000) >> 18;
    }

    if (VAR_6 && (!VAR_5 || FUNC_1(VAR_9 - VAR_10) <= FUNC_1(VAR_10 - VAR_11))) {
        VAR_13 = VAR_11;
        *VAR_8 = 1;
    } else if (VAR_5) {
        VAR_13 = VAR_9;
        *VAR_8 = 0;
    } else {
        VAR_13 = 0;
        *VAR_8 = 1;
    }


    *VAR_7 = &VAR_14[0];
    return VAR_13;
}
