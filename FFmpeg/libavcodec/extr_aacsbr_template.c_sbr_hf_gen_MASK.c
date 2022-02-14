
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int avctx; } ;
struct TYPE_6__ {int (* hf_gen ) (int **,int const**,int const*,int const*,int const,int,int) ;} ;
struct TYPE_7__ {int* kx; int num_patches; int* patch_num_subbands; int* patch_start_subband; int n_q; int* f_tablenoise; int* m; TYPE_1__ dsp; } ;
typedef TYPE_2__ SpectralBandReplication ;
typedef int INTFLOAT ;
typedef TYPE_3__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int ***,int ,int) ;
 int FUNC_2 (int **,int const**,int const*,int const*,int const,int,int) ;

__attribute__((used)) static int FUNC_3(AACContext *VAR_2, SpectralBandReplication *VAR_3,
                      INTFLOAT VAR_4[64][40][2], const INTFLOAT VAR_5[32][40][2],
                      const INTFLOAT (*VAR_6)[2], const INTFLOAT (*VAR_7)[2],
                      const INTFLOAT VAR_8[5], const uint8_t *VAR_9,
                      int VAR_10)
{
    int VAR_11, VAR_12;
    int VAR_13 = 0;
    int VAR_14 = VAR_3->kx[1];
    for (VAR_11 = 0; VAR_11 < VAR_3->num_patches; VAR_11++) {
        for (VAR_12 = 0; VAR_12 < VAR_3->patch_num_subbands[VAR_11]; VAR_12++, VAR_14++) {
            const int VAR_15 = VAR_3->patch_start_subband[VAR_11] + VAR_12;
            while (VAR_13 <= VAR_3->n_q && VAR_14 >= VAR_3->f_tablenoise[VAR_13])
                VAR_13++;
            VAR_13--;

            if (VAR_13 < 0) {
                FUNC_0(VAR_2->avctx, VAR_0,
                       "ERROR : no subband found for frequency %d\n", VAR_14);
                return -1;
            }

            VAR_3->dsp.hf_gen(VAR_4[VAR_14] + VAR_1,
                            VAR_5[VAR_15] + VAR_1,
                            VAR_6[VAR_15], VAR_7[VAR_15], VAR_8[VAR_13],
                            2 * VAR_9[0], 2 * VAR_9[VAR_10]);
        }
    }
    if (VAR_14 < VAR_3->m[1] + VAR_3->kx[1])
        FUNC_1(VAR_4 + VAR_14, 0, (VAR_3->m[1] + VAR_3->kx[1] - VAR_14) * sizeof(*VAR_4));

    return 0;
}
