
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mb_x; int mb_y; int mb_width; int quant_precision; int qscale; int pb; scalar_t__ mb_num; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,int) ;

void FUNC_3(MpegEncContext *VAR_0)
{
    int VAR_1 = FUNC_0(VAR_0->mb_num - 1) + 1;

    FUNC_2(&VAR_0->pb, FUNC_1(VAR_0), 0);
    FUNC_2(&VAR_0->pb, 1, 1);

    FUNC_2(&VAR_0->pb, VAR_1, VAR_0->mb_x + VAR_0->mb_y * VAR_0->mb_width);
    FUNC_2(&VAR_0->pb, VAR_0->quant_precision, VAR_0->qscale);
    FUNC_2(&VAR_0->pb, 1, 0);
}
