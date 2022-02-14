
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int const FUNC_0 (int const) ;
 int FUNC_1 (int*,int,int*,int,int,int) ;
 int* VAR_0 ;
 int FUNC_2 (int*,int) ;

void FUNC_3( uint8_t * VAR_1, int VAR_2, uint8_t * VAR_3, int VAR_4,
                           uint8_t * VAR_5, int VAR_6, int VAR_7, int VAR_8 )
{
    int VAR_9, VAR_10, VAR_11;

    FUNC_1( VAR_5, VAR_6, VAR_3, VAR_4, VAR_8, VAR_7 );

    VAR_3 += VAR_4;
    unsigned char *VAR_12 = VAR_3 - VAR_4;
    unsigned char *VAR_13 = VAR_3 + VAR_4;
    VAR_5 += VAR_6;
    VAR_1 += VAR_2;
    for( VAR_10 = 1; VAR_10 < VAR_7 - 1; ++VAR_10 )
    {
        for( VAR_9 = 1; VAR_9 < VAR_8 - 1; ++VAR_9 )
        {
            if( VAR_1[VAR_9] != 0xFF ) continue;
            int VAR_14 = 0, VAR_15[9];
            if( VAR_12[VAR_9-1] != 0xFF ) VAR_15[VAR_14++] = VAR_12[VAR_9-1];
            if( VAR_12[VAR_9] != 0xFF ) VAR_15[VAR_14++] = VAR_12[VAR_9];
            if( VAR_12[VAR_9+1] != 0xFF ) VAR_15[VAR_14++] = VAR_12[VAR_9+1];
            if( VAR_3[VAR_9-1] != 0xFF ) VAR_15[VAR_14++] = VAR_3[VAR_9-1];
            if( VAR_3[VAR_9] != 0xFF ) VAR_15[VAR_14++] = VAR_3[VAR_9];
            if( VAR_3[VAR_9+1] != 0xFF ) VAR_15[VAR_14++] = VAR_3[VAR_9+1];
            if( VAR_13[VAR_9-1] != 0xFF ) VAR_15[VAR_14++] = VAR_13[VAR_9-1];
            if( VAR_13[VAR_9] != 0xFF ) VAR_15[VAR_14++] = VAR_13[VAR_9];
            if( VAR_13[VAR_9+1] != 0xFF ) VAR_15[VAR_14++] = VAR_13[VAR_9+1];
            if( VAR_14 < 4 )
            {
                VAR_5[VAR_9] = 255;
                continue;
            }
            FUNC_2( VAR_15, VAR_14 );
            const int VAR_16 = ( VAR_14 & 1 ) ?
                VAR_15[VAR_14>>1] : ( VAR_15[(VAR_14-1)>>1] + VAR_15[VAR_14>>1] + 1 ) >> 1;
            int VAR_17 = 0, VAR_18 = 0;
            const int VAR_19 = VAR_0[FUNC_0(VAR_16-128)>>2];
            for( VAR_11 = 0; VAR_11 < VAR_14; ++VAR_11 )
            {
                if( FUNC_0( VAR_15[VAR_11] - VAR_16 ) <= VAR_19 )
                {
                    ++VAR_18;
                    VAR_17 += VAR_15[VAR_11];
                }
            }
            if( VAR_18 < 4 || ( VAR_18 < 5 && VAR_3[VAR_9] == 0xFF ) )
            {
                VAR_5[VAR_9] = 255;
                continue;
            }
            VAR_5[VAR_9] = (int)( ( (float)( VAR_17 + VAR_16 ) / (float)( VAR_18 + 1 ) ) + 0.5f );
        }
        VAR_12 += VAR_4;
        VAR_3 += VAR_4;
        VAR_13 += VAR_4;
        VAR_5 += VAR_6;
        VAR_1 += VAR_2;
    }
}
