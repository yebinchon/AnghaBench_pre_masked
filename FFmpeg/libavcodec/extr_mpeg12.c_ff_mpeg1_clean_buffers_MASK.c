
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* last_dc; int intra_dc_precision; int last_mv; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(MpegEncContext *VAR_0)
{
    VAR_0->last_dc[0] = 1 << (7 + VAR_0->intra_dc_precision);
    VAR_0->last_dc[1] = VAR_0->last_dc[0];
    VAR_0->last_dc[2] = VAR_0->last_dc[0];
    FUNC_0(VAR_0->last_mv, 0, sizeof(VAR_0->last_mv));
}
