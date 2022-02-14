
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_15__ {int nterms; scalar_t__ best_bits; TYPE_3__* dps; int log_limit; } ;
typedef TYPE_1__ WavPackExtraInfo ;
struct TYPE_16__ {int block_samples; TYPE_3__*** sampleptrs; TYPE_3__* decorr_passes; } ;
typedef TYPE_2__ WavPackEncodeContext ;
struct TYPE_17__ {int delta; scalar_t__ value; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,int,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_4(WavPackEncodeContext *VAR_0, WavPackExtraInfo *VAR_1)
{
    int VAR_2 = 0, VAR_3, VAR_4, VAR_5;
    uint32_t VAR_6;

    if (!VAR_0->decorr_passes[0].value)
        return;
    VAR_3 = VAR_0->decorr_passes[0].delta;

    for (VAR_4 = VAR_3 - 1; VAR_4 >= 0; VAR_4--) {
        for (VAR_5 = 0; VAR_5 < VAR_1->nterms && VAR_0->decorr_passes[VAR_5].value; VAR_5++) {
            VAR_1->dps[VAR_5].value = VAR_0->decorr_passes[VAR_5].value;
            VAR_1->dps[VAR_5].delta = VAR_4;
            FUNC_1(VAR_1,
                                 VAR_0->sampleptrs[VAR_5 ][0], VAR_0->sampleptrs[VAR_5 ][1],
                                 VAR_0->sampleptrs[VAR_5+1][0], VAR_0->sampleptrs[VAR_5+1][1],
                                 VAR_0->block_samples, VAR_5);
        }

        VAR_6 = FUNC_2(VAR_0->sampleptrs[VAR_5][0], VAR_0->sampleptrs[VAR_5][1],
                          VAR_0->block_samples, VAR_1->log_limit);
        if (VAR_6 >= VAR_1->best_bits)
            break;
        VAR_2 = 1;
        VAR_1->best_bits = VAR_6;
        FUNC_0(VAR_0->decorr_passes);
        FUNC_3(VAR_0->decorr_passes, VAR_1->dps, sizeof(VAR_1->dps[0]) * VAR_5);
        FUNC_3(VAR_0->sampleptrs[VAR_1->nterms + 1][0], VAR_0->sampleptrs[VAR_5][0],
               VAR_0->block_samples * 4);
        FUNC_3(VAR_0->sampleptrs[VAR_1->nterms + 1][1], VAR_0->sampleptrs[VAR_5][1],
               VAR_0->block_samples * 4);
    }

    for (VAR_4 = VAR_3 + 1; !VAR_2 && VAR_4 <= 7; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < VAR_1->nterms && VAR_0->decorr_passes[VAR_5].value; VAR_5++) {
            VAR_1->dps[VAR_5].value = VAR_0->decorr_passes[VAR_5].value;
            VAR_1->dps[VAR_5].delta = VAR_4;
            FUNC_1(VAR_1,
                                 VAR_0->sampleptrs[VAR_5 ][0], VAR_0->sampleptrs[VAR_5 ][1],
                                 VAR_0->sampleptrs[VAR_5+1][0], VAR_0->sampleptrs[VAR_5+1][1],
                                 VAR_0->block_samples, VAR_5);
        }

        VAR_6 = FUNC_2(VAR_0->sampleptrs[VAR_5][0], VAR_0->sampleptrs[VAR_5][1],
                          VAR_0->block_samples, VAR_1->log_limit);

        if (VAR_6 < VAR_1->best_bits) {
            VAR_1->best_bits = VAR_6;
            FUNC_0(VAR_0->decorr_passes);
            FUNC_3(VAR_0->decorr_passes, VAR_1->dps, sizeof(VAR_1->dps[0]) * VAR_5);
            FUNC_3(VAR_0->sampleptrs[VAR_1->nterms + 1][0],
                   VAR_0->sampleptrs[VAR_5][0], VAR_0->block_samples * 4);
            FUNC_3(VAR_0->sampleptrs[VAR_1->nterms + 1][1],
                   VAR_0->sampleptrs[VAR_5][1], VAR_0->block_samples * 4);
        }
        else
            break;
    }
}
