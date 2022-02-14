
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline void FUNC_0(uint8_t *VAR_0, int VAR_1, int VAR_2,
         int VAR_3, int VAR_4, uint8_t VAR_5[4], uint8_t VAR_6[4], uint32_t VAR_7)
{
    int VAR_8, VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        if (VAR_6)
            VAR_5[0] = VAR_6[3 * (VAR_9 >> 1)];
        for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
            if (VAR_6)
                VAR_5[1]= VAR_6[(VAR_8 >> 1) + 1];
            VAR_0[VAR_8 + VAR_9*VAR_1] = VAR_5[VAR_7 & ((1 << VAR_4) - 1)];
            VAR_7 >>= VAR_4;
        }
    }
}
