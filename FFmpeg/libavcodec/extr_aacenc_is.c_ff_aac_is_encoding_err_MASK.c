
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct AACISError {int pass; int phase; float error; float dist1; float dist2; float ener01; int member_0; } ;
struct TYPE_12__ {TYPE_1__* ch; } ;
struct TYPE_17__ {float* scoefs; int cur_channel; float lambda; int (* abs_pow34 ) (float*,float*,int) ;TYPE_2__ psy; } ;
struct TYPE_16__ {TYPE_4__* ch; } ;
struct TYPE_15__ {float threshold; } ;
struct TYPE_13__ {int* group_len; int* swb_sizes; } ;
struct TYPE_14__ {float* pcoeffs; float* coeffs; int* sf_idx; int* band_type; TYPE_3__ ics; } ;
struct TYPE_11__ {TYPE_5__* psy_bands; } ;
typedef TYPE_4__ SingleChannelElement ;
typedef TYPE_5__ FFPsyBand ;
typedef TYPE_6__ ChannelElement ;
typedef TYPE_7__ AACEncContext ;


 int FUNC_0 (int,int) ;
 float FUNC_1 (float,float) ;
 int VAR_0 ;
 float FUNC_2 (int,int,float*) ;
 int FUNC_3 (float,int) ;
 int FUNC_4 (float) ;
 scalar_t__ FUNC_5 (TYPE_7__*,float*,float*,int,int,int,float,int ,int *,int *,int ) ;
 float FUNC_6 (float) ;
 int FUNC_7 (float*,float*,int) ;
 int FUNC_8 (float*,float*,int) ;
 int FUNC_9 (float*,float*,int) ;

struct AACISError FUNC_10(AACEncContext *VAR_1, ChannelElement *VAR_2,
                                         int VAR_3, int VAR_4, int VAR_5, float VAR_6,
                                         float VAR_7, float VAR_8,
                                         int VAR_9, int VAR_10)
{
    int VAR_11, VAR_12;
    SingleChannelElement *VAR_13 = &VAR_2->ch[0];
    SingleChannelElement *VAR_14 = &VAR_2->ch[1];
    float *VAR_15 = VAR_9 ? VAR_13->pcoeffs : VAR_13->coeffs;
    float *VAR_16 = VAR_9 ? VAR_14->pcoeffs : VAR_14->coeffs;
    float *VAR_17 = &VAR_1->scoefs[256*0], *VAR_18 = &VAR_1->scoefs[256*1];
    float *VAR_19 = &VAR_1->scoefs[256*2], *VAR_20 = &VAR_1->scoefs[256*3];
    float VAR_21 = 0.0f, VAR_22 = 0.0f;
    struct AACISError VAR_23 = {0};

    if (VAR_8 <= 0 || VAR_6 <= 0) {
        VAR_23.pass = 0;
        return VAR_23;
    }

    for (VAR_12 = 0; VAR_12 < VAR_13->ics.group_len[VAR_4]; VAR_12++) {
        FFPsyBand *VAR_24 = &VAR_1->psy.ch[VAR_1->cur_channel+0].psy_bands[(VAR_4+VAR_12)*16+VAR_5];
        FFPsyBand *VAR_25 = &VAR_1->psy.ch[VAR_1->cur_channel+1].psy_bands[(VAR_4+VAR_12)*16+VAR_5];
        int VAR_26, VAR_27 = FUNC_0(1, VAR_13->sf_idx[VAR_4*16+VAR_5]-4);
        float VAR_28 = VAR_10*FUNC_4(VAR_7/VAR_6);
        float VAR_29, VAR_30 = 0.0f;
        float VAR_31 = FUNC_1(VAR_24->threshold, VAR_25->threshold);
        for (VAR_11 = 0; VAR_11 < VAR_13->ics.swb_sizes[VAR_5]; VAR_11++)
            VAR_19[VAR_11] = (VAR_15[VAR_3+(VAR_4+VAR_12)*128+VAR_11] + VAR_10*VAR_16[VAR_3+(VAR_4+VAR_12)*128+VAR_11])*FUNC_6(VAR_6/VAR_8);
        VAR_1->abs_pow34(VAR_17, &VAR_15[VAR_3+(VAR_4+VAR_12)*128], VAR_13->ics.swb_sizes[VAR_5]);
        VAR_1->abs_pow34(VAR_18, &VAR_16[VAR_3+(VAR_4+VAR_12)*128], VAR_13->ics.swb_sizes[VAR_5]);
        VAR_1->abs_pow34(VAR_20, VAR_19, VAR_13->ics.swb_sizes[VAR_5]);
        VAR_29 = FUNC_2(1, VAR_13->ics.swb_sizes[VAR_5], VAR_20);
        VAR_26 = FUNC_3(VAR_29, VAR_27);
        VAR_21 += FUNC_5(VAR_1, &VAR_15[VAR_3 + (VAR_4+VAR_12)*128], VAR_17,
                                    VAR_13->ics.swb_sizes[VAR_5],
                                    VAR_13->sf_idx[VAR_4*16+VAR_5],
                                    VAR_13->band_type[VAR_4*16+VAR_5],
                                    VAR_1->lambda / VAR_24->threshold, VAR_0, ((void*)0), ((void*)0), 0);
        VAR_21 += FUNC_5(VAR_1, &VAR_16[VAR_3 + (VAR_4+VAR_12)*128], VAR_18,
                                    VAR_14->ics.swb_sizes[VAR_5],
                                    VAR_14->sf_idx[VAR_4*16+VAR_5],
                                    VAR_14->band_type[VAR_4*16+VAR_5],
                                    VAR_1->lambda / VAR_25->threshold, VAR_0, ((void*)0), ((void*)0), 0);
        VAR_22 += FUNC_5(VAR_1, VAR_19, VAR_20, VAR_13->ics.swb_sizes[VAR_5],
                                    VAR_27, VAR_26,
                                    VAR_1->lambda / VAR_31, VAR_0, ((void*)0), ((void*)0), 0);
        for (VAR_11 = 0; VAR_11 < VAR_13->ics.swb_sizes[VAR_5]; VAR_11++) {
            VAR_30 += (VAR_17[VAR_11] - VAR_20[VAR_11])*(VAR_17[VAR_11] - VAR_20[VAR_11]);
            VAR_30 += (VAR_18[VAR_11] - VAR_20[VAR_11]*VAR_28)*(VAR_18[VAR_11] - VAR_20[VAR_11]*VAR_28);
        }
        VAR_30 *= VAR_1->lambda / VAR_31;
        VAR_22 += VAR_30;
    }

    VAR_23.pass = VAR_22 <= VAR_21;
    VAR_23.phase = VAR_10;
    VAR_23.error = VAR_22 - VAR_21;
    VAR_23.dist1 = VAR_21;
    VAR_23.dist2 = VAR_22;
    VAR_23.ener01 = VAR_8;

    return VAR_23;
}
