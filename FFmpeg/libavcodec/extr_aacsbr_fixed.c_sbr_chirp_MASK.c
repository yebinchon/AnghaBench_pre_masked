
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int** bs_invf_mode; int* bw_array; } ;
struct TYPE_5__ {int n_q; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef TYPE_2__ SBRData ;



__attribute__((used)) static void FUNC_0(SpectralBandReplication *VAR_0, SBRData *VAR_1)
{
    int VAR_2;
    int VAR_3;
    static const int VAR_4[] = { 0, 1610612736, 1932735283, 2104533975 };
    int64_t VAR_5;

    for (VAR_2 = 0; VAR_2 < VAR_0->n_q; VAR_2++) {
        if (VAR_1->bs_invf_mode[0][VAR_2] + VAR_1->bs_invf_mode[1][VAR_2] == 1)
            VAR_3 = 1288490189;
        else
            VAR_3 = VAR_4[VAR_1->bs_invf_mode[0][VAR_2]];

        if (VAR_3 < VAR_1->bw_array[VAR_2]){
            VAR_5 = (int64_t)VAR_3 * 1610612736;
            VAR_5 += (int64_t)VAR_1->bw_array[VAR_2] * 0x20000000;
            VAR_3 = (int)((VAR_5 + 0x40000000) >> 31);
        } else {
            VAR_5 = (int64_t)VAR_3 * 1946157056;
            VAR_5 += (int64_t)VAR_1->bw_array[VAR_2] * 201326592;
            VAR_3 = (int)((VAR_5 + 0x40000000) >> 31);
        }
        VAR_1->bw_array[VAR_2] = VAR_3 < 0x2000000 ? 0 : VAR_3;
    }
}
