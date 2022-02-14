
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (unsigned char*,int ,int) ;

void FUNC_3( uint8_t * VAR_0, int VAR_1, uint8_t *VAR_2, int VAR_3,
                            int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8 )
{
    int VAR_9, VAR_10;

    VAR_4 = VAR_4 * 10;
    VAR_6 = VAR_6 * 81;

    FUNC_2( VAR_0, 0, ( VAR_7 / 2 ) * VAR_1 );

    VAR_2 += VAR_3;
    VAR_0 += VAR_1;
    unsigned char *VAR_11 = VAR_2-VAR_3;
    unsigned char *VAR_12 = VAR_2+VAR_3;
    for( VAR_10 = 1; VAR_10 < VAR_7 - 1; ++VAR_10 )
    {
        for( VAR_9 = 1; VAR_9 < VAR_8-1; ++VAR_9 )
        {
            if( ( FUNC_1( VAR_11[VAR_9] - VAR_2[VAR_9] ) < 10 &&
                  FUNC_1( VAR_2[VAR_9] - VAR_12[VAR_9] ) < 10 &&
                  FUNC_1( VAR_11[VAR_9] - VAR_12[VAR_9] ) < 10 )
              ||
                ( FUNC_1( VAR_11[VAR_9-1] - VAR_2[VAR_9-1] ) < 10 &&
                  FUNC_1( VAR_2[VAR_9-1] - VAR_12[VAR_9-1] ) < 10 &&
                  FUNC_1( VAR_11[VAR_9-1] - VAR_12[VAR_9-1] ) < 10 &&
                  FUNC_1( VAR_11[VAR_9+1] - VAR_2[VAR_9+1] ) < 10 &&
                  FUNC_1( VAR_2[VAR_9+1] - VAR_12[VAR_9+1] ) < 10 &&
                  FUNC_1( VAR_11[VAR_9+1] - VAR_12[VAR_9+1] ) < 10) )
                continue;

            const int VAR_13 = VAR_11[VAR_9-1] + VAR_11[VAR_9] + VAR_11[VAR_9+1] +
                             VAR_2[VAR_9-1] + VAR_2[VAR_9]+ VAR_2[VAR_9+1] +
                            VAR_12[VAR_9-1] + VAR_12[VAR_9] + VAR_12[VAR_9+1];

            const int VAR_14 = VAR_11[VAR_9-1] * VAR_11[VAR_9-1] +
                              VAR_11[VAR_9] * VAR_11[VAR_9] +
                              VAR_11[VAR_9+1] * VAR_11[VAR_9+1] +
                               VAR_2[VAR_9-1] * VAR_2[VAR_9-1] +
                               VAR_2[VAR_9] * VAR_2[VAR_9] +
                               VAR_2[VAR_9+1] * VAR_2[VAR_9+1] +
                              VAR_12[VAR_9-1] * VAR_12[VAR_9-1] +
                              VAR_12[VAR_9] * VAR_12[VAR_9] +
                              VAR_12[VAR_9+1] * VAR_12[VAR_9+1];

            if( 9 * VAR_14-VAR_13 * VAR_13 < VAR_6 )
                continue;

            const int VAR_15 = VAR_2[VAR_9+1] - VAR_2[VAR_9-1];
            const int VAR_16 = FUNC_0( FUNC_0( FUNC_1( VAR_11[VAR_9] - VAR_12[VAR_9] ),
                                     FUNC_1( VAR_11[VAR_9] - VAR_2[VAR_9] ) ),
                                FUNC_1( VAR_2[VAR_9] - VAR_12[VAR_9] ) );
            if( VAR_15 * VAR_15 + VAR_16 * VAR_16 >= VAR_4 )
            {
                VAR_0[VAR_9] = 255;
                continue;
            }

            const int VAR_17 = VAR_2[VAR_9-1] - 2 * VAR_2[VAR_9] + VAR_2[VAR_9+1];
            const int VAR_18 = VAR_11[VAR_9] - 2 * VAR_2[VAR_9] + VAR_12[VAR_9];
            if( FUNC_1( VAR_17 ) + FUNC_1( VAR_18 ) >= VAR_5 )
                VAR_0[VAR_9] = 255;
        }
        VAR_0 += VAR_1;
        VAR_11 += VAR_3;
        VAR_2 += VAR_3;
        VAR_12 += VAR_3;
    }
}
