
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int nterms; TYPE_5__* dps; int best_bits; int log_limit; } ;
typedef TYPE_1__ WavPackExtraInfo ;
struct TYPE_13__ {int block_samples; TYPE_5__*** sampleptrs; TYPE_5__* decorr_passes; } ;
typedef TYPE_2__ WavPackEncodeContext ;
struct TYPE_14__ {scalar_t__ value; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*,int,TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_4(WavPackEncodeContext *VAR_0, WavPackExtraInfo *VAR_1)
{
    int VAR_2 = 1;
    uint32_t VAR_3;

    while (VAR_2) {
        int VAR_4, VAR_5;

        FUNC_3(VAR_1->dps, VAR_0->decorr_passes, sizeof(VAR_0->decorr_passes));
        VAR_2 = 0;

        for (VAR_4 = 0; VAR_4 < VAR_1->nterms && VAR_0->decorr_passes[VAR_4].value; VAR_4++) {

            if (VAR_4 + 1 >= VAR_1->nterms || !VAR_0->decorr_passes[VAR_4+1].value)
                break;

            if (VAR_0->decorr_passes[VAR_4].value == VAR_0->decorr_passes[VAR_4+1].value) {
                FUNC_1(VAR_0->sampleptrs[VAR_4][0], VAR_0->sampleptrs[VAR_4+1][0],
                                   VAR_0->block_samples, VAR_1->dps, VAR_4);
                continue;
            }

            VAR_1->dps[VAR_4 ] = VAR_0->decorr_passes[VAR_4+1];
            VAR_1->dps[VAR_4+1] = VAR_0->decorr_passes[VAR_4 ];

            for (VAR_5 = VAR_4; VAR_5 < VAR_1->nterms && VAR_0->decorr_passes[VAR_5].value; VAR_5++)
                FUNC_1(VAR_0->sampleptrs[VAR_5][0], VAR_0->sampleptrs[VAR_5+1][0],
                                   VAR_0->block_samples, VAR_1->dps, VAR_5);

            VAR_3 = FUNC_2(VAR_0->sampleptrs[VAR_5][0], VAR_0->block_samples, VAR_1->log_limit);
            if (VAR_3 < VAR_1->best_bits) {
                VAR_2 = 1;
                VAR_1->best_bits = VAR_3;
                FUNC_0(VAR_0->decorr_passes);
                FUNC_3(VAR_0->decorr_passes, VAR_1->dps, sizeof(VAR_1->dps[0]) * VAR_5);
                FUNC_3(VAR_0->sampleptrs[VAR_1->nterms + 1][0], VAR_0->sampleptrs[VAR_5][0],
                       VAR_0->block_samples * 4);
            } else {
                VAR_1->dps[VAR_4 ] = VAR_0->decorr_passes[VAR_4];
                VAR_1->dps[VAR_4+1] = VAR_0->decorr_passes[VAR_4+1];
                FUNC_1(VAR_0->sampleptrs[VAR_4][0], VAR_0->sampleptrs[VAR_4+1][0],
                                   VAR_0->block_samples, VAR_1->dps, VAR_4);
            }
        }
    }
}
