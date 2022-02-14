
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int32_t ;
struct TYPE_3__ {int channels; int blocksize; int nwrap; scalar_t__* coeffs; scalar_t__** decoded_base; scalar_t__** decoded; int nmean; scalar_t__** offset; int avctx; } ;
typedef TYPE_1__ ShortenContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (scalar_t__**,int,int) ;

__attribute__((used)) static int FUNC_3(ShortenContext *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_3->channels; VAR_5++) {
        if (FUNC_0(1, VAR_3->nmean) >= VAR_2 / sizeof(int32_t)) {
            FUNC_1(VAR_3->avctx, VAR_1, "nmean too large\n");
            return VAR_0;
        }
        if (VAR_3->blocksize + (uint64_t)VAR_3->nwrap >= VAR_2 / sizeof(int32_t)) {
            FUNC_1(VAR_3->avctx, VAR_1,
                   "s->blocksize + s->nwrap too large\n");
            return VAR_0;
        }

        if ((VAR_6 = FUNC_2(&VAR_3->offset[VAR_5],
                               sizeof(int32_t),
                               FUNC_0(1, VAR_3->nmean))) < 0)
            return VAR_6;

        if ((VAR_6 = FUNC_2(&VAR_3->decoded_base[VAR_5], (VAR_3->blocksize + VAR_3->nwrap),
                               sizeof(VAR_3->decoded_base[0][0]))) < 0)
            return VAR_6;
        for (VAR_4 = 0; VAR_4 < VAR_3->nwrap; VAR_4++)
            VAR_3->decoded_base[VAR_5][VAR_4] = 0;
        VAR_3->decoded[VAR_5] = VAR_3->decoded_base[VAR_5] + VAR_3->nwrap;
    }

    if ((VAR_6 = FUNC_2(&VAR_3->coeffs, VAR_3->nwrap, sizeof(*VAR_3->coeffs))) < 0)
        return VAR_6;

    return 0;
}
