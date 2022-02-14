
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int avctx; } ;
struct TYPE_9__ {int** s_indexmapped; int bs_num_env; size_t* bs_freq_res; int bs_num_noise; scalar_t__* t_env; scalar_t__* t_q; int* bs_add_harmonic; scalar_t__ bs_add_harmonic_flag; int ** noise_facs; int ** env_facs; } ;
struct TYPE_8__ {unsigned int* n; int* f_tablehigh; int* f_tablelow; int* kx; int n_q; int* f_tablenoise; int** s_mapped; int ** q_mapped; int ** e_origmapped; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef TYPE_2__ SBRData ;
typedef TYPE_3__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(AACContext *VAR_2, SpectralBandReplication *VAR_3,
                        SBRData *VAR_4, int VAR_5[2])
{
    int VAR_6, VAR_7, VAR_8;

    FUNC_2(VAR_4->s_indexmapped[1], 0, 7*sizeof(VAR_4->s_indexmapped[1]));
    for (VAR_6 = 0; VAR_6 < VAR_4->bs_num_env; VAR_6++) {
        const unsigned int VAR_9 = VAR_3->n[VAR_4->bs_freq_res[VAR_6 + 1]];
        uint16_t *VAR_10 = VAR_4->bs_freq_res[VAR_6 + 1] ? VAR_3->f_tablehigh : VAR_3->f_tablelow;
        int VAR_11;

        if (VAR_3->kx[1] != VAR_10[0]) {
            FUNC_0(VAR_2->avctx, VAR_1, "kx != f_table{high,low}[0]. "
                   "Derived frequency tables were not regenerated.\n");
            FUNC_3(VAR_3);
            return VAR_0;
        }
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
            for (VAR_8 = VAR_10[VAR_7]; VAR_8 < VAR_10[VAR_7 + 1]; VAR_8++)
                VAR_3->e_origmapped[VAR_6][VAR_8 - VAR_3->kx[1]] = VAR_4->env_facs[VAR_6+1][VAR_7];


        VAR_11 = (VAR_4->bs_num_noise > 1) && (VAR_4->t_env[VAR_6] >= VAR_4->t_q[1]);
        for (VAR_7 = 0; VAR_7 < VAR_3->n_q; VAR_7++)
            for (VAR_8 = VAR_3->f_tablenoise[VAR_7]; VAR_8 < VAR_3->f_tablenoise[VAR_7 + 1]; VAR_8++)
                VAR_3->q_mapped[VAR_6][VAR_8 - VAR_3->kx[1]] = VAR_4->noise_facs[VAR_11+1][VAR_7];

        for (VAR_7 = 0; VAR_7 < VAR_3->n[1]; VAR_7++) {
            if (VAR_4->bs_add_harmonic_flag) {
                const unsigned int VAR_12 =
                    (VAR_3->f_tablehigh[VAR_7] + VAR_3->f_tablehigh[VAR_7 + 1]) >> 1;

                VAR_4->s_indexmapped[VAR_6 + 1][VAR_12 - VAR_3->kx[1]] = VAR_4->bs_add_harmonic[VAR_7] *
                    (VAR_6 >= VAR_5[1] || (VAR_4->s_indexmapped[0][VAR_12 - VAR_3->kx[1]] == 1));
            }
        }

        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
            int VAR_13 = 0;
            for (VAR_8 = VAR_10[VAR_7]; VAR_8 < VAR_10[VAR_7 + 1]; VAR_8++) {
                if (VAR_4->s_indexmapped[VAR_6 + 1][VAR_8 - VAR_3->kx[1]]) {
                    VAR_13 = 1;
                    break;
                }
            }
            FUNC_2(&VAR_3->s_mapped[VAR_6][VAR_10[VAR_7] - VAR_3->kx[1]], VAR_13,
                   (VAR_10[VAR_7 + 1] - VAR_10[VAR_7]) * sizeof(VAR_3->s_mapped[VAR_6][0]));
        }
    }

    FUNC_1(VAR_4->s_indexmapped[0], VAR_4->s_indexmapped[VAR_4->bs_num_env], sizeof(VAR_4->s_indexmapped[0]));
    return 0;
}
