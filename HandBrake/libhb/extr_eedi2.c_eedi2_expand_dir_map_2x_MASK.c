
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
                              uint8_t * VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9 )
{
    int VAR_10, VAR_11, VAR_12;

    FUNC_1( VAR_5, VAR_6, VAR_3, VAR_4, VAR_9, VAR_8 );

    VAR_3 += VAR_4 * ( 2 - VAR_7 );
    unsigned char *VAR_13 = VAR_3 - VAR_4 * 2;
    unsigned char *VAR_14 = VAR_3 + VAR_4 * 2;
    VAR_1 += VAR_2 * ( 1 - VAR_7 );
    unsigned char *VAR_15 = VAR_1 + VAR_2 * 2;
    VAR_5 += VAR_6 * ( 2 - VAR_7 );
    for( VAR_11 = 2 - VAR_7; VAR_11 < VAR_8 - 1; VAR_11 += 2)
    {
        for( VAR_10 = 1; VAR_10 < VAR_9 - 1; ++VAR_10 )
        {
            if( VAR_3[VAR_10] != 0xFF || ( VAR_1[VAR_10] != 0xFF && VAR_15[VAR_10] != 0xFF ) ) continue;
            int VAR_16 = 0, VAR_17[9];
            if( VAR_11 > 1 )
            {
                if( VAR_13[VAR_10-1] != 0xFF ) VAR_17[VAR_16++] = VAR_13[VAR_10-1];
                if( VAR_13[VAR_10] != 0xFF ) VAR_17[VAR_16++] = VAR_13[VAR_10];
                if( VAR_13[VAR_10+1] != 0xFF ) VAR_17[VAR_16++] = VAR_13[VAR_10+1];
            }
            if( VAR_3[VAR_10-1] != 0xFF ) VAR_17[VAR_16++] = VAR_3[VAR_10-1];
            if( VAR_3[VAR_10+1] != 0xFF ) VAR_17[VAR_16++] = VAR_3[VAR_10+1];
            if( VAR_11 < VAR_8 - 2 )
            {
                if( VAR_14[VAR_10-1] != 0xFF) VAR_17[VAR_16++] = VAR_14[VAR_10-1];
                if( VAR_14[VAR_10] != 0xFF) VAR_17[VAR_16++] = VAR_14[VAR_10];
                if( VAR_14[VAR_10+1] != 0xFF) VAR_17[VAR_16++] = VAR_14[VAR_10+1];
            }
            if( VAR_16 < 5 ) continue;
            FUNC_2( VAR_17, VAR_16 );
            const int VAR_18 = ( VAR_16 & 1 ) ? VAR_17[VAR_16>>1] : ( VAR_17[(VAR_16-1)>>1] + VAR_17[VAR_16>>1] + 1 ) >> 1;
            int VAR_19 = 0, VAR_20 = 0;
            const int VAR_21 = VAR_0[FUNC_0(VAR_18-128)>>2];
            for( VAR_12 = 0; VAR_12 < VAR_16; ++VAR_12 )
            {
                if( FUNC_0( VAR_17[VAR_12] - VAR_18 ) <= VAR_21 )
                {
                    ++VAR_20;
                    VAR_19 += VAR_17[VAR_12];
                }
            }
            if( VAR_20 < 5 ) continue;
            VAR_5[VAR_10] = (int)( ( (float)( VAR_19 + VAR_18 ) / (float)( VAR_20 + 1 ) ) + 0.5f );
        }
        VAR_1 += VAR_2 * 2;
        VAR_15 += VAR_2 * 2;
        VAR_13 += VAR_4 * 2;
        VAR_3 += VAR_4 * 2;
        VAR_14 += VAR_4 * 2;
        VAR_5 += VAR_6 * 2;
    }
}
