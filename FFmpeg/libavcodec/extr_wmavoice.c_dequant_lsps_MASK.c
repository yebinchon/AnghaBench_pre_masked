
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (double*,int ,int) ;

__attribute__((used)) static void FUNC_1(double *VAR_0, int VAR_1,
                         const uint16_t *VAR_2,
                         const uint16_t *VAR_3,
                         int VAR_4, const uint8_t *VAR_5,
                         const double *VAR_6,
                         const double *VAR_7)
{
    int VAR_8, VAR_9;

    FUNC_0(VAR_0, 0, VAR_1 * sizeof(*VAR_0));
    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        const uint8_t *VAR_10 = &VAR_5[VAR_2[VAR_8] * VAR_1];
        double VAR_11 = VAR_7[VAR_8], VAR_12 = VAR_6[VAR_8];

        for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
            VAR_0[VAR_9] += VAR_11 + VAR_12 * VAR_10[VAR_9];

        VAR_5 += VAR_3[VAR_8] * VAR_1;
    }
}
