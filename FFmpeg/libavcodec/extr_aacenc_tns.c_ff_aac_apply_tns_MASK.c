
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* n_filt; int** order; scalar_t__** direction; int ** coef; scalar_t__** length; } ;
typedef TYPE_1__ TemporalNoiseShaping ;
struct TYPE_7__ {int tns_max_bands; int max_sfb; int num_windows; int num_swb; int* swb_offset; } ;
struct TYPE_6__ {float* coeffs; float* pcoeffs; TYPE_3__ ics; TYPE_1__ tns; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef TYPE_3__ IndividualChannelStream ;
typedef int AACEncContext ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,int const) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,float*,int ,int ,int ) ;

void FUNC_3(AACEncContext *VAR_1, SingleChannelElement *VAR_2)
{
    TemporalNoiseShaping *VAR_3 = &VAR_2->tns;
    IndividualChannelStream *VAR_4 = &VAR_2->ics;
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    const int VAR_16 = FUNC_1(VAR_4->tns_max_bands, VAR_4->max_sfb);
    float VAR_17[VAR_0];

    for (VAR_5 = 0; VAR_5 < VAR_4->num_windows; VAR_5++) {
        VAR_11 = VAR_4->num_swb;
        for (VAR_6 = 0; VAR_6 < VAR_3->n_filt[VAR_5]; VAR_6++) {
            VAR_9 = VAR_11;
            VAR_11 = FUNC_0(0, VAR_9 - VAR_3->length[VAR_5][VAR_6]);
            VAR_10 = VAR_3->order[VAR_5][VAR_6];
            if (VAR_10 == 0)
                continue;


            FUNC_2(VAR_3->coef[VAR_5][VAR_6], VAR_10, VAR_17, 0, 0, 0);

            VAR_12 = VAR_4->swb_offset[FUNC_1(VAR_11, VAR_16)];
            VAR_13 = VAR_4->swb_offset[FUNC_1( VAR_9, VAR_16)];
            if ((VAR_14 = VAR_13 - VAR_12) <= 0)
                continue;
            if (VAR_3->direction[VAR_5][VAR_6]) {
                VAR_15 = -1;
                VAR_12 = VAR_13 - 1;
            } else {
                VAR_15 = 1;
            }
            VAR_12 += VAR_5 * 128;


            for (VAR_7 = 0; VAR_7 < VAR_14; VAR_7++, VAR_12 += VAR_15) {
                for (VAR_8 = 1; VAR_8 <= FUNC_1(VAR_7, VAR_10); VAR_8++) {
                    VAR_2->coeffs[VAR_12] += VAR_17[VAR_8-1]*VAR_2->pcoeffs[VAR_12 - VAR_8*VAR_15];
                }
            }
        }
    }
}
