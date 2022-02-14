
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int** bs_invf_mode; float* bw_array; } ;
struct TYPE_5__ {int n_q; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef TYPE_2__ SBRData ;



__attribute__((used)) static void FUNC_0(SpectralBandReplication *VAR_0, SBRData *VAR_1)
{
    int VAR_2;
    float VAR_3;
    static const float VAR_4[] = { 0.0f, 0.75f, 0.9f, 0.98f };

    for (VAR_2 = 0; VAR_2 < VAR_0->n_q; VAR_2++) {
        if (VAR_1->bs_invf_mode[0][VAR_2] + VAR_1->bs_invf_mode[1][VAR_2] == 1) {
            VAR_3 = 0.6f;
        } else
            VAR_3 = VAR_4[VAR_1->bs_invf_mode[0][VAR_2]];

        if (VAR_3 < VAR_1->bw_array[VAR_2]) {
            VAR_3 = 0.75f * VAR_3 + 0.25f * VAR_1->bw_array[VAR_2];
        } else
            VAR_3 = 0.90625f * VAR_3 + 0.09375f * VAR_1->bw_array[VAR_2];
        VAR_1->bw_array[VAR_2] = VAR_3 < 0.015625f ? 0.0f : VAR_3;
    }
}
