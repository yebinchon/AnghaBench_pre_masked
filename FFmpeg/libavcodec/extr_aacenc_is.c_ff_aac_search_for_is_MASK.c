
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct AACISError {scalar_t__ error; float ener01; scalar_t__ phase; scalar_t__ pass; } ;
struct TYPE_17__ {float lambda; } ;
struct TYPE_16__ {float sample_rate; } ;
struct TYPE_15__ {int* is_mask; int* ms_mask; int is_mode; TYPE_2__* ch; int common_window; } ;
struct TYPE_13__ {float num_windows; int* group_len; int num_swb; int* swb_sizes; } ;
struct TYPE_14__ {scalar_t__* band_type; float* coeffs; float* is_ener; int* sf_idx; TYPE_1__ ics; int * zeroes; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef TYPE_3__ ChannelElement ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AACEncContext ;


 void* VAR_0 ;
 void* VAR_1 ;
 float VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct AACISError FUNC_0 (TYPE_5__*,TYPE_3__*,int,int,int,float,float,float,int ,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int,int) ;
 float FUNC_3 (float) ;

void FUNC_4(AACEncContext *VAR_5, AVCodecContext *VAR_6, ChannelElement *VAR_7)
{
    SingleChannelElement *VAR_8 = &VAR_7->ch[0];
    SingleChannelElement *VAR_9 = &VAR_7->ch[1];
    int VAR_10 = 0, VAR_11 = 0, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = -1, VAR_17 = -1, VAR_18 = 0;
    const float VAR_19 = VAR_6->sample_rate/(1024.0f/VAR_8->ics.num_windows)/2.0f;
    uint8_t VAR_20[128];

    if (!VAR_7->common_window)
        return;


    FUNC_1(VAR_9, VAR_20);

    for (VAR_12 = 0; VAR_12 < VAR_8->ics.num_windows; VAR_12 += VAR_8->ics.group_len[VAR_12]) {
        VAR_10 = 0;
        for (VAR_14 = 0; VAR_14 < VAR_8->ics.num_swb; VAR_14++) {
            if (VAR_10*VAR_19 > VAR_2*(VAR_5->lambda/170.0f) &&
                VAR_7->ch[0].band_type[VAR_12*16+VAR_14] != VAR_3 && !VAR_7->ch[0].zeroes[VAR_12*16+VAR_14] &&
                VAR_7->ch[1].band_type[VAR_12*16+VAR_14] != VAR_3 && !VAR_7->ch[1].zeroes[VAR_12*16+VAR_14] &&
                FUNC_2(VAR_9, VAR_20, VAR_16, VAR_12*16+VAR_14)) {
                float VAR_21 = 0.0f, VAR_22 = 0.0f, VAR_23 = 0.0f, VAR_24 = 0.0f;
                struct AACISError VAR_25, VAR_26, *VAR_27;
                for (VAR_13 = 0; VAR_13 < VAR_8->ics.group_len[VAR_12]; VAR_13++) {
                    for (VAR_15 = 0; VAR_15 < VAR_8->ics.swb_sizes[VAR_14]; VAR_15++) {
                        float VAR_28 = VAR_8->coeffs[VAR_10+(VAR_12+VAR_13)*128+VAR_15];
                        float VAR_29 = VAR_9->coeffs[VAR_10+(VAR_12+VAR_13)*128+VAR_15];
                        VAR_21 += VAR_28*VAR_28;
                        VAR_22 += VAR_29*VAR_29;
                        VAR_23 += (VAR_28 + VAR_29)*(VAR_28 + VAR_29);
                        VAR_24 += (VAR_28 - VAR_29)*(VAR_28 - VAR_29);
                    }
                }
                VAR_25 = FUNC_0(VAR_5, VAR_7, VAR_10, VAR_12, VAR_14,
                                                 VAR_21, VAR_22, VAR_24, 0, -1);
                VAR_26 = FUNC_0(VAR_5, VAR_7, VAR_10, VAR_12, VAR_14,
                                                 VAR_21, VAR_22, VAR_23, 0, +1);
                VAR_27 = (VAR_25 && VAR_25 < VAR_26) ? &VAR_25 : &VAR_26;
                if (VAR_27->pass) {
                    VAR_7->is_mask[VAR_12*16+VAR_14] = 1;
                    VAR_7->ms_mask[VAR_12*16+VAR_14] = 0;
                    VAR_7->ch[0].is_ener[VAR_12*16+VAR_14] = FUNC_3(VAR_21 / VAR_27->ener01);
                    VAR_7->ch[1].is_ener[VAR_12*16+VAR_14] = VAR_21/VAR_22;
                    VAR_7->ch[1].band_type[VAR_12*16+VAR_14] = (VAR_27->phase > 0) ? VAR_0 : VAR_1;
                    if (VAR_18 && VAR_17 != VAR_7->ch[1].band_type[VAR_12*16+VAR_14]) {

                        VAR_7->ms_mask[VAR_12*16+VAR_14] = 1;
                        VAR_7->ch[1].band_type[VAR_12*16+VAR_14] = (VAR_27->phase > 0) ? VAR_1 : VAR_0;
                    }
                    VAR_17 = VAR_7->ch[1].band_type[VAR_12*16+VAR_14];
                    VAR_11++;
                }
            }
            if (!VAR_9->zeroes[VAR_12*16+VAR_14] && VAR_9->band_type[VAR_12*16+VAR_14] < VAR_4)
                VAR_16 = VAR_9->sf_idx[VAR_12*16+VAR_14];
            VAR_18 = VAR_7->is_mask[VAR_12*16+VAR_14];
            VAR_10 += VAR_8->ics.swb_sizes[VAR_14];
        }
    }
    VAR_7->is_mode = !!VAR_11;
}
