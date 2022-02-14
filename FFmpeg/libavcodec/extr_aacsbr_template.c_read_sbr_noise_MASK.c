
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VLC_TYPE ;
struct TYPE_11__ {int ** table; } ;
struct TYPE_10__ {int avctx; } ;
struct TYPE_9__ {int bs_num_noise; int** noise_facs_q; scalar_t__* bs_df_noise; } ;
struct TYPE_8__ {int bs_coupling; int n_q; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef TYPE_2__ SBRData ;
typedef int GetBitContext ;
typedef TYPE_3__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ,char*,unsigned int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int **,int,int) ;
 int FUNC_3 (unsigned int*,unsigned int*,int) ;
 TYPE_4__* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_4(AACContext *VAR_8, SpectralBandReplication *VAR_9, GetBitContext *VAR_10,
                           SBRData *VAR_11, int VAR_12)
{
    int VAR_13, VAR_14;
    VLC_TYPE (*VAR_15)[2], (*VAR_16)[2];
    int VAR_17, VAR_18;
    int VAR_19 = (VAR_12 == 1 && VAR_9->bs_coupling == 1) + 1;

    if (VAR_9->bs_coupling && VAR_12) {
        VAR_15 = VAR_6[VAR_5].table;
        VAR_17 = VAR_7[VAR_5];
        VAR_16 = VAR_6[VAR_3].table;
        VAR_18 = VAR_7[VAR_3];
    } else {
        VAR_15 = VAR_6[VAR_4].table;
        VAR_17 = VAR_7[VAR_4];
        VAR_16 = VAR_6[VAR_2].table;
        VAR_18 = VAR_7[VAR_2];
    }

    for (VAR_13 = 0; VAR_13 < VAR_11->bs_num_noise; VAR_13++) {
        if (VAR_11->bs_df_noise[VAR_13]) {
            for (VAR_14 = 0; VAR_14 < VAR_9->n_q; VAR_14++) {
                VAR_11->noise_facs_q[VAR_13 + 1][VAR_14] = VAR_11->noise_facs_q[VAR_13][VAR_14] + VAR_19 * (FUNC_2(VAR_10, VAR_15, 9, 2) - VAR_17);
                if (VAR_11->noise_facs_q[VAR_13 + 1][VAR_14] > 30U) {
                    FUNC_0(VAR_8->avctx, VAR_1, "noise_facs_q %d is invalid\n", VAR_11->noise_facs_q[VAR_13 + 1][VAR_14]);
                    return VAR_0;
                }
            }
        } else {
            VAR_11->noise_facs_q[VAR_13 + 1][0] = VAR_19 * FUNC_1(VAR_10, 5);
            for (VAR_14 = 1; VAR_14 < VAR_9->n_q; VAR_14++) {
                VAR_11->noise_facs_q[VAR_13 + 1][VAR_14] = VAR_11->noise_facs_q[VAR_13 + 1][VAR_14 - 1] + VAR_19 * (FUNC_2(VAR_10, VAR_16, 9, 3) - VAR_18);
                if (VAR_11->noise_facs_q[VAR_13 + 1][VAR_14] > 30U) {
                    FUNC_0(VAR_8->avctx, VAR_1, "noise_facs_q %d is invalid\n", VAR_11->noise_facs_q[VAR_13 + 1][VAR_14]);
                    return VAR_0;
                }
            }
        }
    }


    FUNC_3(VAR_11->noise_facs_q[0], VAR_11->noise_facs_q[VAR_11->bs_num_noise],
           sizeof(VAR_11->noise_facs_q[0]));
    return 0;
}
