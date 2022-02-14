
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int*) ;

__attribute__((used)) static inline int FUNC_4(int16_t *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    uint64_t VAR_18, VAR_19, VAR_20;
    VAR_18 = FUNC_1(VAR_8);
    VAR_19 = FUNC_1(VAR_8 + 4);

    if (VAR_18 == 0 && VAR_19 == 0)
        return 0;

    VAR_9 = VAR_4 * FUNC_2(VAR_18) + (1 << (VAR_0 - 1));

    if (((VAR_18 & ~0xffffUL) | VAR_19) == 0) {
        VAR_9 >>= VAR_0;
        VAR_20 = (uint16_t) VAR_9;
        VAR_20 |= VAR_20 << 16;
        VAR_20 |= VAR_20 << 32;

        FUNC_3(VAR_20, VAR_8);
        FUNC_3(VAR_20, VAR_8 + 4);
        return 1;
    }

    VAR_10 = VAR_9;
    VAR_11 = VAR_9;
    VAR_12 = VAR_9;

    VAR_17 = FUNC_0(VAR_18, 4);
    if (VAR_17 != 0) {
        VAR_17 = FUNC_2(VAR_17);
        VAR_9 += VAR_2 * VAR_17;
        VAR_10 += VAR_6 * VAR_17;
        VAR_11 -= VAR_6 * VAR_17;
        VAR_12 -= VAR_2 * VAR_17;
    }

    VAR_17 = FUNC_0(VAR_19, 0);
    if (VAR_17 != 0) {
        VAR_17 = FUNC_2(VAR_17);
        VAR_9 += VAR_4 * VAR_17;
        VAR_10 -= VAR_4 * VAR_17;
        VAR_11 -= VAR_4 * VAR_17;
        VAR_12 += VAR_4 * VAR_17;
    }

    VAR_17 = FUNC_0(VAR_19, 4);
    if (VAR_17 != 0) {
        VAR_17 = FUNC_2(VAR_17);
        VAR_9 += VAR_6 * VAR_17;
        VAR_10 -= VAR_2 * VAR_17;
        VAR_11 += VAR_2 * VAR_17;
        VAR_12 -= VAR_6 * VAR_17;
    }

    VAR_17 = FUNC_0(VAR_18, 2);
    if (VAR_17 != 0) {
        VAR_17 = FUNC_2(VAR_17);
        VAR_13 = VAR_1 * VAR_17;
        VAR_14 = VAR_3 * VAR_17;
        VAR_15 = VAR_5 * VAR_17;
        VAR_16 = VAR_7 * VAR_17;
    } else {
        VAR_13 = 0;
        VAR_14 = 0;
        VAR_15 = 0;
        VAR_16 = 0;
    }

    VAR_17 = FUNC_0(VAR_18, 6);
    if (VAR_17) {
        VAR_17 = FUNC_2(VAR_17);
        VAR_13 += VAR_3 * VAR_17;
        VAR_14 -= VAR_7 * VAR_17;
        VAR_15 -= VAR_1 * VAR_17;
        VAR_16 -= VAR_5 * VAR_17;
    }


    VAR_17 = FUNC_0(VAR_19, 2);
    if (VAR_17) {
        VAR_17 = FUNC_2(VAR_17);
        VAR_13 += VAR_5 * VAR_17;
        VAR_14 -= VAR_1 * VAR_17;
        VAR_15 += VAR_7 * VAR_17;
        VAR_16 += VAR_3 * VAR_17;
    }

    VAR_17 = FUNC_0(VAR_19, 6);
    if (VAR_17) {
        VAR_17 = FUNC_2(VAR_17);
        VAR_13 += VAR_7 * VAR_17;
        VAR_14 -= VAR_5 * VAR_17;
        VAR_15 += VAR_3 * VAR_17;
        VAR_16 -= VAR_1 * VAR_17;
    }

    VAR_8[0] = (VAR_9 + VAR_13) >> VAR_0;
    VAR_8[1] = (VAR_10 + VAR_14) >> VAR_0;
    VAR_8[2] = (VAR_11 + VAR_15) >> VAR_0;
    VAR_8[3] = (VAR_12 + VAR_16) >> VAR_0;
    VAR_8[4] = (VAR_12 - VAR_16) >> VAR_0;
    VAR_8[5] = (VAR_11 - VAR_15) >> VAR_0;
    VAR_8[6] = (VAR_10 - VAR_14) >> VAR_0;
    VAR_8[7] = (VAR_9 - VAR_13) >> VAR_0;

    return 2;
}
