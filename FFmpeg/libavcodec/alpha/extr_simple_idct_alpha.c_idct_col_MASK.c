
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline void FUNC_0(int16_t *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

    VAR_8[0] += (1 << (VAR_0 - 1)) / VAR_4;

    VAR_9 = VAR_4 * VAR_8[8 * 0];
    VAR_10 = VAR_4 * VAR_8[8 * 0];
    VAR_11 = VAR_4 * VAR_8[8 * 0];
    VAR_12 = VAR_4 * VAR_8[8 * 0];

    if (VAR_8[8 * 2]) {
        VAR_9 += VAR_2 * VAR_8[8 * 2];
        VAR_10 += VAR_6 * VAR_8[8 * 2];
        VAR_11 -= VAR_6 * VAR_8[8 * 2];
        VAR_12 -= VAR_2 * VAR_8[8 * 2];
    }

    if (VAR_8[8 * 4]) {
        VAR_9 += VAR_4 * VAR_8[8 * 4];
        VAR_10 -= VAR_4 * VAR_8[8 * 4];
        VAR_11 -= VAR_4 * VAR_8[8 * 4];
        VAR_12 += VAR_4 * VAR_8[8 * 4];
    }

    if (VAR_8[8 * 6]) {
        VAR_9 += VAR_6 * VAR_8[8 * 6];
        VAR_10 -= VAR_2 * VAR_8[8 * 6];
        VAR_11 += VAR_2 * VAR_8[8 * 6];
        VAR_12 -= VAR_6 * VAR_8[8 * 6];
    }

    if (VAR_8[8 * 1]) {
        VAR_13 = VAR_1 * VAR_8[8 * 1];
        VAR_14 = VAR_3 * VAR_8[8 * 1];
        VAR_15 = VAR_5 * VAR_8[8 * 1];
        VAR_16 = VAR_7 * VAR_8[8 * 1];
    } else {
        VAR_13 = 0;
        VAR_14 = 0;
        VAR_15 = 0;
        VAR_16 = 0;
    }

    if (VAR_8[8 * 3]) {
        VAR_13 += VAR_3 * VAR_8[8 * 3];
        VAR_14 -= VAR_7 * VAR_8[8 * 3];
        VAR_15 -= VAR_1 * VAR_8[8 * 3];
        VAR_16 -= VAR_5 * VAR_8[8 * 3];
    }

    if (VAR_8[8 * 5]) {
        VAR_13 += VAR_5 * VAR_8[8 * 5];
        VAR_14 -= VAR_1 * VAR_8[8 * 5];
        VAR_15 += VAR_7 * VAR_8[8 * 5];
        VAR_16 += VAR_3 * VAR_8[8 * 5];
    }

    if (VAR_8[8 * 7]) {
        VAR_13 += VAR_7 * VAR_8[8 * 7];
        VAR_14 -= VAR_5 * VAR_8[8 * 7];
        VAR_15 += VAR_3 * VAR_8[8 * 7];
        VAR_16 -= VAR_1 * VAR_8[8 * 7];
    }

    VAR_8[8 * 0] = (VAR_9 + VAR_13) >> VAR_0;
    VAR_8[8 * 7] = (VAR_9 - VAR_13) >> VAR_0;
    VAR_8[8 * 1] = (VAR_10 + VAR_14) >> VAR_0;
    VAR_8[8 * 6] = (VAR_10 - VAR_14) >> VAR_0;
    VAR_8[8 * 2] = (VAR_11 + VAR_15) >> VAR_0;
    VAR_8[8 * 5] = (VAR_11 - VAR_15) >> VAR_0;
    VAR_8[8 * 3] = (VAR_12 + VAR_16) >> VAR_0;
    VAR_8[8 * 4] = (VAR_12 - VAR_16) >> VAR_0;
}
