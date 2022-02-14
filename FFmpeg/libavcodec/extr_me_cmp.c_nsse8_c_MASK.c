
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_5__ {TYPE_1__* avctx; } ;
struct TYPE_4__ {int nsse_weight; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(MpegEncContext *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2,
                   ptrdiff_t VAR_3, int VAR_4)
{
    int VAR_5 = 0, VAR_6 = 0, VAR_7, VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
            VAR_5 += (VAR_1[VAR_7] - VAR_2[VAR_7]) * (VAR_1[VAR_7] - VAR_2[VAR_7]);
        if (VAR_8 + 1 < VAR_4) {
            for (VAR_7 = 0; VAR_7 < 7; VAR_7++)
                VAR_6 += FUNC_0(VAR_1[VAR_7] - VAR_1[VAR_7 + VAR_3] -
                                VAR_1[VAR_7 + 1] + VAR_1[VAR_7 + VAR_3 + 1]) -
                          FUNC_0(VAR_2[VAR_7] - VAR_2[VAR_7 + VAR_3] -
                                VAR_2[VAR_7 + 1] + VAR_2[VAR_7 + VAR_3 + 1]);
        }
        VAR_1 += VAR_3;
        VAR_2 += VAR_3;
    }

    if (VAR_0)
        return VAR_5 + FUNC_0(VAR_6) * VAR_0->avctx->nsse_weight;
    else
        return VAR_5 + FUNC_0(VAR_6) * 8;
}
