
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nsubbands; float*** time_samples; unsigned int* ch_pres; } ;
typedef TYPE_1__ DCALbrDecoder ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (float) ;
 float FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (float*,int ,int) ;

__attribute__((used)) static void FUNC_3(DCALbrDecoder *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    for (VAR_7 = VAR_2; VAR_7 <= VAR_3; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < VAR_1->nsubbands; VAR_8++) {
            float *VAR_9 = VAR_1->time_samples[VAR_7][VAR_8];

            if (VAR_1->ch_pres[VAR_7] & (1U << VAR_8))
                continue;

            if (VAR_8 < 2) {

                FUNC_2(VAR_9, 0, VAR_0 * sizeof(float));
            } else if (VAR_8 < 10) {
                for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
                    VAR_9[VAR_4] = FUNC_1(VAR_1, VAR_8);
            } else {
                for (VAR_4 = 0; VAR_4 < VAR_0 / 8; VAR_4++, VAR_9 += 8) {
                    float VAR_10[8] = { 0 };


                    for (VAR_6 = 2; VAR_6 < 6; VAR_6++) {
                        float *VAR_11 = &VAR_1->time_samples[VAR_7][VAR_6][VAR_4 * 8];
                        for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
                            VAR_10[VAR_5] += FUNC_0(VAR_11[VAR_5]);
                    }

                    for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
                        VAR_9[VAR_5] = (VAR_10[VAR_5] * 0.25f + 0.5f) * FUNC_1(VAR_1, VAR_8);
                }
            }
        }
    }
}
