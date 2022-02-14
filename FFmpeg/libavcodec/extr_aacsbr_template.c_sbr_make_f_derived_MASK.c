
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int avctx; } ;
struct TYPE_10__ {size_t bs_xover_band; int bs_noise_bands; } ;
struct TYPE_12__ {int* n; int n_master; int* f_tablehigh; int* m; int* kx; int* f_tablelow; int* k; int n_q; int* f_tablenoise; TYPE_2__* data; TYPE_1__ spectrum_params; int * f_master; } ;
struct TYPE_11__ {scalar_t__ f_indexnoise; } ;
typedef TYPE_3__ SpectralBandReplication ;
typedef TYPE_4__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (float) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int *,int) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(AACContext *VAR_2, SpectralBandReplication *VAR_3)
{
    int VAR_4, VAR_5;




    VAR_3->n[1] = VAR_3->n_master - VAR_3->spectrum_params.bs_xover_band;
    VAR_3->n[0] = (VAR_3->n[1] + 1) >> 1;

    FUNC_5(VAR_3->f_tablehigh, &VAR_3->f_master[VAR_3->spectrum_params.bs_xover_band],
           (VAR_3->n[1] + 1) * sizeof(VAR_3->f_master[0]));
    VAR_3->m[1] = VAR_3->f_tablehigh[VAR_3->n[1]] - VAR_3->f_tablehigh[0];
    VAR_3->kx[1] = VAR_3->f_tablehigh[0];


    if (VAR_3->kx[1] + VAR_3->m[1] > 64) {
        FUNC_1(VAR_2->avctx, VAR_0,
               "Stop frequency border too high: %d\n", VAR_3->kx[1] + VAR_3->m[1]);
        return -1;
    }
    if (VAR_3->kx[1] > 32) {
        FUNC_1(VAR_2->avctx, VAR_0, "Start frequency border too high: %d\n", VAR_3->kx[1]);
        return -1;
    }

    VAR_3->f_tablelow[0] = VAR_3->f_tablehigh[0];
    VAR_5 = VAR_3->n[1] & 1;
    for (VAR_4 = 1; VAR_4 <= VAR_3->n[0]; VAR_4++)
        VAR_3->f_tablelow[VAR_4] = VAR_3->f_tablehigh[2 * VAR_4 - VAR_5];
    VAR_3->n_q = FUNC_0(1, FUNC_4(VAR_3->spectrum_params.bs_noise_bands *
                               FUNC_3(VAR_3->k[2] / (float)VAR_3->kx[1])));


    if (VAR_3->n_q > 5) {
        FUNC_1(VAR_2->avctx, VAR_0, "Too many noise floor scale factors: %d\n", VAR_3->n_q);
        return -1;
    }

    VAR_3->f_tablenoise[0] = VAR_3->f_tablelow[0];
    VAR_5 = 0;
    for (VAR_4 = 1; VAR_4 <= VAR_3->n_q; VAR_4++) {
        VAR_5 += (VAR_3->n[0] - VAR_5) / (VAR_3->n_q + 1 - VAR_4);
        VAR_3->f_tablenoise[VAR_4] = VAR_3->f_tablelow[VAR_5];
    }

    if (FUNC_6(VAR_2, VAR_3) < 0)
        return -1;

    FUNC_7(VAR_3);

    VAR_3->data[0].f_indexnoise = 0;
    VAR_3->data[1].f_indexnoise = 0;

    return 0;
}
