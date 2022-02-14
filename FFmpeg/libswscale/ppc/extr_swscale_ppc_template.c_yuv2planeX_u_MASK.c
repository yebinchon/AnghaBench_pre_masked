
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(const int16_t *VAR_0, int VAR_1,
                                const int16_t **VAR_2, uint8_t *VAR_3, int VAR_4,
                                const uint8_t *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;

    for (VAR_8 = VAR_7; VAR_8 < VAR_4; VAR_8++) {
        int VAR_10 = VAR_5[(VAR_8 + VAR_6) & 7] << 12;
        for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
            VAR_10 += VAR_2[VAR_9][VAR_8] * VAR_0[VAR_9];
        VAR_3[VAR_8] = FUNC_0(VAR_10 >> 19);
    }
}
