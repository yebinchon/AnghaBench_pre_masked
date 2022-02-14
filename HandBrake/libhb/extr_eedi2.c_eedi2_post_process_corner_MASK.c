
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



void FUNC_0( int *VAR_0, int *VAR_1, int *VAR_2, const int VAR_3, uint8_t * VAR_4, int VAR_5, uint8_t * VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10 )
{
    VAR_4 += ( 8 - VAR_10 ) * VAR_5;
    VAR_6 += ( 8 - VAR_10 ) * VAR_7;
    unsigned char * VAR_11 = VAR_6 - VAR_7;
    unsigned char * VAR_12 = VAR_6 + VAR_7;
    VAR_0 += VAR_3 * 3;
    VAR_1 += VAR_3 * 3;
    VAR_2 += VAR_3 * 3;
    int *VAR_13 = VAR_0 + VAR_3;
    int *VAR_14 = VAR_1 + VAR_3;
    int *VAR_15 = VAR_2 + VAR_3;
    int VAR_16, VAR_17;

    for( VAR_17 = 8 - VAR_10; VAR_17 < VAR_8 - 7; VAR_17 += 2 )
    {
        for( VAR_16 = 4; VAR_16 < VAR_9 - 4; ++VAR_16 )
        {
            if( VAR_4[VAR_16] == 255 || VAR_4[VAR_16] == 128 ) continue;
            const int VAR_18 = (int)( VAR_0[VAR_16] * VAR_1[VAR_16] - VAR_2[VAR_16] * VAR_2[VAR_16] - 0.09 *
                                  ( VAR_0[VAR_16] + VAR_1[VAR_16] ) * ( VAR_0[VAR_16] + VAR_1[VAR_16] ) );
            const int VAR_19 = (int)( VAR_13[VAR_16] * VAR_14[VAR_16] - VAR_15[VAR_16]* VAR_15[VAR_16] - 0.09 *
                                  ( VAR_13[VAR_16] + VAR_14[VAR_16] ) * ( VAR_13[VAR_16] + VAR_14[VAR_16] ) );
            if (VAR_18 > 775 || VAR_19 > 775)
                VAR_6[VAR_16] = ( VAR_11[VAR_16] + VAR_12[VAR_16] + 1 ) >> 1;
        }
        VAR_4 += VAR_5 * 2;
        VAR_11 += VAR_7 * 2;
        VAR_6 += VAR_7 * 2;
        VAR_12 += VAR_7 * 2;
        VAR_0 += VAR_3;
        VAR_13 += VAR_3;
        VAR_1 += VAR_3;
        VAR_14 += VAR_3;
        VAR_2 += VAR_3;
        VAR_15 += VAR_3;
    }
}
