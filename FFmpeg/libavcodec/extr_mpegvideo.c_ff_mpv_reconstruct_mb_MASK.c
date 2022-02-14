
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {scalar_t__ out_format; TYPE_1__* avctx; } ;
struct TYPE_5__ {scalar_t__ lowres; } ;
typedef TYPE_2__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int **,int,int) ;

void FUNC_1(MpegEncContext *VAR_1, int16_t VAR_2[12][64])
{

    if(VAR_1->out_format == VAR_0) {
        if(VAR_1->avctx->lowres) FUNC_0(VAR_1, VAR_2, 1, 1);
        else FUNC_0(VAR_1, VAR_2, 0, 1);
    } else

    if(VAR_1->avctx->lowres) FUNC_0(VAR_1, VAR_2, 1, 0);
    else FUNC_0(VAR_1, VAR_2, 0, 0);
}
