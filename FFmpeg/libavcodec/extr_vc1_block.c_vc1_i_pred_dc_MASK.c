
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_3__ {int y_dc_scale; int c_dc_scale; int* block_wrap; int** dc_val; int* block_index; scalar_t__ mb_x; scalar_t__ first_slice_line; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(MpegEncContext *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                int16_t **VAR_4, int *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    int16_t *VAR_12;
    static const uint16_t VAR_13[32] = {
        -1, 1024, 512, 341, 256, 205, 171, 146, 128,
             114, 102, 93, 85, 79, 73, 68, 64,
              60, 57, 54, 51, 49, 47, 45, 43,
              41, 39, 38, 37, 35, 34, 33
    };


    if (VAR_3 < 4) VAR_11 = VAR_0->y_dc_scale;
    else VAR_11 = VAR_0->c_dc_scale;

    VAR_9 = VAR_0->block_wrap[VAR_3];
    VAR_12 = VAR_0->dc_val[0] + VAR_0->block_index[VAR_3];




    VAR_8 = VAR_12[ - 1];
    VAR_7 = VAR_12[ - 1 - VAR_9];
    VAR_6 = VAR_12[ - VAR_9];

    if (VAR_2 < 9 || !VAR_1) {

        if (VAR_0->first_slice_line && (VAR_3 != 2 && VAR_3 != 3))
            VAR_7 = VAR_6 = VAR_13[VAR_11];
        if (VAR_0->mb_x == 0 && (VAR_3 != 1 && VAR_3 != 3))
            VAR_7 = VAR_8 = VAR_13[VAR_11];
    } else {

        if (VAR_0->first_slice_line && (VAR_3 != 2 && VAR_3 != 3))
            VAR_7 = VAR_6 = 0;
        if (VAR_0->mb_x == 0 && (VAR_3 != 1 && VAR_3 != 3))
            VAR_7 = VAR_8 = 0;
    }

    if (FUNC_0(VAR_6 - VAR_7) <= FUNC_0(VAR_7 - VAR_8)) {
        VAR_10 = VAR_8;
        *VAR_5 = 1;
    } else {
        VAR_10 = VAR_6;
        *VAR_5 = 0;
    }


    *VAR_4 = &VAR_12[0];
    return VAR_10;
}
