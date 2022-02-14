
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;
typedef int GetBitContext ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int* FUNC_0 (int*,int*,int) ;
 unsigned int** VAR_6 ;
 int FUNC_1 (int *) ;

void FUNC_2(GetBitContext *VAR_7, unsigned int VAR_8, int32_t *VAR_9,
                    int VAR_10, unsigned int VAR_11,
                    unsigned int *VAR_12, unsigned int *VAR_13, unsigned int *VAR_14,
                    uint8_t *VAR_15, int *VAR_16)
{
    unsigned int VAR_17;
    uint8_t *VAR_18 = FUNC_0(VAR_15, VAR_16, VAR_10);


    unsigned int VAR_19 = *VAR_12;
    unsigned int VAR_20 = *VAR_13;
    unsigned int VAR_21 = *VAR_14;

    VAR_18 += VAR_11 * VAR_4;


    for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
        unsigned int VAR_22 = VAR_19 - VAR_20 + 1;
        unsigned int VAR_23 = (((VAR_21 - VAR_20 + 1) << VAR_1) - 1) / VAR_22;
        unsigned int VAR_24 = VAR_18[VAR_23 >> (VAR_1 - VAR_3)] << VAR_10;

        while (VAR_6[VAR_11][VAR_24] > VAR_23)
            VAR_24 += 1 << VAR_10;

        VAR_24 = (VAR_24 >> VAR_10) - 1;

        VAR_19 = VAR_20 + ((VAR_22 * VAR_6[VAR_11][(VAR_24) << VAR_10] - (1 << VAR_1)) >> VAR_1);
        VAR_20 = VAR_20 + ((VAR_22 * VAR_6[VAR_11][(VAR_24 + 1) << VAR_10]) >> VAR_1);

        while (1) {
            if (VAR_19 >= VAR_2) {
                if (VAR_20 >= VAR_2) {
                    VAR_21 -= VAR_2;
                    VAR_20 -= VAR_2;
                    VAR_19 -= VAR_2;
                } else if (VAR_20 >= VAR_0 && VAR_19 < VAR_5) {
                    VAR_21 -= VAR_0;
                    VAR_20 -= VAR_0;
                    VAR_19 -= VAR_0;
                } else
                    break;
            }

            VAR_20 *= 2;
            VAR_19 = 2 * VAR_19 + 1;
            VAR_21 = 2 * VAR_21 + FUNC_1(VAR_7);
        }

        *VAR_9++ = VAR_24;
    }


    *VAR_12 = VAR_19;
    *VAR_13 = VAR_20;
    *VAR_14 = VAR_21;
}
