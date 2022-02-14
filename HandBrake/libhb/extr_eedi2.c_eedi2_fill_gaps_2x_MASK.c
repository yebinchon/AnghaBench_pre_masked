
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int,int*,int,int,int) ;

void FUNC_4( uint8_t *VAR_0, int VAR_1, uint8_t * VAR_2, int VAR_3,
                         uint8_t * VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8 )
{
    int VAR_9, VAR_10, VAR_11;

    FUNC_3( VAR_4, VAR_5, VAR_2, VAR_3, VAR_8, VAR_7 );

    VAR_2 += VAR_3 * ( 2 - VAR_6 );
    unsigned char *VAR_12 = VAR_2 - VAR_3 * 2;
    unsigned char *VAR_13 = VAR_2 + VAR_3 * 2;
    VAR_0 += VAR_1 * ( 1 - VAR_6 );
    unsigned char *VAR_14 = VAR_0 - VAR_1 * 2;
    unsigned char *VAR_15 = VAR_0 + VAR_1 * 2;
    unsigned char *VAR_16 = VAR_15 + VAR_1 * 2;
    VAR_4 += VAR_5 * ( 2 - VAR_6 );
    for( VAR_10 = 2 - VAR_6; VAR_10 < VAR_7 - 1; VAR_10 += 2 )
    {
        for( VAR_9 = 1; VAR_9 < VAR_8 - 1; ++VAR_9 )
        {
            if( VAR_2[VAR_9] != 0xFF ||
                ( VAR_0[VAR_9] != 0xFF && VAR_15[VAR_9] != 0xFF ) ) continue;
            int VAR_17 = VAR_9 - 1, VAR_18 = 500, VAR_19 = -500;
            while( VAR_17 )
            {
                if( VAR_2[VAR_17] != 0xFF )
                {
                    VAR_18 = VAR_2[VAR_17];
                    break;
                }
                if( VAR_0[VAR_17] != 0xFF && VAR_15[VAR_17] != 0xFF ) break;
                --VAR_17;
            }
            int VAR_20 = VAR_9 + 1;
            while( VAR_20 < VAR_8 )
            {
                if( VAR_2[VAR_20] != 0xFF )
                {
                    VAR_19 = VAR_2[VAR_20];
                    break;
                }
                if( VAR_0[VAR_20] != 0xFF && VAR_15[VAR_20] != 0xFF ) break;
                ++VAR_20;
            }
            int VAR_21 = 1, VAR_22 = 1;
            int VAR_23 = 500, VAR_24 = -20;
            int VAR_25 = 500, VAR_26 = -20;
            for( VAR_11 = VAR_17; VAR_11 <= VAR_20; ++VAR_11 )
            {
                if( VAR_21 )
                {
                    if( VAR_10 <= 2 || VAR_12[VAR_11] == 0xFF || ( VAR_14[VAR_11] != 0xFF && VAR_0[VAR_11] != 0xFF ) )
                    {
                        VAR_21 = 0;
                        VAR_23 = VAR_24 = 20;
                    }
                    else
                    {
                        if( VAR_12[VAR_11] < VAR_23 ) VAR_23 = VAR_12[VAR_11];
                        if( VAR_12[VAR_11] > VAR_24 ) VAR_24 = VAR_12[VAR_11];
                    }
                }
                if( VAR_22 )
                {
                    if( VAR_10 >= VAR_7 - 3 || VAR_13[VAR_11] == 0xFF || ( VAR_15[VAR_11] != 0xFF && VAR_16[VAR_11] != 0xFF ) )
                    {
                        VAR_22 = 0;
                        VAR_25 = VAR_26 = 20;
                    }
                    else
                    {
                        if( VAR_13[VAR_11] < VAR_25 ) VAR_25 = VAR_13[VAR_11];
                        if( VAR_13[VAR_11] > VAR_26 ) VAR_26 = VAR_13[VAR_11];
                    }
                }
            }
            if( VAR_24 == -20 ) VAR_24 = VAR_23 = 20;
            if( VAR_26 == -20 ) VAR_26 = VAR_25 = 20;
            int VAR_27 = FUNC_0(
                            FUNC_0( FUNC_0( FUNC_2( VAR_19 - 128 ), FUNC_2( VAR_18 - 128 ) ) >> 2, 8 ),
                            FUNC_0( FUNC_2( VAR_23 - VAR_24 ), FUNC_2( VAR_25 - VAR_26 ) ) );
            const int VAR_28 = FUNC_1(
                                FUNC_0( FUNC_2( VAR_19 - 128 ), FUNC_2( VAR_18 - 128 ) ) >> 2,
                                6 );
            if( FUNC_2( VAR_19 - VAR_18 ) <= VAR_27 && ( VAR_20 - VAR_17 - 1 <= VAR_28 || VAR_21 || VAR_22 ) )
            {
                double VAR_29 = (double)( VAR_19 - VAR_18 ) / (double)( VAR_20 - VAR_17 );
                for( VAR_11 = 0; VAR_11 < VAR_20 - VAR_17 - 1; ++VAR_11 )
                    VAR_4[VAR_17+VAR_11+1] = VAR_18 + (int)( VAR_11 * VAR_29 + 0.5 );
            }
        }
        VAR_14 += VAR_1 * 2;
        VAR_0 += VAR_1 * 2;
        VAR_15 += VAR_1 * 2;
        VAR_16 += VAR_1 * 2;
        VAR_12 += VAR_3 * 2;
        VAR_2 += VAR_3 * 2;
        VAR_13 += VAR_3 * 2;
        VAR_4 += VAR_5 * 2;
    }
}
