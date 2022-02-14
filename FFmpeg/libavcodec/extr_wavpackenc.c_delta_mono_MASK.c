
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_12__ {int nterms; void* best_bits; TYPE_3__* dps; int log_limit; } ;
typedef TYPE_1__ WavPackExtraInfo ;
struct TYPE_13__ {int block_samples; TYPE_3__*** sampleptrs; TYPE_3__* decorr_passes; } ;
typedef TYPE_2__ WavPackEncodeContext ;
struct TYPE_14__ {int delta; scalar_t__ value; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int,TYPE_3__*,int) ;
 void* FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_4(WavPackEncodeContext *VAR_0, WavPackExtraInfo *VAR_1)
{
    int VAR_2 = 0, VAR_3, VAR_4;
    uint32_t VAR_5;

    if (!VAR_0->decorr_passes[0].value)
        return;
    VAR_3 = VAR_0->decorr_passes[0].delta;

    for (VAR_4 = VAR_3 - 1; VAR_4 >= 0; VAR_4--) {
        int VAR_6;

        for (VAR_6 = 0; VAR_6 < VAR_1->nterms && VAR_0->decorr_passes[VAR_6].value; VAR_6++) {
            VAR_1->dps[VAR_6].value = VAR_0->decorr_passes[VAR_6].value;
            VAR_1->dps[VAR_6].delta = VAR_4;
            FUNC_1(VAR_0->sampleptrs[VAR_6][0], VAR_0->sampleptrs[VAR_6+1][0],
                               VAR_0->block_samples, VAR_1->dps, VAR_6);
        }

        VAR_5 = FUNC_2(VAR_0->sampleptrs[VAR_6][0], VAR_0->block_samples, VAR_1->log_limit);
        if (VAR_5 >= VAR_1->best_bits)
            break;

        VAR_2 = 1;
        VAR_1->best_bits = VAR_5;
        FUNC_0(VAR_0->decorr_passes);
        FUNC_3(VAR_0->decorr_passes, VAR_1->dps, sizeof(VAR_1->dps[0]) * VAR_6);
        FUNC_3(VAR_0->sampleptrs[VAR_1->nterms + 1][0], VAR_0->sampleptrs[VAR_6][0],
               VAR_0->block_samples * 4);
    }

    for (VAR_4 = VAR_3 + 1; !VAR_2 && VAR_4 <= 7; VAR_4++) {
        int VAR_7;

        for (VAR_7 = 0; VAR_7 < VAR_1->nterms && VAR_0->decorr_passes[VAR_7].value; VAR_7++) {
            VAR_1->dps[VAR_7].value = VAR_0->decorr_passes[VAR_7].value;
            VAR_1->dps[VAR_7].delta = VAR_4;
            FUNC_1(VAR_0->sampleptrs[VAR_7][0], VAR_0->sampleptrs[VAR_7+1][0],
                               VAR_0->block_samples, VAR_1->dps, VAR_7);
        }

        VAR_5 = FUNC_2(VAR_0->sampleptrs[VAR_7][0], VAR_0->block_samples, VAR_1->log_limit);
        if (VAR_5 >= VAR_1->best_bits)
            break;

        VAR_1->best_bits = VAR_5;
        FUNC_0(VAR_0->decorr_passes);
        FUNC_3(VAR_0->decorr_passes, VAR_1->dps, sizeof(VAR_1->dps[0]) * VAR_7);
        FUNC_3(VAR_0->sampleptrs[VAR_1->nterms + 1][0], VAR_0->sampleptrs[VAR_7][0],
               VAR_0->block_samples * 4);
    }
}
