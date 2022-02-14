
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(uint16_t *VAR_0, unsigned VAR_1, unsigned VAR_2,
                                               unsigned VAR_3, unsigned VAR_4, unsigned VAR_5, uint16_t *VAR_6,
                                               unsigned VAR_7, unsigned VAR_8, int VAR_9,
                                               int VAR_10, int VAR_11)
{
    int VAR_12 = FUNC_0(VAR_4 - VAR_1, VAR_7);
    int VAR_13, VAR_14, VAR_15, VAR_16;
    uint16_t VAR_17, *VAR_18;

    if (!VAR_10) {
        VAR_15 = VAR_3 >> 1;
        VAR_0 += VAR_2 * VAR_15 + VAR_1;
        VAR_16 = FUNC_0(VAR_5 - VAR_2, VAR_8);
    } else {
        VAR_15 = VAR_3;
        VAR_0 += VAR_2 * VAR_15 + VAR_1;
        VAR_16 = FUNC_0(VAR_5/2 - VAR_2, VAR_8);
        if (!VAR_11)
            VAR_0 += VAR_3 >> 1;
    }

    for (VAR_13 = 0; VAR_13 < VAR_16; ++VAR_13) {
        for (VAR_14 = 0; VAR_14 < VAR_12; ++VAR_14) {
            if (!VAR_9) {
                VAR_6[VAR_14] = VAR_0[VAR_14];
            } else {
                VAR_6[VAR_14] = VAR_0[VAR_14] << 6;
            }
        }
        if (!VAR_9) {
            VAR_17 = VAR_6[VAR_14 - 1];
        } else {
            VAR_17 = VAR_6[VAR_14 - 1] << 6;
        }
        for (; VAR_14 < VAR_7; VAR_14++)
            VAR_6[VAR_14] = VAR_17;
        VAR_0 += VAR_15;
        VAR_6 += VAR_7;
    }
    VAR_18 = VAR_6 - VAR_7;
    for (; VAR_13 < VAR_8; VAR_13++) {
        for (VAR_14 = 0; VAR_14 < VAR_7; ++VAR_14) {
            VAR_6[VAR_14] = VAR_18[VAR_14];
        }
        VAR_6 += VAR_7;
    }
}
