
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int,int const) ;

__attribute__((used)) static void FUNC_3(int VAR_0, int VAR_1, int VAR_2,
                                         int VAR_3, int VAR_4, const int *VAR_5,
                                         const int *VAR_6, const int *VAR_7, const int *VAR_8,
                                         uint8_t *VAR_9, uint8_t *VAR_10)
{
    uint32_t VAR_11 = (1 << VAR_3) - 1;
    int VAR_12 = VAR_4 ? VAR_1 : VAR_1 * 16;
    int VAR_13 = VAR_4 ? 1 : 16;
    int VAR_14 = VAR_4 ? VAR_2 : 1;
    int VAR_15, VAR_16;
    for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
        int VAR_17 = VAR_12 + VAR_15 * VAR_13, VAR_18, VAR_19;
        FUNC_1(VAR_17, 0, VAR_19 = FUNC_0() & VAR_11);
        FUNC_2(VAR_17, -1, VAR_18 = VAR_19, VAR_5[VAR_0] >> 2);
        for (VAR_16 = 1; VAR_16 < 8; VAR_16++) {
            FUNC_2(VAR_17, -1 - VAR_16, VAR_18, VAR_6[VAR_0]);
            FUNC_2(VAR_17, VAR_16, VAR_19, VAR_6[VAR_0]);
        }
    }
    for (VAR_15 = 2; VAR_15 < 4; VAR_15++) {
        int VAR_20 = VAR_12 + VAR_15 * VAR_13, VAR_21, VAR_22;
        FUNC_1(VAR_20, 0, VAR_22 = FUNC_0() & VAR_11);
        FUNC_2(VAR_20, -1, VAR_21 = VAR_22, VAR_5[VAR_0] >> 2);
        for (VAR_16 = 1; VAR_16 < 4; VAR_16++) {
            FUNC_2(VAR_20, -1 - VAR_16, VAR_21, VAR_6[VAR_0]);
            FUNC_2(VAR_20, VAR_16, VAR_22, VAR_6[VAR_0]);
        }
        for (VAR_16 = 4; VAR_16 < 8; VAR_16++) {
            FUNC_1(VAR_20, -1 - VAR_16, FUNC_0() & VAR_11);
            FUNC_1(VAR_20, VAR_16, FUNC_0() & VAR_11);
        }
    }
    for (VAR_15 = 4; VAR_15 < 6; VAR_15++) {
        int VAR_23 = VAR_12 + VAR_15 * VAR_13, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
        FUNC_1(VAR_23, 0, VAR_27 = FUNC_0() & VAR_11);
        FUNC_2(VAR_23, 1, VAR_28 = VAR_27, VAR_8[VAR_0]);
        FUNC_2(VAR_23, 2, VAR_29 = VAR_28, VAR_8[VAR_0]);
        FUNC_2(VAR_23, 3, VAR_29, VAR_8[VAR_0]);
        FUNC_2(VAR_23, -1, VAR_26 = VAR_27, VAR_5[VAR_0] >> 2);
        FUNC_2(VAR_23, -2, VAR_25 = VAR_26, VAR_8[VAR_0]);
        FUNC_2(VAR_23, -3, VAR_24 = VAR_25, VAR_8[VAR_0]);
        FUNC_2(VAR_23, -4, VAR_24, VAR_8[VAR_0]);
        for (VAR_16 = 4; VAR_16 < 8; VAR_16++) {
            FUNC_1(VAR_23, -1 - VAR_16, FUNC_0() & VAR_11);
            FUNC_1(VAR_23, VAR_16, FUNC_0() & VAR_11);
        }
    }
    for (VAR_15 = 6; VAR_15 < 8; VAR_15++) {
        int VAR_30 = VAR_12 + VAR_15 * VAR_13;
        for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {
            FUNC_1(VAR_30, -1 - VAR_16, FUNC_0() & VAR_11);
            FUNC_1(VAR_30, VAR_16, FUNC_0() & VAR_11);
        }
    }
}
