
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static inline void FUNC_0(uint8_t *VAR_0, uint8_t * const *VAR_1,
                                       int VAR_2, int VAR_3, const int *VAR_4)
{
    int VAR_5, VAR_6, VAR_7=0, VAR_8=0;

    for (VAR_5=0; VAR_5<2; VAR_5++)
        for (VAR_6=0; VAR_6<2; VAR_6++) {
            int VAR_9 = (VAR_2+VAR_5)*VAR_4[0] + VAR_3 + VAR_6;
            *VAR_0++ = VAR_1[0][VAR_9];
            VAR_9 = (VAR_2+VAR_5)*VAR_4[1] + VAR_3 + VAR_6;
            VAR_7 += VAR_1[1][VAR_9];
            VAR_8 += VAR_1[2][VAR_9];
        }

    *VAR_0++ = (VAR_7+2)/4;
    *VAR_0++ = (VAR_8+2)/4;
}
