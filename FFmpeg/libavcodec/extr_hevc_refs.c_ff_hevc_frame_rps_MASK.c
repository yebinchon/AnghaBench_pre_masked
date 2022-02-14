
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int nb_refs; int* poc; scalar_t__* used; } ;
struct TYPE_10__ {TYPE_4__ long_term_rps; TYPE_2__* short_term_rps; } ;
struct TYPE_14__ {int poc; int * DPB; int * ref; TYPE_3__* rps; TYPE_1__ sh; } ;
struct TYPE_12__ {scalar_t__ nb_refs; } ;
struct TYPE_11__ {int num_delta_pocs; int* delta_poc; int num_negative_pics; int * used; } ;
typedef TYPE_2__ ShortTermRPS ;
typedef TYPE_3__ RefPicList ;
typedef TYPE_4__ LongTermRPS ;
typedef int HEVCFrame ;
typedef TYPE_5__ HEVCContext ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*,int,int ) ;
 int FUNC_2 (TYPE_5__*,int *,int ) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(HEVCContext *VAR_8)
{
    const ShortTermRPS *VAR_9 = VAR_8->sh.short_term_rps;
    const LongTermRPS *VAR_10 = &VAR_8->sh.long_term_rps;
    RefPicList *VAR_11 = VAR_8->rps;
    int VAR_12, VAR_13 = 0;

    if (!VAR_9) {
        VAR_11[0].nb_refs = VAR_11[1].nb_refs = 0;
        return 0;
    }


    for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8->DPB); VAR_12++) {
        HEVCFrame *VAR_14 = &VAR_8->DPB[VAR_12];

        if (VAR_14 == VAR_8->ref)
            continue;

        FUNC_3(VAR_14, 0);
    }

    for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
        VAR_11[VAR_12].nb_refs = 0;


    for (VAR_12 = 0; VAR_12 < VAR_9->num_delta_pocs; VAR_12++) {
        int VAR_15 = VAR_8->poc + VAR_9->delta_poc[VAR_12];
        int VAR_16;

        if (!VAR_9->used[VAR_12])
            VAR_16 = VAR_7;
        else if (VAR_12 < VAR_9->num_negative_pics)
            VAR_16 = VAR_6;
        else
            VAR_16 = VAR_5;

        VAR_13 = FUNC_1(VAR_8, &VAR_11[VAR_16], VAR_15, VAR_1);
        if (VAR_13 < 0)
            goto fail;
    }


    for (VAR_12 = 0; VAR_12 < VAR_10->nb_refs; VAR_12++) {
        int VAR_17 = VAR_10->poc[VAR_12];
        int VAR_18 = VAR_10->used[VAR_12] ? VAR_2 : VAR_3;

        VAR_13 = FUNC_1(VAR_8, &VAR_11[VAR_18], VAR_17, VAR_0);
        if (VAR_13 < 0)
            goto fail;
    }

fail:

    for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8->DPB); VAR_12++)
        FUNC_2(VAR_8, &VAR_8->DPB[VAR_12], 0);

    return VAR_13;
}
