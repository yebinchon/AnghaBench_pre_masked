
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1,
                       const uint8_t *VAR_2, const uint8_t *VAR_3,
                       uint8_t *VAR_4,
                       ptrdiff_t VAR_5, ptrdiff_t VAR_6,
                       ptrdiff_t VAR_7, ptrdiff_t VAR_8,
                       ptrdiff_t VAR_9,
                       int VAR_10, int VAR_11)
{
    int VAR_12, VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
        for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
            VAR_4[VAR_12] = VAR_0[VAR_12] < VAR_1[VAR_12] ? VAR_2[VAR_12] : VAR_3[VAR_12];
        }

        VAR_0 += VAR_5;
        VAR_1 += VAR_6;
        VAR_2 += VAR_7;
        VAR_3 += VAR_8;
        VAR_4 += VAR_9;
    }
}
