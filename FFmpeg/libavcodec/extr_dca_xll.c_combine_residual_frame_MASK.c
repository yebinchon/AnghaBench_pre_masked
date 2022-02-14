
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int int32_t ;
struct TYPE_19__ {scalar_t__ output_rate; int npcmsamples; int** output_samples; } ;
struct TYPE_18__ {int packet; TYPE_8__ core; } ;
struct TYPE_17__ {scalar_t__ freq; int nchannels; int residual_encode; int* ch_remap; int pcm_bit_res; int* dmix_scale_inv; int hier_ofs; TYPE_1__* bands; } ;
struct TYPE_16__ {int nframesamples; TYPE_13__* avctx; } ;
struct TYPE_15__ {int** msb_sample_buffer; } ;
struct TYPE_14__ {TYPE_4__* priv_data; } ;
typedef scalar_t__ SUINT ;
typedef TYPE_2__ DCAXllDecoder ;
typedef TYPE_3__ DCAXllChSet ;
typedef TYPE_4__ DCAContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_13__*,int ,char*,...) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_8__*,int) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(DCAXllDecoder *VAR_5, DCAXllChSet *VAR_6)
{
    DCAContext *VAR_7 = VAR_5->avctx->priv_data;
    int VAR_8, VAR_9 = VAR_5->nframesamples;
    DCAXllChSet *VAR_10;


    if (!(VAR_7->packet & VAR_3)) {
        FUNC_1(VAR_5->avctx, VAR_1, "Residual encoded channels are present without core\n");
        return FUNC_0(VAR_4);
    }

    if (VAR_6->freq != VAR_7->core.output_rate) {
        FUNC_1(VAR_5->avctx, VAR_2, "Sample rate mismatch between core (%d Hz) and XLL (%d Hz)\n", VAR_7->core.output_rate, VAR_6->freq);
        return VAR_0;
    }

    if (VAR_9 != VAR_7->core.npcmsamples) {
        FUNC_1(VAR_5->avctx, VAR_2, "Number of samples per frame mismatch between core (%d) and XLL (%d)\n", VAR_7->core.npcmsamples, VAR_9);
        return VAR_0;
    }




    VAR_10 = FUNC_5(VAR_5, VAR_6);


    for (VAR_8 = 0; VAR_8 < VAR_6->nchannels; VAR_8++) {
        int VAR_11, VAR_12, VAR_13, VAR_14;
        int32_t *VAR_15, *VAR_16;

        if (VAR_6->residual_encode & (1 << VAR_8))
            continue;


        VAR_12 = FUNC_4(&VAR_7->core, VAR_6->ch_remap[VAR_8]);
        if (VAR_12 < 0) {
            FUNC_1(VAR_5->avctx, VAR_2, "Residual encoded channel (%d) references unavailable core channel\n", VAR_6->ch_remap[VAR_8]);
            return VAR_0;
        }


        VAR_13 = 24 - VAR_6->pcm_bit_res + FUNC_2(VAR_5, VAR_6, 0, VAR_8);
        if (VAR_13 > 24) {
            FUNC_1(VAR_5->avctx, VAR_2, "Invalid core shift (%d bits)\n", VAR_13);
            return VAR_0;
        }

        VAR_14 = VAR_13 > 0 ? 1 << (VAR_13 - 1) : 0;

        VAR_15 = VAR_7->core.output_samples[VAR_12];
        VAR_16 = VAR_6->bands[0].msb_sample_buffer[VAR_8];
        if (VAR_10) {

            int VAR_17 = VAR_10->dmix_scale_inv[VAR_6->hier_ofs + VAR_8];
            for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
                VAR_16[VAR_11] += (SUINT)FUNC_3((FUNC_6(VAR_15[VAR_11], VAR_17) + VAR_14) >> VAR_13);
        } else {

            for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
                VAR_16[VAR_11] += (unsigned)((VAR_15[VAR_11] + VAR_14) >> VAR_13);
        }
    }

    return 0;
}
