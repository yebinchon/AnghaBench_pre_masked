
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int,int,int*,int*) ;
 int FUNC_1 (int,int,int*,int*) ;

__attribute__((used)) static void FUNC_2(uint16_t *VAR_0, int VAR_1, int VAR_2,
                       int VAR_3, int VAR_4, uint16_t VAR_5)
{
    int VAR_6 = (VAR_5 < (1 << 14));
    int VAR_7 = (VAR_1 > VAR_3) ? VAR_3 : VAR_1;
    int VAR_8 = 1;
    int VAR_9;

    while (VAR_8 <= VAR_7)
        VAR_8 <<= 1;

    VAR_8 >>= 1;
    VAR_9 = VAR_8;
    VAR_8 >>= 1;

    while (VAR_8 >= 1) {
        uint16_t *VAR_10 = VAR_0;
        uint16_t *VAR_11 = VAR_0 + VAR_4 * (VAR_3 - VAR_9);
        uint16_t VAR_12, VAR_13, VAR_14, VAR_15;
        int VAR_16 = VAR_4 * VAR_8;
        int VAR_17 = VAR_4 * VAR_9;
        int VAR_18 = VAR_2 * VAR_8;
        int VAR_19 = VAR_2 * VAR_9;

        for (; VAR_10 <= VAR_11; VAR_10 += VAR_17) {
            uint16_t *VAR_20 = VAR_10;
            uint16_t *VAR_21 = VAR_10 + VAR_2 * (VAR_1 - VAR_9);

            for (; VAR_20 <= VAR_21; VAR_20 += VAR_19) {
                uint16_t *VAR_22 = VAR_20 + VAR_18;
                uint16_t *VAR_23 = VAR_20 + VAR_16;
                uint16_t *VAR_24 = VAR_23 + VAR_18;

                if (VAR_6) {
                    FUNC_0(*VAR_20, *VAR_23, &VAR_12, &VAR_14);
                    FUNC_0(*VAR_22, *VAR_24, &VAR_13, &VAR_15);
                    FUNC_0(VAR_12, VAR_13, VAR_20, VAR_22);
                    FUNC_0(VAR_14, VAR_15, VAR_23, VAR_24);
                } else {
                    FUNC_1(*VAR_20, *VAR_23, &VAR_12, &VAR_14);
                    FUNC_1(*VAR_22, *VAR_24, &VAR_13, &VAR_15);
                    FUNC_1(VAR_12, VAR_13, VAR_20, VAR_22);
                    FUNC_1(VAR_14, VAR_15, VAR_23, VAR_24);
                }
            }

            if (VAR_1 & VAR_8) {
                uint16_t *VAR_25 = VAR_20 + VAR_16;

                if (VAR_6)
                    FUNC_0(*VAR_20, *VAR_25, &VAR_12, VAR_25);
                else
                    FUNC_1(*VAR_20, *VAR_25, &VAR_12, VAR_25);

                *VAR_20 = VAR_12;
            }
        }

        if (VAR_3 & VAR_8) {
            uint16_t *VAR_26 = VAR_10;
            uint16_t *VAR_27 = VAR_10 + VAR_2 * (VAR_1 - VAR_9);

            for (; VAR_26 <= VAR_27; VAR_26 += VAR_19) {
                uint16_t *VAR_28 = VAR_26 + VAR_18;

                if (VAR_6)
                    FUNC_0(*VAR_26, *VAR_28, &VAR_12, VAR_28);
                else
                    FUNC_1(*VAR_26, *VAR_28, &VAR_12, VAR_28);

                *VAR_26 = VAR_12;
            }
        }

        VAR_9 = VAR_8;
        VAR_8 >>= 1;
    }
}
