
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int const FUNC_0 (int) ;
 int* VAR_0 ;

void FUNC_1( uint8_t * VAR_1, int VAR_2, uint8_t * VAR_3, int VAR_4,
                         uint8_t * VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9 )
{
    int VAR_10, VAR_11;

    VAR_1 += ( 2 - VAR_7 ) * VAR_2;
    VAR_3 += ( 2 - VAR_7 ) * VAR_4;
    VAR_5 += ( 2 - VAR_7 ) * VAR_6;
    unsigned char *VAR_12 = VAR_5 - VAR_6;
    unsigned char *VAR_13 = VAR_5 + VAR_6;
    for( VAR_11 = 2 - VAR_7; VAR_11 < VAR_8 - 1; VAR_11 += 2 )
    {
        for( VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10 )
        {
            const int VAR_14 = VAR_0[FUNC_0(VAR_1[VAR_10]-128)>>2];
            if( FUNC_0( VAR_1[VAR_10] - VAR_3[VAR_10] ) > VAR_14 && VAR_3[VAR_10] != 255 && VAR_3[VAR_10] != 128 )
                VAR_5[VAR_10] = ( VAR_12[VAR_10] + VAR_13[VAR_10] + 1 ) >> 1;
        }
        VAR_1 += VAR_2 * 2;
        VAR_3 += VAR_4 * 2;
        VAR_12 += VAR_6 * 2;
        VAR_5 += VAR_6 * 2;
        VAR_13 += VAR_6 * 2;
    }
}
