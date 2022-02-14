
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* end_freq; int num_rematrixing_bands; int** fixed_coeffs; scalar_t__* rematrixing_flags; } ;
typedef TYPE_1__ AC3DecodeContext ;


 int FUNC_0 (int,int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_1(AC3DecodeContext *VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4, VAR_5;

    VAR_4 = FUNC_0(VAR_1->end_freq[1], VAR_1->end_freq[2]);

    for (VAR_2 = 0; VAR_2 < VAR_1->num_rematrixing_bands; VAR_2++) {
        if (VAR_1->rematrixing_flags[VAR_2]) {
            VAR_5 = FUNC_0(VAR_4, VAR_0[VAR_2 + 1]);
            for (VAR_3 = VAR_0[VAR_2]; VAR_3 < VAR_5; VAR_3++) {
                int VAR_6 = VAR_1->fixed_coeffs[1][VAR_3];
                VAR_1->fixed_coeffs[1][VAR_3] += VAR_1->fixed_coeffs[2][VAR_3];
                VAR_1->fixed_coeffs[2][VAR_3] = VAR_6 - VAR_1->fixed_coeffs[2][VAR_3];
            }
        }
    }
}
