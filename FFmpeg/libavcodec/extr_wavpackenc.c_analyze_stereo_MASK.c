
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_28__ {double delta; scalar_t__ value; } ;
typedef TYPE_1__ int32_t ;
struct TYPE_29__ {int gt16bit; int log_limit; int nterms; int best_bits; TYPE_1__* dps; } ;
typedef TYPE_2__ WavPackExtraInfo ;
struct TYPE_30__ {int flags; int num_terms; int block_samples; int extra_flags; double delta_decay; TYPE_1__* decorr_passes; TYPE_1__*** sampleptrs; } ;
typedef TYPE_3__ WavPackEncodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (double) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*,int ,int,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(WavPackEncodeContext *VAR_7,
                           int32_t *VAR_8, int32_t *VAR_9,
                           int VAR_10)
{
    WavPackExtraInfo VAR_11;
    int VAR_12;

    VAR_11.gt16bit = ((VAR_7->flags & VAR_6) >> VAR_5) >= 16;

    VAR_11.log_limit = (((VAR_7->flags & VAR_6) >> VAR_5) + 4) * 256;
    VAR_11.log_limit = FUNC_0(6912, VAR_11.log_limit);

    VAR_11.nterms = VAR_7->num_terms;

    if (FUNC_1(VAR_7, VAR_7->num_terms))
        return;

    FUNC_7(VAR_11.dps, VAR_7->decorr_passes, sizeof(VAR_11.dps));
    FUNC_7(VAR_7->sampleptrs[0][0], VAR_8, VAR_7->block_samples * 4);
    FUNC_7(VAR_7->sampleptrs[0][1], VAR_9, VAR_7->block_samples * 4);

    for (VAR_12 = 0; VAR_12 < VAR_11.nterms && VAR_11.dps[VAR_12].value; VAR_12++)
        if (VAR_11.gt16bit)
            FUNC_2(VAR_7->sampleptrs[VAR_12 ][0], VAR_7->sampleptrs[VAR_12 ][1],
                          VAR_7->sampleptrs[VAR_12 + 1][0], VAR_7->sampleptrs[VAR_12 + 1][1],
                          VAR_7->block_samples, VAR_11.dps + VAR_12, 1);
        else
            FUNC_3(VAR_7->sampleptrs[VAR_12 ][0], VAR_7->sampleptrs[VAR_12 ][1],
                                VAR_7->sampleptrs[VAR_12 + 1][0], VAR_7->sampleptrs[VAR_12 + 1][1],
                                VAR_7->block_samples, VAR_11.dps + VAR_12);

    VAR_11.best_bits = FUNC_6(VAR_7->sampleptrs[VAR_11.nterms][0], VAR_7->sampleptrs[VAR_11.nterms][1],
                                VAR_7->block_samples, 0);

    FUNC_7(VAR_7->sampleptrs[VAR_11.nterms + 1][0], VAR_7->sampleptrs[VAR_12][0], VAR_7->block_samples * 4);
    FUNC_7(VAR_7->sampleptrs[VAR_11.nterms + 1][1], VAR_7->sampleptrs[VAR_12][1], VAR_7->block_samples * 4);

    if (VAR_7->extra_flags & VAR_1)
        FUNC_8(VAR_7, &VAR_11, 0, (int) FUNC_5(VAR_7->delta_decay + 0.5),
                       FUNC_6(VAR_7->sampleptrs[0][0], VAR_7->sampleptrs[0][1],
                                  VAR_7->block_samples, 0));

    if (VAR_7->extra_flags & VAR_2)
        FUNC_9(VAR_7, &VAR_11);

    if (VAR_7->extra_flags & VAR_4) {
        FUNC_4(VAR_7, &VAR_11);

        if ((VAR_7->extra_flags & VAR_0) && VAR_7->decorr_passes[0].value)
            VAR_7->delta_decay = (float)((VAR_7->delta_decay * 2.0 + VAR_7->decorr_passes[0].delta) / 3.0);
        else
            VAR_7->delta_decay = 2.0;
    }

    if (VAR_7->extra_flags & VAR_3)
        FUNC_9(VAR_7, &VAR_11);

    if (VAR_10) {
        FUNC_7(VAR_8, VAR_7->sampleptrs[VAR_11.nterms + 1][0], VAR_7->block_samples * 4);
        FUNC_7(VAR_9, VAR_7->sampleptrs[VAR_11.nterms + 1][1], VAR_7->block_samples * 4);
    }

    for (VAR_12 = 0; VAR_12 < VAR_11.nterms; VAR_12++)
        if (!VAR_7->decorr_passes[VAR_12].value)
            break;

    VAR_7->num_terms = VAR_12;
}
