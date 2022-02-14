
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* coded_ac_scale_factor; size_t* qps; int** coded_dc_scale_factor; int** qr_count; int*** qr_size; int*** qr_base; int** base_matrix; int**** qmat; size_t* idct_permutation; int version; } ;
typedef TYPE_1__ Vp3DecodeContext ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(Vp3DecodeContext *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0->coded_ac_scale_factor[VAR_0->qps[VAR_1]];
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
            int VAR_10 = VAR_0->coded_dc_scale_factor[!!VAR_4][VAR_0->qps[VAR_1]];
            int VAR_11 = 0;
            for (VAR_6 = 0; VAR_6 < VAR_0->qr_count[VAR_5][VAR_4]; VAR_6++) {
                VAR_11 += VAR_0->qr_size[VAR_5][VAR_4][VAR_6];
                if (VAR_0->qps[VAR_1] <= VAR_11)
                    break;
            }
            VAR_9 = VAR_11 - VAR_0->qr_size[VAR_5][VAR_4][VAR_6];
            VAR_7 = VAR_0->qr_base[VAR_5][VAR_4][VAR_6];
            VAR_8 = VAR_0->qr_base[VAR_5][VAR_4][VAR_6 + 1];
            for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {
                int VAR_12 = (2 * (VAR_11 - VAR_0->qps[VAR_1]) * VAR_0->base_matrix[VAR_7][VAR_3] -
                             2 * (VAR_9 - VAR_0->qps[VAR_1]) * VAR_0->base_matrix[VAR_8][VAR_3] +
                             VAR_0->qr_size[VAR_5][VAR_4][VAR_6]) /
                            (2 * VAR_0->qr_size[VAR_5][VAR_4][VAR_6]);

                int VAR_13 = 8 << (VAR_5 + !VAR_3);
                int VAR_14 = VAR_3 ? VAR_2 : VAR_10;
                int VAR_15 = (1 + VAR_5) * 3;
                VAR_0->qmat[VAR_1][VAR_5][VAR_4][VAR_0->idct_permutation[VAR_3]] =
                    (VAR_3 == 0 || VAR_0->version < 2) ? FUNC_0((VAR_14 * VAR_12) / 100 * 4, VAR_13, 4096)
                                               : (VAR_14 * (VAR_12 - VAR_15) / 100 + VAR_15) * 4;
            }


            VAR_0->qmat[VAR_1][VAR_5][VAR_4][0] = VAR_0->qmat[0][VAR_5][VAR_4][0];
        }
    }
}
