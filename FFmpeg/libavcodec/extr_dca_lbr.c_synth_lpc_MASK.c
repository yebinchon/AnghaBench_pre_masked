
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int framenum; float*** time_samples; unsigned int* ch_pres; int **** lpc_coeff; } ;
typedef TYPE_1__ DCALbrDecoder ;


 int FUNC_0 (float*,int ,int) ;

__attribute__((used)) static void FUNC_1(DCALbrDecoder *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = VAR_0->framenum & 1;
    int VAR_5;

    for (VAR_5 = VAR_1; VAR_5 <= VAR_2; VAR_5++) {
        float *VAR_6 = VAR_0->time_samples[VAR_5][VAR_3];

        if (!(VAR_0->ch_pres[VAR_5] & (1U << VAR_3)))
            continue;

        if (VAR_3 < 2) {
            FUNC_0(VAR_6, VAR_0->lpc_coeff[VAR_4^1][VAR_5][VAR_3][1], 16);
            FUNC_0(VAR_6 + 16, VAR_0->lpc_coeff[VAR_4 ][VAR_5][VAR_3][0], 64);
            FUNC_0(VAR_6 + 80, VAR_0->lpc_coeff[VAR_4 ][VAR_5][VAR_3][1], 48);
        } else {
            FUNC_0(VAR_6, VAR_0->lpc_coeff[VAR_4^1][VAR_5][VAR_3][0], 16);
            FUNC_0(VAR_6 + 16, VAR_0->lpc_coeff[VAR_4 ][VAR_5][VAR_3][0], 112);
        }
    }
}
