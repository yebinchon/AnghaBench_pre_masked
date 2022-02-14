
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__* error_energy; scalar_t__* energy; } ;
struct TYPE_23__ {int framebits; int transient; int channels; TYPE_3__* block; int anticollapse; scalar_t__ anticollapse_needed; scalar_t__ size; int start_band; scalar_t__ pfilter; scalar_t__ silence; } ;
struct TYPE_22__ {int channels; scalar_t__** last_quantized_energy; int psyctx; } ;
typedef int OpusRangeCoder ;
typedef TYPE_1__ OpusEncContext ;
typedef TYPE_2__ CeltFrame ;
typedef TYPE_3__ CeltBlock ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,scalar_t__**) ;
 int FUNC_6 (TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *,int) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_11 (int *,TYPE_2__*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int,int) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (scalar_t__*,float,int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(OpusEncContext *VAR_1, OpusRangeCoder *VAR_2,
                              CeltFrame *VAR_3, int VAR_4)
{
    FUNC_12(VAR_2);

    FUNC_10(&VAR_1->psyctx, VAR_3, VAR_4);

    FUNC_4(VAR_1, VAR_3);

    if (VAR_3->silence) {
        if (VAR_3->framebits >= 16)
            FUNC_13(VAR_2, 1, 15);
        for (int VAR_5 = 0; VAR_5 < VAR_1->channels; VAR_5++)
            FUNC_15(VAR_1->last_quantized_energy[VAR_5], 0.0f, sizeof(float)*VAR_0);
        return;
    }


    FUNC_0(VAR_1, VAR_3);
    if (VAR_3->pfilter) {
        FUNC_13(VAR_2, 0, 15);
        FUNC_1(VAR_2, VAR_3);
    }


    FUNC_3(VAR_1, VAR_3);


    while (FUNC_11(&VAR_1->psyctx, VAR_3, VAR_4))
        FUNC_3(VAR_1, VAR_3);

    FUNC_12(VAR_2);


    FUNC_13(VAR_2, 0, 15);


    if (!VAR_3->start_band && FUNC_16(VAR_2) + 16 <= VAR_3->framebits)
        FUNC_1(VAR_2, VAR_3);


    if (VAR_3->size && FUNC_16(VAR_2) + 3 <= VAR_3->framebits)
        FUNC_13(VAR_2, VAR_3->transient, 3);


    FUNC_5 (VAR_3, VAR_2, VAR_1->last_quantized_energy);
    FUNC_2 (VAR_3, VAR_2);
    FUNC_8 (VAR_3, VAR_2, 1);
    FUNC_7 (VAR_3, VAR_2);
    FUNC_9(VAR_3, VAR_2);


    if (VAR_3->anticollapse_needed)
        FUNC_14(VAR_2, VAR_3->anticollapse, 1);


    FUNC_6(VAR_1, VAR_2, VAR_3);

    for (int VAR_6 = 0; VAR_6 < VAR_3->channels; VAR_6++) {
        CeltBlock *VAR_7 = &VAR_3->block[VAR_6];
        for (int VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
            VAR_1->last_quantized_energy[VAR_6][VAR_8] = VAR_7->energy[VAR_8] + VAR_7->error_energy[VAR_8];
    }
}
