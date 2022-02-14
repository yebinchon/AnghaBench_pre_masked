
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int q_scale_type; int lambda; int qscale; int lambda2; TYPE_1__* avctx; scalar_t__ vbv_ignore_qmax; } ;
struct TYPE_4__ {int qmin; int qmax; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int,int) ;
 int* VAR_3 ;

__attribute__((used)) static inline void FUNC_3(MpegEncContext *VAR_4)
{
    if (VAR_4->q_scale_type == 1 && 0) {
        int VAR_5;
        int VAR_6=VAR_2;
        int VAR_7 = 1;

        for (VAR_5 = 0 ; VAR_5<FUNC_1(VAR_3); VAR_5++) {
            int VAR_8 = FUNC_0((VAR_3[VAR_5]<<(VAR_1 + 6)) - (int)VAR_4->lambda * 139);
            if (VAR_3[VAR_5] < VAR_4->avctx->qmin ||
                (VAR_3[VAR_5] > VAR_4->avctx->qmax && !VAR_4->vbv_ignore_qmax))
                continue;
            if (VAR_8 < VAR_6) {
                VAR_6 = VAR_8;
                VAR_7 = VAR_5;
            }
        }
        VAR_4->qscale = VAR_7;
    } else {
        VAR_4->qscale = (VAR_4->lambda * 139 + VAR_0 * 64) >>
                    (VAR_1 + 7);
        VAR_4->qscale = FUNC_2(VAR_4->qscale, VAR_4->avctx->qmin, VAR_4->vbv_ignore_qmax ? 31 : VAR_4->avctx->qmax);
    }

    VAR_4->lambda2 = (VAR_4->lambda * VAR_4->lambda + VAR_0 / 2) >>
                 VAR_1;
}
