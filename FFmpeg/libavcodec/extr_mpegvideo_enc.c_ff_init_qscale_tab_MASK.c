
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_6__ {int * qscale_table; } ;
struct TYPE_7__ {int mb_num; unsigned int* lambda_table; size_t* mb_index2xy; TYPE_1__* avctx; TYPE_2__ current_picture; } ;
struct TYPE_5__ {int qmax; int qmin; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ) ;

void FUNC_1(MpegEncContext *VAR_2)
{
    int8_t * const VAR_3 = VAR_2->current_picture.qscale_table;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->mb_num; VAR_4++) {
        unsigned int VAR_5 = VAR_2->lambda_table[VAR_2->mb_index2xy[VAR_4]];
        int VAR_6 = (VAR_5 * 139 + VAR_0 * 64) >> (VAR_1 + 7);
        VAR_3[VAR_2->mb_index2xy[VAR_4]] = FUNC_0(VAR_6, VAR_2->avctx->qmin,
                                                  VAR_2->avctx->qmax);
    }
}
