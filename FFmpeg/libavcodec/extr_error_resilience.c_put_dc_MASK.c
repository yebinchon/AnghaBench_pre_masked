
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_7__ {int** dc_val; int b8_stride; int mb_stride; TYPE_2__ cur_pic; } ;
struct TYPE_5__ {int* linesize; } ;
typedef TYPE_3__ ERContext ;



__attribute__((used)) static void FUNC_0(ERContext *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2,
                   uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    int *VAR_6 = VAR_0->cur_pic.f->linesize;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
        VAR_7 = VAR_0->dc_val[0][VAR_4 * 2 + (VAR_11 & 1) + (VAR_5 * 2 + (VAR_11 >> 1)) * VAR_0->b8_stride];
        if (VAR_7 < 0)
            VAR_7 = 0;
        else if (VAR_7 > 2040)
            VAR_7 = 2040;
        for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
            int VAR_12;
            for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
                VAR_1[VAR_12 + (VAR_11 & 1) * 8 + (VAR_10 + (VAR_11 >> 1) * 8) * VAR_6[0]] = VAR_7 / 8;
        }
    }
    VAR_8 = VAR_0->dc_val[1][VAR_4 + VAR_5 * VAR_0->mb_stride];
    VAR_9 = VAR_0->dc_val[2][VAR_4 + VAR_5 * VAR_0->mb_stride];
    if (VAR_8 < 0)
        VAR_8 = 0;
    else if (VAR_8 > 2040)
        VAR_8 = 2040;
    if (VAR_9 < 0)
        VAR_9 = 0;
    else if (VAR_9 > 2040)
        VAR_9 = 2040;

    if (VAR_3)
    for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
        int VAR_13;
        for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
            VAR_2[VAR_13 + VAR_10 * VAR_6[1]] = VAR_8 / 8;
            VAR_3[VAR_13 + VAR_10 * VAR_6[2]] = VAR_9 / 8;
        }
    }
}
