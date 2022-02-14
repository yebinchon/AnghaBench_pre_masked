
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int pixel ;



__attribute__((used)) static void FUNC_0( const pixel *VAR_0, intptr_t VAR_1,
                             const pixel *VAR_2, intptr_t VAR_3,
                             int VAR_4[2][4] )
{
    int VAR_5,VAR_6,VAR_7;

    for( VAR_7 = 0; VAR_7 < 2; VAR_7++ )
    {
        uint32_t VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
        for( VAR_6 = 0; VAR_6 < 4; VAR_6++ )
            for( VAR_5 = 0; VAR_5 < 4; VAR_5++ )
            {
                int VAR_12 = VAR_0[VAR_5+VAR_6*VAR_1];
                int VAR_13 = VAR_2[VAR_5+VAR_6*VAR_3];
                VAR_8 += VAR_12;
                VAR_9 += VAR_13;
                VAR_10 += VAR_12*VAR_12;
                VAR_10 += VAR_13*VAR_13;
                VAR_11 += VAR_12*VAR_13;
            }
        VAR_4[VAR_7][0] = VAR_8;
        VAR_4[VAR_7][1] = VAR_9;
        VAR_4[VAR_7][2] = VAR_10;
        VAR_4[VAR_7][3] = VAR_11;
        VAR_0 += 4;
        VAR_2 += 4;
    }
}
