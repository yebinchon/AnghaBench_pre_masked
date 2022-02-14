
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (float*,int ,size_t) ;

__attribute__((used)) static void FUNC_1(const uint8_t *VAR_0, ptrdiff_t VAR_1,
                               int VAR_2, int VAR_3, float *VAR_4, size_t VAR_5)
{
    int VAR_6, VAR_7;

    FUNC_0(VAR_4, 0, VAR_5 * sizeof(*VAR_4));

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
            VAR_4[VAR_0[VAR_7]] += 1;
        }
        VAR_0 += VAR_1;
    }

    for (VAR_7 = 0; VAR_7 < VAR_5 - 1; VAR_7++) {
        VAR_4[VAR_7 + 1] += VAR_4[VAR_7];
        VAR_4[VAR_7] /= VAR_5;
    }
    VAR_4[VAR_7] /= VAR_5;
}
