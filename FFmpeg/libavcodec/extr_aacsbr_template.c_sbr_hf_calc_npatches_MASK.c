
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int avctx; } ;
struct TYPE_5__ {int* k; int* kx; int sample_rate; int num_patches; int* m; int* f_master; int n_master; int* patch_num_subbands; int* patch_start_subband; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef TYPE_2__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(AACContext *VAR_2, SpectralBandReplication *VAR_3)
{
    int VAR_4, VAR_5, VAR_6 = -1, VAR_7 = -1, VAR_8 = 0;
    int VAR_9 = VAR_3->k[0];
    int VAR_10 = VAR_3->kx[1];
    int VAR_11 = ((1000 << 11) + (VAR_3->sample_rate >> 1)) / VAR_3->sample_rate;

    VAR_3->num_patches = 0;

    if (VAR_11 < VAR_3->kx[1] + VAR_3->m[1]) {
        for (VAR_5 = 0; VAR_3->f_master[VAR_5] < VAR_11; VAR_5++) ;
    } else
        VAR_5 = VAR_3->n_master;

    do {
        int VAR_12 = 0;
        if (VAR_5 == VAR_6 && VAR_9 == VAR_7) {
            FUNC_1(VAR_2->avctx, VAR_1, "patch construction failed\n");
            return VAR_0;
        }
        VAR_6 = VAR_5;
        VAR_7 = VAR_9;
        for (VAR_4 = VAR_5; VAR_4 == VAR_5 || VAR_8 > (VAR_3->k[0] - 1 + VAR_9 - VAR_12); VAR_4--) {
            VAR_8 = VAR_3->f_master[VAR_4];
            VAR_12 = (VAR_8 + VAR_3->k[0]) & 1;
        }





        if (VAR_3->num_patches > 5) {
            FUNC_1(VAR_2->avctx, VAR_1, "Too many patches: %d\n", VAR_3->num_patches);
            return -1;
        }

        VAR_3->patch_num_subbands[VAR_3->num_patches] = FUNC_0(VAR_8 - VAR_10, 0);
        VAR_3->patch_start_subband[VAR_3->num_patches] = VAR_3->k[0] - VAR_12 - VAR_3->patch_num_subbands[VAR_3->num_patches];

        if (VAR_3->patch_num_subbands[VAR_3->num_patches] > 0) {
            VAR_10 = VAR_8;
            VAR_9 = VAR_8;
            VAR_3->num_patches++;
        } else
            VAR_9 = VAR_3->kx[1];

        if (VAR_3->f_master[VAR_5] - VAR_8 < 3)
            VAR_5 = VAR_3->n_master;
    } while (VAR_8 != VAR_3->kx[1] + VAR_3->m[1]);

    if (VAR_3->num_patches > 1 &&
        VAR_3->patch_num_subbands[VAR_3->num_patches - 1] < 3)
        VAR_3->num_patches--;

    return 0;
}
