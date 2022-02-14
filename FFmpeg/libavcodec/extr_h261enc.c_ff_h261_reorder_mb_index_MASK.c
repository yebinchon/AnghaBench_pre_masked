
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mb_x; int mb_y; int mb_width; int height; int width; scalar_t__*** last_mv; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void FUNC_4(MpegEncContext *VAR_0)
{
    int VAR_1 = VAR_0->mb_x + VAR_0->mb_y * VAR_0->mb_width;

    if (VAR_1 % 11 == 0) {
        if (VAR_1 % 33 == 0)
            FUNC_3(VAR_0, 0);
        VAR_0->last_mv[0][0][0] = 0;
        VAR_0->last_mv[0][0][1] = 0;
    }



    if (FUNC_0(VAR_0->width, VAR_0->height) == 1) {
        VAR_0->mb_x = VAR_1 % 11;
        VAR_1 /= 11;
        VAR_0->mb_y = VAR_1 % 3;
        VAR_1 /= 3;
        VAR_0->mb_x += 11 * (VAR_1 % 2);
        VAR_1 /= 2;
        VAR_0->mb_y += 3 * VAR_1;

        FUNC_1(VAR_0);
        FUNC_2(VAR_0);
    }
}
