
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int,int*,int,int,int) ;

void FUNC_1( uint8_t *VAR_0, int VAR_1, uint8_t *VAR_2, int VAR_3,
                             int VAR_4, int VAR_5, int VAR_6 )
{
    int VAR_7, VAR_8;

    FUNC_0( VAR_2, VAR_3, VAR_0, VAR_1, VAR_6, VAR_5 );

    VAR_0 += VAR_1;
    unsigned char *VAR_9 = VAR_0 - VAR_1;
    unsigned char *VAR_10 = VAR_0 + VAR_1;
    VAR_2 += VAR_3;
    for( VAR_8 = 1; VAR_8 < VAR_5 - 1; ++VAR_8 )
    {
        for( VAR_7 = 1; VAR_7 < VAR_6 - 1; ++VAR_7 )
        {
            if( VAR_0[VAR_7] != 0 )
                continue;

            int VAR_11 = 0;
            if( VAR_9[VAR_7-1] == 0xFF ) ++VAR_11;
            if( VAR_9[VAR_7] == 0xFF ) ++VAR_11;
            if( VAR_9[VAR_7+1] == 0xFF ) ++VAR_11;
            if( VAR_0[VAR_7-1] == 0xFF ) ++VAR_11;
            if( VAR_0[VAR_7+1] == 0xFF ) ++VAR_11;
            if( VAR_10[VAR_7-1] == 0xFF ) ++VAR_11;
            if( VAR_10[VAR_7] == 0xFF ) ++VAR_11;
            if( VAR_10[VAR_7+1] == 0xFF ) ++VAR_11;

            if( VAR_11 >= VAR_4 )
                VAR_2[VAR_7] = 0xFF;
        }
        VAR_9 += VAR_1;
        VAR_0 += VAR_1;
        VAR_10 += VAR_1;
        VAR_2 += VAR_3;
    }
}
