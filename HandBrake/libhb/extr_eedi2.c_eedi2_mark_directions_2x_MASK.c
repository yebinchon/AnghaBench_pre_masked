
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int const FUNC_0 (int const) ;
 int* VAR_0 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int,int) ;

void FUNC_3( uint8_t * VAR_1, int VAR_2, uint8_t * VAR_3, int VAR_4,
                               uint8_t * VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9 )
{
    int VAR_10, VAR_11, VAR_12;
    FUNC_2( VAR_5, 255, VAR_6 * VAR_8 );
    VAR_5 += VAR_6 * ( 2 - VAR_7 );
    VAR_3 += VAR_4 * ( 1 - VAR_7 );
    VAR_1 += VAR_2 * ( 1 - VAR_7 );
    unsigned char *VAR_13 = VAR_3 + VAR_4 * 2;
    unsigned char *VAR_14 = VAR_1 + VAR_2 * 2;
    for( VAR_11 = 2 - VAR_7; VAR_11 < VAR_8 - 1; VAR_11 += 2 )
    {
        for( VAR_10 = 1; VAR_10 < VAR_9 - 1; ++VAR_10 )
        {
            if( VAR_1[VAR_10] != 0xFF && VAR_14[VAR_10] != 0xFF ) continue;
            int VAR_15 = 0, VAR_16[6];
            if( VAR_3[VAR_10-1] != 0xFF ) VAR_16[VAR_15++] = VAR_3[VAR_10-1];
            if( VAR_3[VAR_10] != 0xFF ) VAR_16[VAR_15++] = VAR_3[VAR_10];
            if( VAR_3[VAR_10+1] != 0xFF ) VAR_16[VAR_15++] = VAR_3[VAR_10+1];
            if( VAR_13[VAR_10-1] != 0xFF ) VAR_16[VAR_15++] = VAR_13[VAR_10-1];
            if( VAR_13[VAR_10] != 0xFF ) VAR_16[VAR_15++] = VAR_13[VAR_10];
            if( VAR_13[VAR_10+1] != 0xFF ) VAR_16[VAR_15++] = VAR_13[VAR_10+1];
            if( VAR_15 < 3 ) continue;
            else
            {
                FUNC_1( VAR_16, VAR_15 );
                const int VAR_17 = ( VAR_15 & 1 ) ? VAR_16[VAR_15>>1] : ( VAR_16[(VAR_15-1)>>1] + VAR_16[VAR_15>>1]+1) >> 1;
                const int VAR_18 = VAR_0[FUNC_0(VAR_17-128)>>2];
                int VAR_19 = 0;
                if( FUNC_0( VAR_3[VAR_10-1] - VAR_13[VAR_10-1] ) <= VAR_18 ||
                    VAR_3[VAR_10-1] == 0xFF || VAR_13[VAR_10-1] == 0xFF )
                        ++VAR_19;
                if( FUNC_0( VAR_3[VAR_10] - VAR_13[VAR_10] ) <= VAR_18 ||
                    VAR_3[VAR_10] == 0xFF || VAR_13[VAR_10] == 0xFF )
                        ++VAR_19;
                if( FUNC_0( VAR_3[VAR_10+1] - VAR_13[VAR_10-1] ) <= VAR_18 ||
                    VAR_3[VAR_10+1] == 0xFF || VAR_13[VAR_10+1] == 0xFF)
                        ++VAR_19;
                if( VAR_19 < 2 ) continue;
                int VAR_20 = 0, VAR_21 = 0;
                for( VAR_12 = 0; VAR_12 < VAR_15; ++VAR_12 )
                {
                    if( FUNC_0( VAR_16[VAR_12] - VAR_17 ) <= VAR_18 )
                    {
                        ++VAR_20;
                        VAR_21 += VAR_16[VAR_12];
                    }
                }
                if( VAR_20 < VAR_15 - 2 || VAR_20 < 2 ) continue;
                VAR_5[VAR_10] = (int)( ( (float)( VAR_21 + VAR_17 ) / (float)( VAR_20 + 1 ) ) + 0.5f );
            }
        }
        VAR_1 += VAR_2 * 2;
        VAR_14 += VAR_2 * 2;
        VAR_5 += VAR_6 * 2;
        VAR_3 += VAR_4 * 2;
        VAR_13 += VAR_4 * 2;
    }
}
