
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_7__ {scalar_t__ mb_decision; } ;
struct TYPE_5__ {int* permutated; } ;
struct TYPE_6__ {int max_qcoeff; int min_qcoeff; TYPE_4__* avctx; TYPE_1__ intra_scantable; scalar_t__ mb_intra; } ;
typedef TYPE_2__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int,int const,int const) ;

__attribute__((used)) static inline void FUNC_1(MpegEncContext *VAR_2, int16_t *VAR_3,
                               int VAR_4)
{
    int VAR_5;
    const int VAR_6 = VAR_2->max_qcoeff;
    const int VAR_7 = VAR_2->min_qcoeff;
    int VAR_8 = 0;

    if (VAR_2->mb_intra) {
        VAR_5 = 1;
    } else
        VAR_5 = 0;

    for (; VAR_5 <= VAR_4; VAR_5++) {
        const int VAR_9 = VAR_2->intra_scantable.permutated[VAR_5];
        int VAR_10 = VAR_3[VAR_9];

        if (VAR_10 > VAR_6) {
            VAR_10 = VAR_6;
            VAR_8++;
        } else if (VAR_10 < VAR_7) {
            VAR_10 = VAR_7;
            VAR_8++;
        }

        VAR_3[VAR_9] = VAR_10;
    }

    if (VAR_8 && VAR_2->avctx->mb_decision == VAR_1)
        FUNC_0(VAR_2->avctx, VAR_0,
               "warning, clipping %d dct coefficients to %d..%d\n",
               VAR_8, VAR_7, VAR_6);
}
