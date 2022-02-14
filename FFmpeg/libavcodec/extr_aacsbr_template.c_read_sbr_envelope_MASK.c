
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
struct TYPE_9__ {int bs_num_env; size_t* bs_freq_res; int** env_facs_q; scalar_t__* bs_df_env; scalar_t__ bs_amp_res; } ;
struct TYPE_8__ {int bs_coupling; int* n; } ;
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
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,int ,char*,unsigned int) ;
 int const FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int **,int,int) ;
 int FUNC_3 (unsigned int*,unsigned int*,int) ;
 TYPE_4__* VAR_10 ;
 int* VAR_11 ;

__attribute__((used)) static int FUNC_4(AACContext *VAR_12, SpectralBandReplication *VAR_13, GetBitContext *VAR_14,
                              SBRData *VAR_15, int VAR_16)
{
    int VAR_17;
    int VAR_18, VAR_19, VAR_20;
    VLC_TYPE (*VAR_21)[2], (*VAR_22)[2];
    int VAR_23, VAR_24;
    const int VAR_25 = (VAR_16 == 1 && VAR_13->bs_coupling == 1) + 1;
    const int VAR_26 = VAR_13->n[1] & 1;

    if (VAR_13->bs_coupling && VAR_16) {
        if (VAR_15->bs_amp_res) {
            VAR_17 = 5;
            VAR_21 = VAR_10[VAR_9].table;
            VAR_23 = VAR_11[VAR_9];
            VAR_22 = VAR_10[VAR_5].table;
            VAR_24 = VAR_11[VAR_5];
        } else {
            VAR_17 = 6;
            VAR_21 = VAR_10[VAR_8].table;
            VAR_23 = VAR_11[VAR_8];
            VAR_22 = VAR_10[VAR_4].table;
            VAR_24 = VAR_11[VAR_4];
        }
    } else {
        if (VAR_15->bs_amp_res) {
            VAR_17 = 6;
            VAR_21 = VAR_10[VAR_7].table;
            VAR_23 = VAR_11[VAR_7];
            VAR_22 = VAR_10[VAR_3].table;
            VAR_24 = VAR_11[VAR_3];
        } else {
            VAR_17 = 7;
            VAR_21 = VAR_10[VAR_6].table;
            VAR_23 = VAR_11[VAR_6];
            VAR_22 = VAR_10[VAR_2].table;
            VAR_24 = VAR_11[VAR_2];
        }
    }

    for (VAR_18 = 0; VAR_18 < VAR_15->bs_num_env; VAR_18++) {
        if (VAR_15->bs_df_env[VAR_18]) {

            if (VAR_15->bs_freq_res[VAR_18 + 1] == VAR_15->bs_freq_res[VAR_18]) {
                for (VAR_19 = 0; VAR_19 < VAR_13->n[VAR_15->bs_freq_res[VAR_18 + 1]]; VAR_19++) {
                    VAR_15->env_facs_q[VAR_18 + 1][VAR_19] = VAR_15->env_facs_q[VAR_18][VAR_19] + VAR_25 * (FUNC_2(VAR_14, VAR_21, 9, 3) - VAR_23);
                    if (VAR_15->env_facs_q[VAR_18 + 1][VAR_19] > 127U) {
                        FUNC_0(VAR_12->avctx, VAR_1, "env_facs_q %d is invalid\n", VAR_15->env_facs_q[VAR_18 + 1][VAR_19]);
                        return VAR_0;
                    }
                }
            } else if (VAR_15->bs_freq_res[VAR_18 + 1]) {
                for (VAR_19 = 0; VAR_19 < VAR_13->n[VAR_15->bs_freq_res[VAR_18 + 1]]; VAR_19++) {
                    VAR_20 = (VAR_19 + VAR_26) >> 1;
                    VAR_15->env_facs_q[VAR_18 + 1][VAR_19] = VAR_15->env_facs_q[VAR_18][VAR_20] + VAR_25 * (FUNC_2(VAR_14, VAR_21, 9, 3) - VAR_23);
                    if (VAR_15->env_facs_q[VAR_18 + 1][VAR_19] > 127U) {
                        FUNC_0(VAR_12->avctx, VAR_1, "env_facs_q %d is invalid\n", VAR_15->env_facs_q[VAR_18 + 1][VAR_19]);
                        return VAR_0;
                    }
                }
            } else {
                for (VAR_19 = 0; VAR_19 < VAR_13->n[VAR_15->bs_freq_res[VAR_18 + 1]]; VAR_19++) {
                    VAR_20 = VAR_19 ? 2*VAR_19 - VAR_26 : 0;
                    VAR_15->env_facs_q[VAR_18 + 1][VAR_19] = VAR_15->env_facs_q[VAR_18][VAR_20] + VAR_25 * (FUNC_2(VAR_14, VAR_21, 9, 3) - VAR_23);
                    if (VAR_15->env_facs_q[VAR_18 + 1][VAR_19] > 127U) {
                        FUNC_0(VAR_12->avctx, VAR_1, "env_facs_q %d is invalid\n", VAR_15->env_facs_q[VAR_18 + 1][VAR_19]);
                        return VAR_0;
                    }
                }
            }
        } else {
            VAR_15->env_facs_q[VAR_18 + 1][0] = VAR_25 * FUNC_1(VAR_14, VAR_17);
            for (VAR_19 = 1; VAR_19 < VAR_13->n[VAR_15->bs_freq_res[VAR_18 + 1]]; VAR_19++) {
                VAR_15->env_facs_q[VAR_18 + 1][VAR_19] = VAR_15->env_facs_q[VAR_18 + 1][VAR_19 - 1] + VAR_25 * (FUNC_2(VAR_14, VAR_22, 9, 3) - VAR_24);
                if (VAR_15->env_facs_q[VAR_18 + 1][VAR_19] > 127U) {
                    FUNC_0(VAR_12->avctx, VAR_1, "env_facs_q %d is invalid\n", VAR_15->env_facs_q[VAR_18 + 1][VAR_19]);
                    return VAR_0;
                }
            }
        }
    }


    FUNC_3(VAR_15->env_facs_q[0], VAR_15->env_facs_q[VAR_15->bs_num_env],
           sizeof(VAR_15->env_facs_q[0]));

    return 0;
}
