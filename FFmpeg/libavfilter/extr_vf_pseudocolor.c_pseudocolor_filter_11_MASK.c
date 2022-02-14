
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(int VAR_0, int VAR_1, int VAR_2,
                                  const uint8_t *VAR_3,
                                  const uint8_t *VAR_4,
                                  uint8_t *VAR_5,
                                  ptrdiff_t VAR_6,
                                  ptrdiff_t VAR_7,
                                  ptrdiff_t VAR_8,
                                  float *VAR_9)
{
    int VAR_10, VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
        for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
            int VAR_12 = VAR_9[VAR_3[(VAR_11 << 1) * VAR_6 + (VAR_10 << 1)]];

            if (VAR_12 >= 0 && VAR_12 <= VAR_0) {
                VAR_5[VAR_10] = VAR_12;
            } else {
                VAR_5[VAR_10] = VAR_4[VAR_10];
            }
        }
        VAR_4 += VAR_7;
        VAR_5 += VAR_8;
    }
}
