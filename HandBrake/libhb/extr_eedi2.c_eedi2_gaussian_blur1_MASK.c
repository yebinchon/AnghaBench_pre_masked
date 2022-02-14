
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



void FUNC_0( uint8_t * VAR_0, int VAR_1, uint8_t * VAR_2, int VAR_3, uint8_t * VAR_4, int VAR_5, int VAR_6, int VAR_7 )
{
    uint8_t * VAR_8 = VAR_0;
    uint8_t * VAR_9 = VAR_2;
    int VAR_10, VAR_11;

    for( VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11 )
    {
        VAR_9[0] = ( VAR_8[3] * 582 + VAR_8[2] * 7078 + VAR_8[1] * 31724 +
                    VAR_8[0] * 26152 + 32768 ) >> 16;
        VAR_9[1] = ( VAR_8[4] * 582 + VAR_8[3] * 7078 +
                    ( VAR_8[0] + VAR_8[2] ) * 15862 +
                    VAR_8[1] * 26152 + 32768 ) >> 16;
        VAR_9[2] = ( VAR_8[5] * 582 + ( VAR_8[0] + VAR_8[4] ) * 3539 +
                    ( VAR_8[1] + VAR_8[3] ) * 15862 +
                    VAR_8[2]*26152 + 32768 ) >> 16;
        for( VAR_10 = 3; VAR_10 < VAR_7 - 3; ++VAR_10 )
        {
            VAR_9[VAR_10] = ( ( VAR_8[VAR_10-3] + VAR_8[VAR_10+3] ) * 291 +
                        ( VAR_8[VAR_10-2] + VAR_8[VAR_10+2] ) * 3539 +
                        ( VAR_8[VAR_10-1] + VAR_8[VAR_10+1] ) * 15862 +
                        VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
        }
        VAR_9[VAR_10] = ( VAR_8[VAR_10-3] * 582 + ( VAR_8[VAR_10-2] + VAR_8[VAR_10+2] ) * 3539 +
                    ( VAR_8[VAR_10-1] + VAR_8[VAR_10+1] ) * 15862 +
                    VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
        ++VAR_10;
        VAR_9[VAR_10] = ( VAR_8[VAR_10-3] * 582 + VAR_8[VAR_10-2] * 7078 +
                    ( VAR_8[VAR_10-1] + VAR_8[VAR_10+1] ) * 15862 +
                    VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
        ++VAR_10;
        VAR_9[VAR_10] = ( VAR_8[VAR_10-3] * 582 + VAR_8[VAR_10-2] * 7078 +
                    VAR_8[VAR_10-1] * 31724 + VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
        VAR_8 += VAR_1;
        VAR_9 += VAR_3;
    }
    VAR_8 = VAR_2;
    VAR_9 = VAR_4;
    unsigned char *VAR_12 = VAR_8 - VAR_3 * 3;
    unsigned char *VAR_13 = VAR_8 - VAR_3 * 2;
    unsigned char *VAR_14 = VAR_8 - VAR_3;
    unsigned char *VAR_15 = VAR_8 + VAR_3;
    unsigned char *VAR_16 = VAR_8 + VAR_3 * 2;
    unsigned char *VAR_17 = VAR_8 + VAR_3 * 3;
    for( VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10 )
    {
        VAR_9[VAR_10] = ( VAR_17[VAR_10] * 582 + VAR_16[VAR_10] * 7078 + VAR_15[VAR_10] * 31724 +
                     VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
    }
    VAR_12 += VAR_3;
    VAR_13 += VAR_3;
    VAR_14 += VAR_3;
    VAR_8 += VAR_3;
    VAR_15 += VAR_3;
    VAR_16 += VAR_3;
    VAR_17 += VAR_3;
    VAR_9 += VAR_5;
    for( VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10 )
    {
        VAR_9[VAR_10] = ( VAR_17[VAR_10] * 582 + VAR_16[VAR_10] * 7078 +
                    ( VAR_14[VAR_10] + VAR_15[VAR_10] ) * 15862 +
                    VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
    }
    VAR_12 += VAR_3;
    VAR_13 += VAR_3;
    VAR_14 += VAR_3;
    VAR_8 += VAR_3;
    VAR_15 += VAR_3;
    VAR_16 += VAR_3;
    VAR_17 += VAR_3;
    VAR_9 += VAR_5;
    for( VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10 )
    {
        VAR_9[VAR_10] = ( VAR_17[VAR_10] * 582 + ( VAR_13[VAR_10] + VAR_16[VAR_10] ) * 3539 +
                    ( VAR_14[VAR_10] + VAR_15[VAR_10] ) * 15862 +
                    VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
    }
    VAR_12 += VAR_1;
    VAR_13 += VAR_1;
    VAR_14 += VAR_1;
    VAR_8 += VAR_1;
    VAR_15 += VAR_1;
    VAR_16 += VAR_1;
    VAR_17 += VAR_1;
    VAR_9 += VAR_5;
    for( VAR_11 = 3; VAR_11 < VAR_6 - 3; ++VAR_11 )
    {
        for( VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10 )
        {
            VAR_9[VAR_10] = ( ( VAR_12[VAR_10] + VAR_17[VAR_10] ) * 291 +
                        ( VAR_13[VAR_10] + VAR_16[VAR_10] ) * 3539 +
                        ( VAR_14[VAR_10] + VAR_15[VAR_10] ) * 15862 +
                        VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
        }
        VAR_12 += VAR_3;
        VAR_13 += VAR_3;
        VAR_14 += VAR_3;
        VAR_8 += VAR_3;
        VAR_15 += VAR_3;
        VAR_16 += VAR_3;
        VAR_17 += VAR_3;
        VAR_9 += VAR_5;
    }
    for( VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10 )
    {
        VAR_9[VAR_10] = ( VAR_12[VAR_10] * 582 + ( VAR_13[VAR_10] + VAR_16[VAR_10] ) *3539 +
                    ( VAR_14[VAR_10] + VAR_15[VAR_10] ) * 15862 +
                    VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
    }
    VAR_12 += VAR_3;
    VAR_13 += VAR_3;
    VAR_14 += VAR_3;
    VAR_8 += VAR_3;
    VAR_15 += VAR_3;
    VAR_16 += VAR_3;
    VAR_17 += VAR_3;
    VAR_9 += VAR_5;
    for( VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10 )
    {
        VAR_9[VAR_10] = ( VAR_12[VAR_10] * 582 + VAR_13[VAR_10] * 7078 +
                    ( VAR_14[VAR_10] + VAR_15[VAR_10] ) * 15862 +
                     VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
    }
    VAR_12 += VAR_3;
    VAR_13 += VAR_3;
    VAR_14 += VAR_3;
    VAR_8 += VAR_3;
    VAR_15 += VAR_3;
    VAR_16 += VAR_3;
    VAR_17 += VAR_3;
    VAR_9 += VAR_5;
    for( VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10 )
    {
        VAR_9[VAR_10] = ( VAR_12[VAR_10] * 582 + VAR_13[VAR_10] * 7078 +
                    VAR_14[VAR_10] * 31724 + VAR_8[VAR_10] * 26152 + 32768 ) >> 16;
    }
}
