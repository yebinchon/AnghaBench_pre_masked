
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int b8_stride; int mb_y; int mb_x; int mb_stride; scalar_t__*** last_mv; scalar_t__* ac_val; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (scalar_t__,int ,int) ;

void FUNC_1(MpegEncContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4;

    VAR_3 = VAR_0->b8_stride;
    VAR_4 = (2 * VAR_0->mb_y - 1) * VAR_3 + VAR_0->mb_x * 2 - 1;
    VAR_1 = VAR_0->mb_stride;
    VAR_2 = (VAR_0->mb_y - 1) * VAR_1 + VAR_0->mb_x - 1;


    FUNC_0(VAR_0->ac_val[0] + VAR_4, 0, (VAR_3 * 2 + 1) * 16 * sizeof(int16_t));
    FUNC_0(VAR_0->ac_val[1] + VAR_2, 0, (VAR_1 + 1) * 16 * sizeof(int16_t));
    FUNC_0(VAR_0->ac_val[2] + VAR_2, 0, (VAR_1 + 1) * 16 * sizeof(int16_t));



    VAR_0->last_mv[0][0][0] =
    VAR_0->last_mv[0][0][1] =
    VAR_0->last_mv[1][0][0] =
    VAR_0->last_mv[1][0][1] = 0;
}
