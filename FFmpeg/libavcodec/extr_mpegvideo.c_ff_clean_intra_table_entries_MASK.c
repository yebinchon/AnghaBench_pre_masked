
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int b8_stride; int* block_index; int** dc_val; int msmpeg4_version; int mb_stride; int mb_x; int mb_y; scalar_t__* mbintra_table; int ** ac_val; scalar_t__* coded_block; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(MpegEncContext *VAR_0)
{
    int VAR_1 = VAR_0->b8_stride;
    int VAR_2 = VAR_0->block_index[0];

    VAR_0->dc_val[0][VAR_2 ] =
    VAR_0->dc_val[0][VAR_2 + 1 ] =
    VAR_0->dc_val[0][VAR_2 + VAR_1] =
    VAR_0->dc_val[0][VAR_2 + 1 + VAR_1] = 1024;

    FUNC_0(VAR_0->ac_val[0][VAR_2 ], 0, 32 * sizeof(int16_t));
    FUNC_0(VAR_0->ac_val[0][VAR_2 + VAR_1], 0, 32 * sizeof(int16_t));
    if (VAR_0->msmpeg4_version>=3) {
        VAR_0->coded_block[VAR_2 ] =
        VAR_0->coded_block[VAR_2 + 1 ] =
        VAR_0->coded_block[VAR_2 + VAR_1] =
        VAR_0->coded_block[VAR_2 + 1 + VAR_1] = 0;
    }

    VAR_1 = VAR_0->mb_stride;
    VAR_2 = VAR_0->mb_x + VAR_0->mb_y * VAR_1;
    VAR_0->dc_val[1][VAR_2] =
    VAR_0->dc_val[2][VAR_2] = 1024;

    FUNC_0(VAR_0->ac_val[1][VAR_2], 0, 16 * sizeof(int16_t));
    FUNC_0(VAR_0->ac_val[2][VAR_2], 0, 16 * sizeof(int16_t));

    VAR_0->mbintra_table[VAR_2]= 0;
}
