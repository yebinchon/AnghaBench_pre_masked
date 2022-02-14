
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static inline void FUNC_1(uint32_t *VAR_0, ptrdiff_t VAR_1,
                                                     int VAR_2, int VAR_3,
                                                     const uint8_t *VAR_4, ptrdiff_t VAR_5,
                                                     int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10,
                                                     int VAR_11, int VAR_12)
{
    int VAR_13, VAR_14;

    for (VAR_14 = VAR_3; VAR_14 < VAR_3 + VAR_12; VAR_14++) {
        uint32_t VAR_15 = VAR_0[VAR_14*VAR_1 + VAR_2 - 1] - VAR_0[(VAR_14-1)*VAR_1 + VAR_2 - 1];
        const int VAR_16 = FUNC_0(VAR_14 - VAR_8, 0, VAR_10 - 1);
        const int VAR_17 = FUNC_0(VAR_14 - (VAR_8 + VAR_7), 0, VAR_10 - 1);

        for (VAR_13 = VAR_2; VAR_13 < VAR_2 + VAR_11; VAR_13++) {
            const int VAR_18 = FUNC_0(VAR_13 - VAR_8, 0, VAR_9 - 1);
            const int VAR_19 = FUNC_0(VAR_13 - (VAR_8 + VAR_6), 0, VAR_9 - 1);
            const uint8_t VAR_20 = VAR_4[VAR_16*VAR_5 + VAR_18];
            const uint8_t VAR_21 = VAR_4[VAR_17*VAR_5 + VAR_19];
            const int VAR_22 = VAR_20 - VAR_21;
            VAR_15 += VAR_22 * VAR_22;
            VAR_0[VAR_14*VAR_1 + VAR_13] = VAR_0[(VAR_14-1)*VAR_1 + VAR_13] + VAR_15;
        }
    }
}
