
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0( uint8_t * VAR_0, uint8_t * VAR_1, int VAR_2, int VAR_3 )
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    if( VAR_2 < VAR_3 )
    {

        VAR_8 = 0;
        VAR_9 = 0;
        VAR_7 = 0;
        VAR_6 = VAR_3 / 2;
        VAR_4 = 0;
        for( VAR_5 = 0; VAR_5 < VAR_3; VAR_5++ )
        {
            VAR_8 += VAR_1[VAR_5];
            VAR_7++;
            VAR_6 -= VAR_2;
            if( VAR_6 < 0 )
            {
                VAR_9 = VAR_8 / VAR_7;
                VAR_0[VAR_4++] = VAR_9;
                VAR_8 = VAR_7 = 0;
                VAR_6 += VAR_3;
            }
        }
        for( ; VAR_4 < VAR_2; VAR_4++ )
        {
            VAR_0[VAR_4] = VAR_9;
        }
    }
    else
    {

        VAR_6 = VAR_2 / 2;
        VAR_5 = 0;
        for( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
        {
            VAR_0[VAR_4] = VAR_1[VAR_5];
            VAR_6 -= VAR_3;
            if( VAR_6 < 0 )
            {
                VAR_5++;
                VAR_6 += VAR_2;
            }
        }
    }
}
