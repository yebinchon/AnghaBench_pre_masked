
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int request_channel_layout; } ;
struct TYPE_16__ {scalar_t__ nfreqbands; int nchannels; int residual_encode; scalar_t__ hier_chset; scalar_t__ hier_ofs; } ;
struct TYPE_15__ {scalar_t__ nfreqbands; int nchsets; int nactivechsets; TYPE_3__* chset; scalar_t__ nreschsets; scalar_t__ nchannels; TYPE_1__* avctx; } ;
struct TYPE_14__ {TYPE_4__* priv_data; } ;
typedef TYPE_2__ DCAXllDecoder ;
typedef TYPE_3__ DCAXllChSet ;
typedef int DCAExssAsset ;
typedef TYPE_4__ DCAContext ;





 int FUNC_0 (TYPE_2__*,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(DCAXllDecoder *VAR_0, DCAExssAsset *VAR_1)
{
    DCAContext *VAR_2 = VAR_0->avctx->priv_data;
    DCAXllChSet *VAR_3;
    int VAR_4, VAR_5;


    VAR_0->nfreqbands = 0;
    VAR_0->nchannels = 0;
    VAR_0->nreschsets = 0;
    for (VAR_4 = 0, VAR_3 = VAR_0->chset; VAR_4 < VAR_0->nchsets; VAR_4++, VAR_3++) {
        VAR_3->hier_ofs = VAR_0->nchannels;
        if ((VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_1)) < 0)
            return VAR_5;
        if (VAR_3->nfreqbands > VAR_0->nfreqbands)
            VAR_0->nfreqbands = VAR_3->nfreqbands;
        if (VAR_3->hier_chset)
            VAR_0->nchannels += VAR_3->nchannels;
        if (VAR_3->residual_encode != (1 << VAR_3->nchannels) - 1)
            VAR_0->nreschsets++;
    }


    for (VAR_4 = VAR_0->nchsets - 1, VAR_3 = &VAR_0->chset[VAR_4]; VAR_4 > 0; VAR_4--, VAR_3--) {
        if (FUNC_2(VAR_3)) {
            DCAXllChSet *VAR_6 = FUNC_1(VAR_0, VAR_3);
            if (VAR_6)
                FUNC_3(VAR_3, VAR_6);
        }
    }


    switch (VAR_2->request_channel_layout) {
    case 128:
        VAR_0->nactivechsets = 1;
        break;
    case 130:
    case 129:
        VAR_0->nactivechsets = (VAR_0->chset[0].nchannels < 5 && VAR_0->nchsets > 1) ? 2 : 1;
        break;
    default:
        VAR_0->nactivechsets = VAR_0->nchsets;
        break;
    }

    return 0;
}
