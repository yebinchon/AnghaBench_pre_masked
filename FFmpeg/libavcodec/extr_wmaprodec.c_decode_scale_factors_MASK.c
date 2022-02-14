
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int8_t ;
struct TYPE_7__ {int channels_for_cur_subframe; int* channel_indexes_for_cur_subframe; int num_bands; size_t table_idx; TYPE_1__* channel; int avctx; int gb; int *** sf_offsets; } ;
typedef TYPE_2__ WMAProDecodeCtx ;
struct TYPE_9__ {int table; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_6__ {int* scale_factors; int** saved_scale_factors; size_t scale_factor_idx; int reuse_sf; size_t table_idx; int scale_factor_step; int max_scale_factor; int cur_subframe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int* VAR_6 ;
 int* VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;

__attribute__((used)) static int FUNC_5(WMAProDecodeCtx* VAR_10)
{
    int VAR_11;





    for (VAR_11 = 0; VAR_11 < VAR_10->channels_for_cur_subframe; VAR_11++) {
        int VAR_12 = VAR_10->channel_indexes_for_cur_subframe[VAR_11];
        int* VAR_13;
        int* VAR_14;
        VAR_10->channel[VAR_12].scale_factors = VAR_10->channel[VAR_12].saved_scale_factors[!VAR_10->channel[VAR_12].scale_factor_idx];
        VAR_14 = VAR_10->channel[VAR_12].scale_factors + VAR_10->num_bands;






        if (VAR_10->channel[VAR_12].reuse_sf) {
            const int8_t* VAR_15 = VAR_10->sf_offsets[VAR_10->table_idx][VAR_10->channel[VAR_12].table_idx];
            int VAR_16;
            for (VAR_16 = 0; VAR_16 < VAR_10->num_bands; VAR_16++)
                VAR_10->channel[VAR_12].scale_factors[VAR_16] =
                    VAR_10->channel[VAR_12].saved_scale_factors[VAR_10->channel[VAR_12].scale_factor_idx][*VAR_15++];
        }

        if (!VAR_10->channel[VAR_12].cur_subframe || FUNC_3(&VAR_10->gb)) {

            if (!VAR_10->channel[VAR_12].reuse_sf) {
                int VAR_17;

                VAR_10->channel[VAR_12].scale_factor_step = FUNC_2(&VAR_10->gb, 2) + 1;
                VAR_17 = 45 / VAR_10->channel[VAR_12].scale_factor_step;
                for (VAR_13 = VAR_10->channel[VAR_12].scale_factors; VAR_13 < VAR_14; VAR_13++) {
                    VAR_17 += FUNC_4(&VAR_10->gb, VAR_9.table, VAR_4, VAR_2) - 60;
                    *VAR_13 = VAR_17;
                }
            } else {
                int VAR_18;

                for (VAR_18 = 0; VAR_18 < VAR_10->num_bands; VAR_18++) {
                    int VAR_19;
                    int VAR_20;
                    int VAR_21;
                    int VAR_22;

                    VAR_19 = FUNC_4(&VAR_10->gb, VAR_8.table, VAR_5, VAR_3);

                    if (!VAR_19) {
                        uint32_t VAR_23 = FUNC_2(&VAR_10->gb, 14);
                        VAR_21 = VAR_23 >> 6;
                        VAR_22 = (VAR_23 & 1) - 1;
                        VAR_20 = (VAR_23 & 0x3f) >> 1;
                    } else if (VAR_19 == 1) {
                        break;
                    } else {
                        VAR_20 = VAR_7[VAR_19];
                        VAR_21 = VAR_6[VAR_19];
                        VAR_22 = FUNC_3(&VAR_10->gb)-1;
                    }

                    VAR_18 += VAR_20;
                    if (VAR_18 >= VAR_10->num_bands) {
                        FUNC_1(VAR_10->avctx, VAR_1,
                               "invalid scale factor coding\n");
                        return VAR_0;
                    }
                    VAR_10->channel[VAR_12].scale_factors[VAR_18] += (VAR_21 ^ VAR_22) - VAR_22;
                }
            }

            VAR_10->channel[VAR_12].scale_factor_idx = !VAR_10->channel[VAR_12].scale_factor_idx;
            VAR_10->channel[VAR_12].table_idx = VAR_10->table_idx;
            VAR_10->channel[VAR_12].reuse_sf = 1;
        }


        VAR_10->channel[VAR_12].max_scale_factor = VAR_10->channel[VAR_12].scale_factors[0];
        for (VAR_13 = VAR_10->channel[VAR_12].scale_factors + 1; VAR_13 < VAR_14; VAR_13++) {
            VAR_10->channel[VAR_12].max_scale_factor =
                FUNC_0(VAR_10->channel[VAR_12].max_scale_factor, *VAR_13);
        }

    }
    return 0;
}
