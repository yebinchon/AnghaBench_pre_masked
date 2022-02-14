
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int const) ;
 int const FUNC_2 (int const) ;
 int FUNC_3 (int*,int,int*,int,int,int) ;

void FUNC_4( uint8_t * VAR_0, int VAR_1, uint8_t * VAR_2, int VAR_3,
                       uint8_t * VAR_4, int VAR_5, int VAR_6, int VAR_7 )
{
    int VAR_8, VAR_9, VAR_10;

    FUNC_3( VAR_4, VAR_5, VAR_2, VAR_3, VAR_7, VAR_6 );

    VAR_0 += VAR_1;
    VAR_2 += VAR_3;
    VAR_4 += VAR_5;
    unsigned char *VAR_11 = VAR_2 - VAR_3;
    unsigned char *VAR_12 = VAR_2 + VAR_3;

    for( VAR_9 = 1; VAR_9 < VAR_6 - 1; ++VAR_9 )
    {
        for( VAR_8 = 1; VAR_8 < VAR_7 - 1; ++VAR_8 )
        {
            if( VAR_2[VAR_8] == 0xFF || VAR_0[VAR_8] != 0xFF )
                continue;
            const int VAR_13 = ( VAR_2[VAR_8] - 128 ) >> 2;
            const int VAR_14 = FUNC_0( FUNC_2( VAR_13 ) * 2, 12 );
            int VAR_15 = 0, VAR_16 = 0;
            if( VAR_13 < 0 )
            {
                const int VAR_17 = FUNC_0( -VAR_8, VAR_13 );
                for( VAR_10 = VAR_17; VAR_10 <= 0; ++VAR_10 )
                {
                    if( ( FUNC_2( VAR_11[VAR_8+VAR_10] - VAR_2[VAR_8] ) > VAR_14 && VAR_11[VAR_8+VAR_10] != 0xFF ) ||
                        ( VAR_2[VAR_8+VAR_10] == 0xFF && VAR_11[VAR_8+VAR_10] == 0xFF ) ||
                        ( FUNC_2( VAR_2[VAR_8+VAR_10] - VAR_2[VAR_8] ) > VAR_14 && VAR_2[VAR_8+VAR_10] != 0xFF ) )
                    {
                        VAR_15 = 1;
                        break;
                    }
                }
            }
            else
            {
                const int VAR_18 = FUNC_1( VAR_7 - VAR_8 - 1, VAR_13 );
                for( VAR_10 = 0; VAR_10 <= VAR_18; ++VAR_10 )
                {
                    if( ( FUNC_2( VAR_11[VAR_8+VAR_10] - VAR_2[VAR_8] ) > VAR_14 && VAR_11[VAR_8+VAR_10] != 0xFF ) ||
                        ( VAR_2[VAR_8+VAR_10] == 0xFF && VAR_11[VAR_8+VAR_10] == 0xFF ) ||
                        ( FUNC_2( VAR_2[VAR_8+VAR_10] - VAR_2[VAR_8] ) > VAR_14 && VAR_2[VAR_8+VAR_10] != 0xFF ) )
                    {
                        VAR_15 = 1;
                        break;
                    }
                }
            }
            if( VAR_15 )
            {
                if( VAR_13 < 0 )
                {
                    const int VAR_19 = FUNC_1( VAR_7 - VAR_8 - 1, FUNC_2( VAR_13 ) );
                    for( VAR_10 = 0; VAR_10 <= VAR_19; ++VAR_10 )
                    {
                        if( ( FUNC_2( VAR_12[VAR_8+VAR_10] - VAR_2[VAR_8] ) > VAR_14 && VAR_12[VAR_8+VAR_10] != 0xFF ) ||
                            ( VAR_12[VAR_8+VAR_10] == 0xFF && VAR_2[VAR_8+VAR_10] == 0xFF ) ||
                            ( FUNC_2( VAR_2[VAR_8+VAR_10] - VAR_2[VAR_8] ) > VAR_14 && VAR_2[VAR_8+VAR_10] != 0xFF ) )
                        {
                            VAR_16 = 1;
                            break;
                        }
                    }
                }
                else
                {
                    const int VAR_20 = FUNC_0( -VAR_8, -VAR_13 );
                    for( VAR_10 = VAR_20; VAR_10 <= 0; ++VAR_10 )
                    {
                        if( ( FUNC_2( VAR_12[VAR_8+VAR_10] - VAR_2[VAR_8] ) > VAR_14 && VAR_12[VAR_8+VAR_10] != 0xFF ) ||
                            ( VAR_12[VAR_8+VAR_10] == 0xFF && VAR_2[VAR_8+VAR_10] == 0xFF ) ||
                            ( FUNC_2( VAR_2[VAR_8+VAR_10] - VAR_2[VAR_8] ) > VAR_14 && VAR_2[VAR_8+VAR_10] != 0xFF ) )
                        {
                            VAR_16 = 1;
                            break;
                        }
                    }
                }
                if( VAR_16 )
                    VAR_4[VAR_8] = 255;
            }
        }
        VAR_0 += VAR_1;
        VAR_11 += VAR_3;
        VAR_2 += VAR_3;
        VAR_12 += VAR_3;
        VAR_4 += VAR_5;
    }
}
