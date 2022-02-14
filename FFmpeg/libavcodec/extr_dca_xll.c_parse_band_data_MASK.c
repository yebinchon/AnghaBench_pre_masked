
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_18__ {int size_in_bits; } ;
struct TYPE_17__ {int nfreqbands; } ;
struct TYPE_16__ {int nactivechsets; int* navi; int nfreqbands; int nframesegs; int nchsets; TYPE_3__ gb; TYPE_14__* avctx; TYPE_2__* chset; } ;
struct TYPE_15__ {int err_recognition; } ;
typedef TYPE_1__ DCAXllDecoder ;
typedef TYPE_2__ DCAXllChSet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_14__*,int ,char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int,int,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_7(DCAXllDecoder *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, *VAR_9;
    DCAXllChSet *VAR_10;

    for (VAR_5 = 0, VAR_10 = VAR_3->chset; VAR_5 < VAR_3->nactivechsets; VAR_5++, VAR_10++) {
        if ((VAR_4 = FUNC_2(VAR_3, VAR_10)) < 0)
            return VAR_4;
        if ((VAR_4 = FUNC_1(VAR_3, VAR_10)) < 0)
            return VAR_4;
    }

    VAR_8 = FUNC_5(&VAR_3->gb);
    VAR_9 = VAR_3->navi;
    for (VAR_7 = 0; VAR_7 < VAR_3->nfreqbands; VAR_7++) {
        for (VAR_6 = 0; VAR_6 < VAR_3->nframesegs; VAR_6++) {
            for (VAR_5 = 0, VAR_10 = VAR_3->chset; VAR_5 < VAR_3->nchsets; VAR_5++, VAR_10++) {
                if (VAR_10->nfreqbands > VAR_7) {
                    VAR_8 += *VAR_9 * 8;
                    if (VAR_8 > VAR_3->gb.size_in_bits) {
                        FUNC_0(VAR_3->avctx, VAR_2, "Invalid NAVI position\n");
                        return VAR_0;
                    }
                    if (VAR_5 < VAR_3->nactivechsets &&
                        (VAR_4 = FUNC_4(VAR_3, VAR_10, VAR_7, VAR_6, VAR_8)) < 0) {
                        if (VAR_3->avctx->err_recognition & VAR_1)
                            return VAR_4;
                        FUNC_3(VAR_3, VAR_10, VAR_7, VAR_6);
                    }
                    FUNC_6(&VAR_3->gb, VAR_8 - FUNC_5(&VAR_3->gb));
                }
                VAR_9++;
            }
        }
    }

    return 0;
}
